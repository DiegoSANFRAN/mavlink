#!/usr/bin/env python3
"""Check mini C/Python interoperability using the checked-in generated libraries."""
import importlib.util
import os
from pathlib import Path
import subprocess
import tempfile

ROOT = Path(__file__).resolve().parents[1]
GENERATED = ROOT / "generated/include/mavlink/v2.0"
spec = importlib.util.spec_from_file_location("mini", GENERATED / "ivaq_rx_mini.py")
mini = importlib.util.module_from_spec(spec)
spec.loader.exec_module(mini)


def main():
    cases = []
    for msg_id in (61000, 61001, 61002):
        cls = mini.mavlink_map[msg_id]
        values = {}
        for index, (name, kind) in enumerate(zip(cls.fieldnames, cls.fieldtypes)):
            values[name] = (index + 0.25 if kind == "float" else
                            1_700_000_000_000 + index if kind == "uint64_t" else 1)
        if msg_id == 61001:
            values.update(rx_set_update=0, rx_set_reset=0)
        cases.append((msg_id, cls, values))

    # Check both decoders independently: Python frames -> C field checks,
    # then C frames -> Python field checks, including 64-bit epoch timestamps.
    source = ['#include <stdio.h>', '#include "ivaq_rx_mini/mavlink.h"',
              'int main(void) { mavlink_message_t msg; mavlink_status_t status;',
              'unsigned count=0; int byte; uint8_t buffer[MAVLINK_MAX_PACKET_LEN];',
              'while ((byte=getchar()) != EOF) {',
              'if (mavlink_parse_char(MAVLINK_COMM_0, byte, &msg, &status)) {',
              'switch (msg.msgid) {']
    for msg_id, cls, values in cases:
        stem = cls.msgname.lower()
        source += [f'case {msg_id}: {{ mavlink_{stem}_t packet;',
                   f'mavlink_msg_{stem}_decode(&msg, &packet);']
        for name, value in values.items():
            source.append(f'if (packet.{name} != {value}) return 2;')
        source += ['count++; break; }']
    source += ['default: return 3; } } }', 'if (count != 3) return 4;']
    for msg_id, cls, values in cases:
        stem = cls.msgname.lower()
        source.append(f'{{ mavlink_{stem}_t packet = {{0}};')
        for name, value in values.items():
            source.append(f'packet.{name} = {value};')
        source += [f'mavlink_msg_{stem}_encode(1, 25, &msg, &packet);',
                   'uint16_t length=mavlink_msg_to_send_buffer(buffer, &msg);',
                   'if (fwrite(buffer, 1, length, stdout) != length) return 5; }']
    source += ['return 0; }']
    encoder = mini.MAVLink(None, srcSystem=1, srcComponent=25)
    frames = b"".join(cls(**values).pack(encoder) for _, cls, values in cases)
    with tempfile.TemporaryDirectory(prefix="ivaq-mini-test-") as directory:
        c = Path(directory) / "check.c"
        binary = Path(directory) / "check"
        c.write_text("\n".join(source))
        subprocess.run([os.environ.get("CC", "cc"), "-std=c99", "-Wall", "-Werror",
                        "-I", str(GENERATED / "ivaq_rx_mini"), str(c), "-o", str(binary)], check=True)
        result = subprocess.run([str(binary)], input=frames, capture_output=True, check=True)
    decoded = mini.MAVLink(None).parse_buffer(result.stdout)
    assert len(decoded) == len(cases)
    for actual, (msg_id, _, values) in zip(decoded, cases):
        assert actual.get_msgId() == msg_id
        for name, value in values.items():
            assert getattr(actual, name) == value, (name, value, getattr(actual, name))
    print("PASS: all 3 mini messages exchanged between C and Python in both directions")


if __name__ == "__main__":
    main()
