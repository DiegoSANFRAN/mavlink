# IVAQ Rx mini MAVLink dialect

`message_definitions/v1.0/ivaq_rx_mini.xml` is the single source for both C and
Python. It describes one PCB with two fixed antennas, X and Y. It includes
`minimal.xml` and defines the standard `SYSTEM_TIME` message, retaining a small
firmware library without requiring separate C/Python XML copies.

The legacy `ivaq_mvk_c.xml`, `ivaq_mvk_py.xml`, and generated libraries are
unchanged. Mini is a new interface, not a drop-in firmware header replacement.

| ID | Message | Direction |
|---|---|---|
| 61000 | IVAQ_RX_MINI_PARAMS | Receiver to host |
| 61001 | IVAQ_RX_MINI_SET_PARAMS | Host to receiver |
| 61002 | IVAQ_RX_MINI_SIGNAL | Receiver to host |

These IDs do not collide with definitions in this repository. They are a local
project allocation, not a globally registered range. They require MAVLink 2.
Distinct names, IDs and enum prefixes allow host software to distinguish mini
from the original receiver. A host supporting both must load the corresponding
definitions; the mini library alone does not decode legacy custom messages.

## Contract

- Status belongs to the PCB; detection and saturation belong to each antenna.
  Card presence does not imply that the filesystem is writable.
- The detection mask is 0=none, 1=X, 2=Y, 3=both. It must agree with the
  per-antenna flags. Obsolete stage, antenna-switch, analog-enable, PCB-mode and
  slave-link controls are absent. Internal "already sent" bookkeeping is absent.
- `rx_time_reference` identifies boot milliseconds or synchronized UNIX epoch
  milliseconds for all three timestamps. The overall timestamp is the earliest
  valid antenna timestamp. A timestamp is zero when its detection is invalid;
  validity comes from the flags, not from testing the timestamp alone.
- Combined corrected/uncorrected magnitude is `sqrt(X*X + Y*Y)` for measurements
  matched to the same pulse, and NaN without a matched pair. Per-antenna values
  remain available for single-antenna detections. Firmware must define and test
  its pulse-pairing tolerance and calibration before emitting combined values;
  sharing a PCB does not imply equal pulse timestamps.
- `rx_set_capture` commands are separate from `rx_capture_state` status.
  Commands are no-change, start to
  SD, start to host, and stop. States are idle, acquiring, writing SD,
  transferring, and error. Host transfer is independent of USB versus UART.
  This XML does not define the binary capture-file transport or sample format.
- Send at most one action per command message. Reset/update zero and capture
  no-change mean no action. Firmware must reject conflicting actions, unknown
  values and unsupported/busy requests. An all-zero command is a no-op.
  Capture state is telemetry, not a correlated acknowledgement; this dialect
  does not yet provide request IDs or detailed command rejection reasons.

## Generate and check

From the repository root, use a Python environment with `lxml` and `future`:

```sh
python3 pymavlink/tools/mavgen.py --lang=C --wire-protocol=2.0 --strict-units --output=generated/include/mavlink/v2.0/ivaq_rx_mini message_definitions/v1.0/ivaq_rx_mini.xml
python3 pymavlink/tools/mavgen.py --lang=Python3 --wire-protocol=2.0 --strict-units --output=generated/include/mavlink/v2.0/ivaq_rx_mini.py message_definitions/v1.0/ivaq_rx_mini.xml
python3 scripts/check_ivaq_rx_mini.py
```

For C, add `generated/include/mavlink/v2.0/ivaq_rx_mini` to the include path and
include `ivaq_rx_mini/mavlink.h`. Python tools should load the generated
`ivaq_rx_mini.py` dialect instead of the legacy `ivaq_mvk.py` dialect.

## Firmware/host migration still required

Adapt firmware structures, the USB encoder/parser and update/reset/capture
handlers to the new API. Adapt Manifold/Python decoding and command construction
at the same time. Do not simply replace the legacy include directory: current
firmware references master/slave messages and removed fields. Validate actual
USB exchange, time synchronization, single/both-antenna detections, capture
start/stop/failure, and firmware updates on hardware before deployment.
