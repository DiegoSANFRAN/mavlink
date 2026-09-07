#pragma once
// MESSAGE IVAQ_RX_MINI_SIGNAL PACKING

#define MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL 61002


typedef struct __mavlink_ivaq_rx_mini_signal_t {
 uint64_t rx_signal_det_time; /*< [ms] Detected pulse timestamp in the clock selected by rx_time_reference. For the overall event use the earliest valid antenna timestamp; zero if no detection.*/
 uint64_t rx_signal_det_time_x; /*< [ms] Antenna detected pulse timestamp in the clock selected by rx_time_reference; zero when its detection flag is clear.*/
 uint64_t rx_signal_det_time_y; /*< [ms] Antenna detected pulse timestamp in the clock selected by rx_time_reference; zero when its detection flag is clear.*/
 float rx_signal_det_module_nocorr; /*< [V] Two-axis magnitude sqrt(X*X + Y*Y) from matched pulse amplitudes, using the corresponding corrected or uncorrected values; NaN if no matched pair.*/
 float rx_signal_det_module_corr; /*< [V] Two-axis magnitude sqrt(X*X + Y*Y) from matched pulse amplitudes, using the corresponding corrected or uncorrected values; NaN if no matched pair.*/
 float rx_signal_det_val_nocorr_x; /*< [V] Ivaq Rx X-ant Signal NoCorr value in detected pulse*/
 float rx_signal_det_val_corr_x; /*< [V] Ivaq Rx X-ant Signal Corr value in detected pulse*/
 float rx_noise_val_nocorr_x; /*< [V] Ivaq Rx X-ant Noise No Corr Demod value*/
 float rx_noise_val_corr_x; /*< [V] Ivaq Rx X-ant Noise Corr Demod value*/
 float rx_noise_std_nocorr_x; /*< [V] Ivaq Rx X-ant Noise No Corr Demod std deviation*/
 float rx_noise_std_corr_x; /*< [V] Ivaq Rx X-ant Noise Corr Demod std deviation*/
 float rx_signal_det_val_nocorr_y; /*< [V] Ivaq Rx Y-ant Signal NoCorr value in detected pulse*/
 float rx_signal_det_val_corr_y; /*< [V] Ivaq Rx Y-ant Signal Corr value in detected pulse*/
 float rx_noise_val_nocorr_y; /*< [V] Ivaq Rx Y-ant Noise No Corr Demod value*/
 float rx_noise_val_corr_y; /*< [V] Ivaq Rx Y-ant Noise Corr Demod value*/
 float rx_noise_std_nocorr_y; /*< [V] Ivaq Rx Y-ant Noise No Corr Demod std deviation*/
 float rx_noise_std_corr_y; /*< [V] Ivaq Rx Y-ant Noise Corr Demod std deviation*/
 uint8_t rx_signal_det_flag; /*<  Detection mask: 0=none, 1=X, 2=Y, 3=both. Must agree with the per-antenna detection flags.*/
 uint8_t rx_saturation_flag_x; /*<  Ivaq Rx X-ant Saturation flag*/
 uint8_t rx_signal_det_flag_x; /*<  Ivaq Rx X-ant Signal Detection flag*/
 uint8_t rx_signal_det_sat_flag_x; /*<  Ivaq Rx X-ant Saturation flag for Detected Signal*/
 uint8_t rx_saturation_flag_y; /*<  Ivaq Rx Y-ant Saturation flag*/
 uint8_t rx_signal_det_flag_y; /*<  Ivaq Rx Y-ant Signal Detection flag*/
 uint8_t rx_signal_det_sat_flag_y; /*<  Ivaq Rx Y-ant Saturation flag for Detected Signal*/
 uint8_t rx_time_reference; /*<  Clock reference for overall, X and Y detection timestamps.*/
} mavlink_ivaq_rx_mini_signal_t;

#define MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN 88
#define MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_MIN_LEN 88
#define MAVLINK_MSG_ID_61002_LEN 88
#define MAVLINK_MSG_ID_61002_MIN_LEN 88

#define MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_CRC 33
#define MAVLINK_MSG_ID_61002_CRC 33



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_MINI_SIGNAL { \
    61002, \
    "IVAQ_RX_MINI_SIGNAL", \
    25, \
    {  { "rx_signal_det_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 80, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_flag) }, \
         { "rx_signal_det_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_time) }, \
         { "rx_signal_det_module_nocorr", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_module_nocorr) }, \
         { "rx_signal_det_module_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_module_corr) }, \
         { "rx_saturation_flag_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 81, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_saturation_flag_x) }, \
         { "rx_signal_det_flag_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 82, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_flag_x) }, \
         { "rx_signal_det_sat_flag_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 83, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_sat_flag_x) }, \
         { "rx_signal_det_time_x", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_time_x) }, \
         { "rx_signal_det_val_nocorr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_val_nocorr_x) }, \
         { "rx_signal_det_val_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_val_corr_x) }, \
         { "rx_noise_val_nocorr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_val_nocorr_x) }, \
         { "rx_noise_val_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_val_corr_x) }, \
         { "rx_noise_std_nocorr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_std_nocorr_x) }, \
         { "rx_noise_std_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_std_corr_x) }, \
         { "rx_saturation_flag_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 84, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_saturation_flag_y) }, \
         { "rx_signal_det_flag_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 85, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_flag_y) }, \
         { "rx_signal_det_sat_flag_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 86, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_sat_flag_y) }, \
         { "rx_signal_det_time_y", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_time_y) }, \
         { "rx_signal_det_val_nocorr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_val_nocorr_y) }, \
         { "rx_signal_det_val_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_val_corr_y) }, \
         { "rx_noise_val_nocorr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_val_nocorr_y) }, \
         { "rx_noise_val_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_val_corr_y) }, \
         { "rx_noise_std_nocorr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_std_nocorr_y) }, \
         { "rx_noise_std_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_std_corr_y) }, \
         { "rx_time_reference", NULL, MAVLINK_TYPE_UINT8_T, 0, 87, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_time_reference) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_MINI_SIGNAL { \
    "IVAQ_RX_MINI_SIGNAL", \
    25, \
    {  { "rx_signal_det_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 80, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_flag) }, \
         { "rx_signal_det_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_time) }, \
         { "rx_signal_det_module_nocorr", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_module_nocorr) }, \
         { "rx_signal_det_module_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_module_corr) }, \
         { "rx_saturation_flag_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 81, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_saturation_flag_x) }, \
         { "rx_signal_det_flag_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 82, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_flag_x) }, \
         { "rx_signal_det_sat_flag_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 83, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_sat_flag_x) }, \
         { "rx_signal_det_time_x", NULL, MAVLINK_TYPE_UINT64_T, 0, 8, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_time_x) }, \
         { "rx_signal_det_val_nocorr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_val_nocorr_x) }, \
         { "rx_signal_det_val_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_val_corr_x) }, \
         { "rx_noise_val_nocorr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_val_nocorr_x) }, \
         { "rx_noise_val_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_val_corr_x) }, \
         { "rx_noise_std_nocorr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_std_nocorr_x) }, \
         { "rx_noise_std_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_std_corr_x) }, \
         { "rx_saturation_flag_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 84, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_saturation_flag_y) }, \
         { "rx_signal_det_flag_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 85, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_flag_y) }, \
         { "rx_signal_det_sat_flag_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 86, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_sat_flag_y) }, \
         { "rx_signal_det_time_y", NULL, MAVLINK_TYPE_UINT64_T, 0, 16, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_time_y) }, \
         { "rx_signal_det_val_nocorr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_val_nocorr_y) }, \
         { "rx_signal_det_val_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_signal_det_val_corr_y) }, \
         { "rx_noise_val_nocorr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_val_nocorr_y) }, \
         { "rx_noise_val_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_val_corr_y) }, \
         { "rx_noise_std_nocorr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 72, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_std_nocorr_y) }, \
         { "rx_noise_std_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_noise_std_corr_y) }, \
         { "rx_time_reference", NULL, MAVLINK_TYPE_UINT8_T, 0, 87, offsetof(mavlink_ivaq_rx_mini_signal_t, rx_time_reference) }, \
         } \
}
#endif

/**
 * @brief Pack a ivaq_rx_mini_signal message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_signal_det_flag  Detection mask: 0=none, 1=X, 2=Y, 3=both. Must agree with the per-antenna detection flags.
 * @param rx_signal_det_time [ms] Detected pulse timestamp in the clock selected by rx_time_reference. For the overall event use the earliest valid antenna timestamp; zero if no detection.
 * @param rx_signal_det_module_nocorr [V] Two-axis magnitude sqrt(X*X + Y*Y) from matched pulse amplitudes, using the corresponding corrected or uncorrected values; NaN if no matched pair.
 * @param rx_signal_det_module_corr [V] Two-axis magnitude sqrt(X*X + Y*Y) from matched pulse amplitudes, using the corresponding corrected or uncorrected values; NaN if no matched pair.
 * @param rx_saturation_flag_x  Ivaq Rx X-ant Saturation flag
 * @param rx_signal_det_flag_x  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_x  Ivaq Rx X-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_x [ms] Antenna detected pulse timestamp in the clock selected by rx_time_reference; zero when its detection flag is clear.
 * @param rx_signal_det_val_nocorr_x [V] Ivaq Rx X-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_x [V] Ivaq Rx X-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_x [V] Ivaq Rx X-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_x [V] Ivaq Rx X-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_x [V] Ivaq Rx X-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_x [V] Ivaq Rx X-ant Noise Corr Demod std deviation
 * @param rx_saturation_flag_y  Ivaq Rx Y-ant Saturation flag
 * @param rx_signal_det_flag_y  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_y  Ivaq Rx Y-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_y [ms] Antenna detected pulse timestamp in the clock selected by rx_time_reference; zero when its detection flag is clear.
 * @param rx_signal_det_val_nocorr_y [V] Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_y [V] Ivaq Rx Y-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_y [V] Ivaq Rx Y-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_y [V] Ivaq Rx Y-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_y [V] Ivaq Rx Y-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_y [V] Ivaq Rx Y-ant Noise Corr Demod std deviation
 * @param rx_time_reference  Clock reference for overall, X and Y detection timestamps.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_signal_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t rx_signal_det_flag, uint64_t rx_signal_det_time, float rx_signal_det_module_nocorr, float rx_signal_det_module_corr, uint8_t rx_saturation_flag_x, uint8_t rx_signal_det_flag_x, uint8_t rx_signal_det_sat_flag_x, uint64_t rx_signal_det_time_x, float rx_signal_det_val_nocorr_x, float rx_signal_det_val_corr_x, float rx_noise_val_nocorr_x, float rx_noise_val_corr_x, float rx_noise_std_nocorr_x, float rx_noise_std_corr_x, uint8_t rx_saturation_flag_y, uint8_t rx_signal_det_flag_y, uint8_t rx_signal_det_sat_flag_y, uint64_t rx_signal_det_time_y, float rx_signal_det_val_nocorr_y, float rx_signal_det_val_corr_y, float rx_noise_val_nocorr_y, float rx_noise_val_corr_y, float rx_noise_std_nocorr_y, float rx_noise_std_corr_y, uint8_t rx_time_reference)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN];
    _mav_put_uint64_t(buf, 0, rx_signal_det_time);
    _mav_put_uint64_t(buf, 8, rx_signal_det_time_x);
    _mav_put_uint64_t(buf, 16, rx_signal_det_time_y);
    _mav_put_float(buf, 24, rx_signal_det_module_nocorr);
    _mav_put_float(buf, 28, rx_signal_det_module_corr);
    _mav_put_float(buf, 32, rx_signal_det_val_nocorr_x);
    _mav_put_float(buf, 36, rx_signal_det_val_corr_x);
    _mav_put_float(buf, 40, rx_noise_val_nocorr_x);
    _mav_put_float(buf, 44, rx_noise_val_corr_x);
    _mav_put_float(buf, 48, rx_noise_std_nocorr_x);
    _mav_put_float(buf, 52, rx_noise_std_corr_x);
    _mav_put_float(buf, 56, rx_signal_det_val_nocorr_y);
    _mav_put_float(buf, 60, rx_signal_det_val_corr_y);
    _mav_put_float(buf, 64, rx_noise_val_nocorr_y);
    _mav_put_float(buf, 68, rx_noise_val_corr_y);
    _mav_put_float(buf, 72, rx_noise_std_nocorr_y);
    _mav_put_float(buf, 76, rx_noise_std_corr_y);
    _mav_put_uint8_t(buf, 80, rx_signal_det_flag);
    _mav_put_uint8_t(buf, 81, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 82, rx_signal_det_flag_x);
    _mav_put_uint8_t(buf, 83, rx_signal_det_sat_flag_x);
    _mav_put_uint8_t(buf, 84, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 85, rx_signal_det_flag_y);
    _mav_put_uint8_t(buf, 86, rx_signal_det_sat_flag_y);
    _mav_put_uint8_t(buf, 87, rx_time_reference);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN);
#else
    mavlink_ivaq_rx_mini_signal_t packet;
    packet.rx_signal_det_time = rx_signal_det_time;
    packet.rx_signal_det_time_x = rx_signal_det_time_x;
    packet.rx_signal_det_time_y = rx_signal_det_time_y;
    packet.rx_signal_det_module_nocorr = rx_signal_det_module_nocorr;
    packet.rx_signal_det_module_corr = rx_signal_det_module_corr;
    packet.rx_signal_det_val_nocorr_x = rx_signal_det_val_nocorr_x;
    packet.rx_signal_det_val_corr_x = rx_signal_det_val_corr_x;
    packet.rx_noise_val_nocorr_x = rx_noise_val_nocorr_x;
    packet.rx_noise_val_corr_x = rx_noise_val_corr_x;
    packet.rx_noise_std_nocorr_x = rx_noise_std_nocorr_x;
    packet.rx_noise_std_corr_x = rx_noise_std_corr_x;
    packet.rx_signal_det_val_nocorr_y = rx_signal_det_val_nocorr_y;
    packet.rx_signal_det_val_corr_y = rx_signal_det_val_corr_y;
    packet.rx_noise_val_nocorr_y = rx_noise_val_nocorr_y;
    packet.rx_noise_val_corr_y = rx_noise_val_corr_y;
    packet.rx_noise_std_nocorr_y = rx_noise_std_nocorr_y;
    packet.rx_noise_std_corr_y = rx_noise_std_corr_y;
    packet.rx_signal_det_flag = rx_signal_det_flag;
    packet.rx_saturation_flag_x = rx_saturation_flag_x;
    packet.rx_signal_det_flag_x = rx_signal_det_flag_x;
    packet.rx_signal_det_sat_flag_x = rx_signal_det_sat_flag_x;
    packet.rx_saturation_flag_y = rx_saturation_flag_y;
    packet.rx_signal_det_flag_y = rx_signal_det_flag_y;
    packet.rx_signal_det_sat_flag_y = rx_signal_det_sat_flag_y;
    packet.rx_time_reference = rx_time_reference;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_CRC);
}

/**
 * @brief Pack a ivaq_rx_mini_signal message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_signal_det_flag  Detection mask: 0=none, 1=X, 2=Y, 3=both. Must agree with the per-antenna detection flags.
 * @param rx_signal_det_time [ms] Detected pulse timestamp in the clock selected by rx_time_reference. For the overall event use the earliest valid antenna timestamp; zero if no detection.
 * @param rx_signal_det_module_nocorr [V] Two-axis magnitude sqrt(X*X + Y*Y) from matched pulse amplitudes, using the corresponding corrected or uncorrected values; NaN if no matched pair.
 * @param rx_signal_det_module_corr [V] Two-axis magnitude sqrt(X*X + Y*Y) from matched pulse amplitudes, using the corresponding corrected or uncorrected values; NaN if no matched pair.
 * @param rx_saturation_flag_x  Ivaq Rx X-ant Saturation flag
 * @param rx_signal_det_flag_x  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_x  Ivaq Rx X-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_x [ms] Antenna detected pulse timestamp in the clock selected by rx_time_reference; zero when its detection flag is clear.
 * @param rx_signal_det_val_nocorr_x [V] Ivaq Rx X-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_x [V] Ivaq Rx X-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_x [V] Ivaq Rx X-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_x [V] Ivaq Rx X-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_x [V] Ivaq Rx X-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_x [V] Ivaq Rx X-ant Noise Corr Demod std deviation
 * @param rx_saturation_flag_y  Ivaq Rx Y-ant Saturation flag
 * @param rx_signal_det_flag_y  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_y  Ivaq Rx Y-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_y [ms] Antenna detected pulse timestamp in the clock selected by rx_time_reference; zero when its detection flag is clear.
 * @param rx_signal_det_val_nocorr_y [V] Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_y [V] Ivaq Rx Y-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_y [V] Ivaq Rx Y-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_y [V] Ivaq Rx Y-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_y [V] Ivaq Rx Y-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_y [V] Ivaq Rx Y-ant Noise Corr Demod std deviation
 * @param rx_time_reference  Clock reference for overall, X and Y detection timestamps.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_signal_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t rx_signal_det_flag, uint64_t rx_signal_det_time, float rx_signal_det_module_nocorr, float rx_signal_det_module_corr, uint8_t rx_saturation_flag_x, uint8_t rx_signal_det_flag_x, uint8_t rx_signal_det_sat_flag_x, uint64_t rx_signal_det_time_x, float rx_signal_det_val_nocorr_x, float rx_signal_det_val_corr_x, float rx_noise_val_nocorr_x, float rx_noise_val_corr_x, float rx_noise_std_nocorr_x, float rx_noise_std_corr_x, uint8_t rx_saturation_flag_y, uint8_t rx_signal_det_flag_y, uint8_t rx_signal_det_sat_flag_y, uint64_t rx_signal_det_time_y, float rx_signal_det_val_nocorr_y, float rx_signal_det_val_corr_y, float rx_noise_val_nocorr_y, float rx_noise_val_corr_y, float rx_noise_std_nocorr_y, float rx_noise_std_corr_y, uint8_t rx_time_reference)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN];
    _mav_put_uint64_t(buf, 0, rx_signal_det_time);
    _mav_put_uint64_t(buf, 8, rx_signal_det_time_x);
    _mav_put_uint64_t(buf, 16, rx_signal_det_time_y);
    _mav_put_float(buf, 24, rx_signal_det_module_nocorr);
    _mav_put_float(buf, 28, rx_signal_det_module_corr);
    _mav_put_float(buf, 32, rx_signal_det_val_nocorr_x);
    _mav_put_float(buf, 36, rx_signal_det_val_corr_x);
    _mav_put_float(buf, 40, rx_noise_val_nocorr_x);
    _mav_put_float(buf, 44, rx_noise_val_corr_x);
    _mav_put_float(buf, 48, rx_noise_std_nocorr_x);
    _mav_put_float(buf, 52, rx_noise_std_corr_x);
    _mav_put_float(buf, 56, rx_signal_det_val_nocorr_y);
    _mav_put_float(buf, 60, rx_signal_det_val_corr_y);
    _mav_put_float(buf, 64, rx_noise_val_nocorr_y);
    _mav_put_float(buf, 68, rx_noise_val_corr_y);
    _mav_put_float(buf, 72, rx_noise_std_nocorr_y);
    _mav_put_float(buf, 76, rx_noise_std_corr_y);
    _mav_put_uint8_t(buf, 80, rx_signal_det_flag);
    _mav_put_uint8_t(buf, 81, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 82, rx_signal_det_flag_x);
    _mav_put_uint8_t(buf, 83, rx_signal_det_sat_flag_x);
    _mav_put_uint8_t(buf, 84, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 85, rx_signal_det_flag_y);
    _mav_put_uint8_t(buf, 86, rx_signal_det_sat_flag_y);
    _mav_put_uint8_t(buf, 87, rx_time_reference);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN);
#else
    mavlink_ivaq_rx_mini_signal_t packet;
    packet.rx_signal_det_time = rx_signal_det_time;
    packet.rx_signal_det_time_x = rx_signal_det_time_x;
    packet.rx_signal_det_time_y = rx_signal_det_time_y;
    packet.rx_signal_det_module_nocorr = rx_signal_det_module_nocorr;
    packet.rx_signal_det_module_corr = rx_signal_det_module_corr;
    packet.rx_signal_det_val_nocorr_x = rx_signal_det_val_nocorr_x;
    packet.rx_signal_det_val_corr_x = rx_signal_det_val_corr_x;
    packet.rx_noise_val_nocorr_x = rx_noise_val_nocorr_x;
    packet.rx_noise_val_corr_x = rx_noise_val_corr_x;
    packet.rx_noise_std_nocorr_x = rx_noise_std_nocorr_x;
    packet.rx_noise_std_corr_x = rx_noise_std_corr_x;
    packet.rx_signal_det_val_nocorr_y = rx_signal_det_val_nocorr_y;
    packet.rx_signal_det_val_corr_y = rx_signal_det_val_corr_y;
    packet.rx_noise_val_nocorr_y = rx_noise_val_nocorr_y;
    packet.rx_noise_val_corr_y = rx_noise_val_corr_y;
    packet.rx_noise_std_nocorr_y = rx_noise_std_nocorr_y;
    packet.rx_noise_std_corr_y = rx_noise_std_corr_y;
    packet.rx_signal_det_flag = rx_signal_det_flag;
    packet.rx_saturation_flag_x = rx_saturation_flag_x;
    packet.rx_signal_det_flag_x = rx_signal_det_flag_x;
    packet.rx_signal_det_sat_flag_x = rx_signal_det_sat_flag_x;
    packet.rx_saturation_flag_y = rx_saturation_flag_y;
    packet.rx_signal_det_flag_y = rx_signal_det_flag_y;
    packet.rx_signal_det_sat_flag_y = rx_signal_det_sat_flag_y;
    packet.rx_time_reference = rx_time_reference;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN);
#endif
}

/**
 * @brief Pack a ivaq_rx_mini_signal message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rx_signal_det_flag  Detection mask: 0=none, 1=X, 2=Y, 3=both. Must agree with the per-antenna detection flags.
 * @param rx_signal_det_time [ms] Detected pulse timestamp in the clock selected by rx_time_reference. For the overall event use the earliest valid antenna timestamp; zero if no detection.
 * @param rx_signal_det_module_nocorr [V] Two-axis magnitude sqrt(X*X + Y*Y) from matched pulse amplitudes, using the corresponding corrected or uncorrected values; NaN if no matched pair.
 * @param rx_signal_det_module_corr [V] Two-axis magnitude sqrt(X*X + Y*Y) from matched pulse amplitudes, using the corresponding corrected or uncorrected values; NaN if no matched pair.
 * @param rx_saturation_flag_x  Ivaq Rx X-ant Saturation flag
 * @param rx_signal_det_flag_x  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_x  Ivaq Rx X-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_x [ms] Antenna detected pulse timestamp in the clock selected by rx_time_reference; zero when its detection flag is clear.
 * @param rx_signal_det_val_nocorr_x [V] Ivaq Rx X-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_x [V] Ivaq Rx X-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_x [V] Ivaq Rx X-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_x [V] Ivaq Rx X-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_x [V] Ivaq Rx X-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_x [V] Ivaq Rx X-ant Noise Corr Demod std deviation
 * @param rx_saturation_flag_y  Ivaq Rx Y-ant Saturation flag
 * @param rx_signal_det_flag_y  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_y  Ivaq Rx Y-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_y [ms] Antenna detected pulse timestamp in the clock selected by rx_time_reference; zero when its detection flag is clear.
 * @param rx_signal_det_val_nocorr_y [V] Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_y [V] Ivaq Rx Y-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_y [V] Ivaq Rx Y-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_y [V] Ivaq Rx Y-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_y [V] Ivaq Rx Y-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_y [V] Ivaq Rx Y-ant Noise Corr Demod std deviation
 * @param rx_time_reference  Clock reference for overall, X and Y detection timestamps.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_signal_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t rx_signal_det_flag,uint64_t rx_signal_det_time,float rx_signal_det_module_nocorr,float rx_signal_det_module_corr,uint8_t rx_saturation_flag_x,uint8_t rx_signal_det_flag_x,uint8_t rx_signal_det_sat_flag_x,uint64_t rx_signal_det_time_x,float rx_signal_det_val_nocorr_x,float rx_signal_det_val_corr_x,float rx_noise_val_nocorr_x,float rx_noise_val_corr_x,float rx_noise_std_nocorr_x,float rx_noise_std_corr_x,uint8_t rx_saturation_flag_y,uint8_t rx_signal_det_flag_y,uint8_t rx_signal_det_sat_flag_y,uint64_t rx_signal_det_time_y,float rx_signal_det_val_nocorr_y,float rx_signal_det_val_corr_y,float rx_noise_val_nocorr_y,float rx_noise_val_corr_y,float rx_noise_std_nocorr_y,float rx_noise_std_corr_y,uint8_t rx_time_reference)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN];
    _mav_put_uint64_t(buf, 0, rx_signal_det_time);
    _mav_put_uint64_t(buf, 8, rx_signal_det_time_x);
    _mav_put_uint64_t(buf, 16, rx_signal_det_time_y);
    _mav_put_float(buf, 24, rx_signal_det_module_nocorr);
    _mav_put_float(buf, 28, rx_signal_det_module_corr);
    _mav_put_float(buf, 32, rx_signal_det_val_nocorr_x);
    _mav_put_float(buf, 36, rx_signal_det_val_corr_x);
    _mav_put_float(buf, 40, rx_noise_val_nocorr_x);
    _mav_put_float(buf, 44, rx_noise_val_corr_x);
    _mav_put_float(buf, 48, rx_noise_std_nocorr_x);
    _mav_put_float(buf, 52, rx_noise_std_corr_x);
    _mav_put_float(buf, 56, rx_signal_det_val_nocorr_y);
    _mav_put_float(buf, 60, rx_signal_det_val_corr_y);
    _mav_put_float(buf, 64, rx_noise_val_nocorr_y);
    _mav_put_float(buf, 68, rx_noise_val_corr_y);
    _mav_put_float(buf, 72, rx_noise_std_nocorr_y);
    _mav_put_float(buf, 76, rx_noise_std_corr_y);
    _mav_put_uint8_t(buf, 80, rx_signal_det_flag);
    _mav_put_uint8_t(buf, 81, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 82, rx_signal_det_flag_x);
    _mav_put_uint8_t(buf, 83, rx_signal_det_sat_flag_x);
    _mav_put_uint8_t(buf, 84, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 85, rx_signal_det_flag_y);
    _mav_put_uint8_t(buf, 86, rx_signal_det_sat_flag_y);
    _mav_put_uint8_t(buf, 87, rx_time_reference);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN);
#else
    mavlink_ivaq_rx_mini_signal_t packet;
    packet.rx_signal_det_time = rx_signal_det_time;
    packet.rx_signal_det_time_x = rx_signal_det_time_x;
    packet.rx_signal_det_time_y = rx_signal_det_time_y;
    packet.rx_signal_det_module_nocorr = rx_signal_det_module_nocorr;
    packet.rx_signal_det_module_corr = rx_signal_det_module_corr;
    packet.rx_signal_det_val_nocorr_x = rx_signal_det_val_nocorr_x;
    packet.rx_signal_det_val_corr_x = rx_signal_det_val_corr_x;
    packet.rx_noise_val_nocorr_x = rx_noise_val_nocorr_x;
    packet.rx_noise_val_corr_x = rx_noise_val_corr_x;
    packet.rx_noise_std_nocorr_x = rx_noise_std_nocorr_x;
    packet.rx_noise_std_corr_x = rx_noise_std_corr_x;
    packet.rx_signal_det_val_nocorr_y = rx_signal_det_val_nocorr_y;
    packet.rx_signal_det_val_corr_y = rx_signal_det_val_corr_y;
    packet.rx_noise_val_nocorr_y = rx_noise_val_nocorr_y;
    packet.rx_noise_val_corr_y = rx_noise_val_corr_y;
    packet.rx_noise_std_nocorr_y = rx_noise_std_nocorr_y;
    packet.rx_noise_std_corr_y = rx_noise_std_corr_y;
    packet.rx_signal_det_flag = rx_signal_det_flag;
    packet.rx_saturation_flag_x = rx_saturation_flag_x;
    packet.rx_signal_det_flag_x = rx_signal_det_flag_x;
    packet.rx_signal_det_sat_flag_x = rx_signal_det_sat_flag_x;
    packet.rx_saturation_flag_y = rx_saturation_flag_y;
    packet.rx_signal_det_flag_y = rx_signal_det_flag_y;
    packet.rx_signal_det_sat_flag_y = rx_signal_det_sat_flag_y;
    packet.rx_time_reference = rx_time_reference;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_CRC);
}

/**
 * @brief Encode a ivaq_rx_mini_signal struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_mini_signal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_signal_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ivaq_rx_mini_signal_t* ivaq_rx_mini_signal)
{
    return mavlink_msg_ivaq_rx_mini_signal_pack(system_id, component_id, msg, ivaq_rx_mini_signal->rx_signal_det_flag, ivaq_rx_mini_signal->rx_signal_det_time, ivaq_rx_mini_signal->rx_signal_det_module_nocorr, ivaq_rx_mini_signal->rx_signal_det_module_corr, ivaq_rx_mini_signal->rx_saturation_flag_x, ivaq_rx_mini_signal->rx_signal_det_flag_x, ivaq_rx_mini_signal->rx_signal_det_sat_flag_x, ivaq_rx_mini_signal->rx_signal_det_time_x, ivaq_rx_mini_signal->rx_signal_det_val_nocorr_x, ivaq_rx_mini_signal->rx_signal_det_val_corr_x, ivaq_rx_mini_signal->rx_noise_val_nocorr_x, ivaq_rx_mini_signal->rx_noise_val_corr_x, ivaq_rx_mini_signal->rx_noise_std_nocorr_x, ivaq_rx_mini_signal->rx_noise_std_corr_x, ivaq_rx_mini_signal->rx_saturation_flag_y, ivaq_rx_mini_signal->rx_signal_det_flag_y, ivaq_rx_mini_signal->rx_signal_det_sat_flag_y, ivaq_rx_mini_signal->rx_signal_det_time_y, ivaq_rx_mini_signal->rx_signal_det_val_nocorr_y, ivaq_rx_mini_signal->rx_signal_det_val_corr_y, ivaq_rx_mini_signal->rx_noise_val_nocorr_y, ivaq_rx_mini_signal->rx_noise_val_corr_y, ivaq_rx_mini_signal->rx_noise_std_nocorr_y, ivaq_rx_mini_signal->rx_noise_std_corr_y, ivaq_rx_mini_signal->rx_time_reference);
}

/**
 * @brief Encode a ivaq_rx_mini_signal struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_mini_signal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_signal_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ivaq_rx_mini_signal_t* ivaq_rx_mini_signal)
{
    return mavlink_msg_ivaq_rx_mini_signal_pack_chan(system_id, component_id, chan, msg, ivaq_rx_mini_signal->rx_signal_det_flag, ivaq_rx_mini_signal->rx_signal_det_time, ivaq_rx_mini_signal->rx_signal_det_module_nocorr, ivaq_rx_mini_signal->rx_signal_det_module_corr, ivaq_rx_mini_signal->rx_saturation_flag_x, ivaq_rx_mini_signal->rx_signal_det_flag_x, ivaq_rx_mini_signal->rx_signal_det_sat_flag_x, ivaq_rx_mini_signal->rx_signal_det_time_x, ivaq_rx_mini_signal->rx_signal_det_val_nocorr_x, ivaq_rx_mini_signal->rx_signal_det_val_corr_x, ivaq_rx_mini_signal->rx_noise_val_nocorr_x, ivaq_rx_mini_signal->rx_noise_val_corr_x, ivaq_rx_mini_signal->rx_noise_std_nocorr_x, ivaq_rx_mini_signal->rx_noise_std_corr_x, ivaq_rx_mini_signal->rx_saturation_flag_y, ivaq_rx_mini_signal->rx_signal_det_flag_y, ivaq_rx_mini_signal->rx_signal_det_sat_flag_y, ivaq_rx_mini_signal->rx_signal_det_time_y, ivaq_rx_mini_signal->rx_signal_det_val_nocorr_y, ivaq_rx_mini_signal->rx_signal_det_val_corr_y, ivaq_rx_mini_signal->rx_noise_val_nocorr_y, ivaq_rx_mini_signal->rx_noise_val_corr_y, ivaq_rx_mini_signal->rx_noise_std_nocorr_y, ivaq_rx_mini_signal->rx_noise_std_corr_y, ivaq_rx_mini_signal->rx_time_reference);
}

/**
 * @brief Encode a ivaq_rx_mini_signal struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_mini_signal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_signal_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ivaq_rx_mini_signal_t* ivaq_rx_mini_signal)
{
    return mavlink_msg_ivaq_rx_mini_signal_pack_status(system_id, component_id, _status, msg,  ivaq_rx_mini_signal->rx_signal_det_flag, ivaq_rx_mini_signal->rx_signal_det_time, ivaq_rx_mini_signal->rx_signal_det_module_nocorr, ivaq_rx_mini_signal->rx_signal_det_module_corr, ivaq_rx_mini_signal->rx_saturation_flag_x, ivaq_rx_mini_signal->rx_signal_det_flag_x, ivaq_rx_mini_signal->rx_signal_det_sat_flag_x, ivaq_rx_mini_signal->rx_signal_det_time_x, ivaq_rx_mini_signal->rx_signal_det_val_nocorr_x, ivaq_rx_mini_signal->rx_signal_det_val_corr_x, ivaq_rx_mini_signal->rx_noise_val_nocorr_x, ivaq_rx_mini_signal->rx_noise_val_corr_x, ivaq_rx_mini_signal->rx_noise_std_nocorr_x, ivaq_rx_mini_signal->rx_noise_std_corr_x, ivaq_rx_mini_signal->rx_saturation_flag_y, ivaq_rx_mini_signal->rx_signal_det_flag_y, ivaq_rx_mini_signal->rx_signal_det_sat_flag_y, ivaq_rx_mini_signal->rx_signal_det_time_y, ivaq_rx_mini_signal->rx_signal_det_val_nocorr_y, ivaq_rx_mini_signal->rx_signal_det_val_corr_y, ivaq_rx_mini_signal->rx_noise_val_nocorr_y, ivaq_rx_mini_signal->rx_noise_val_corr_y, ivaq_rx_mini_signal->rx_noise_std_nocorr_y, ivaq_rx_mini_signal->rx_noise_std_corr_y, ivaq_rx_mini_signal->rx_time_reference);
}

/**
 * @brief Send a ivaq_rx_mini_signal message
 * @param chan MAVLink channel to send the message
 *
 * @param rx_signal_det_flag  Detection mask: 0=none, 1=X, 2=Y, 3=both. Must agree with the per-antenna detection flags.
 * @param rx_signal_det_time [ms] Detected pulse timestamp in the clock selected by rx_time_reference. For the overall event use the earliest valid antenna timestamp; zero if no detection.
 * @param rx_signal_det_module_nocorr [V] Two-axis magnitude sqrt(X*X + Y*Y) from matched pulse amplitudes, using the corresponding corrected or uncorrected values; NaN if no matched pair.
 * @param rx_signal_det_module_corr [V] Two-axis magnitude sqrt(X*X + Y*Y) from matched pulse amplitudes, using the corresponding corrected or uncorrected values; NaN if no matched pair.
 * @param rx_saturation_flag_x  Ivaq Rx X-ant Saturation flag
 * @param rx_signal_det_flag_x  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_x  Ivaq Rx X-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_x [ms] Antenna detected pulse timestamp in the clock selected by rx_time_reference; zero when its detection flag is clear.
 * @param rx_signal_det_val_nocorr_x [V] Ivaq Rx X-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_x [V] Ivaq Rx X-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_x [V] Ivaq Rx X-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_x [V] Ivaq Rx X-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_x [V] Ivaq Rx X-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_x [V] Ivaq Rx X-ant Noise Corr Demod std deviation
 * @param rx_saturation_flag_y  Ivaq Rx Y-ant Saturation flag
 * @param rx_signal_det_flag_y  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_y  Ivaq Rx Y-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_y [ms] Antenna detected pulse timestamp in the clock selected by rx_time_reference; zero when its detection flag is clear.
 * @param rx_signal_det_val_nocorr_y [V] Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_y [V] Ivaq Rx Y-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_y [V] Ivaq Rx Y-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_y [V] Ivaq Rx Y-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_y [V] Ivaq Rx Y-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_y [V] Ivaq Rx Y-ant Noise Corr Demod std deviation
 * @param rx_time_reference  Clock reference for overall, X and Y detection timestamps.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ivaq_rx_mini_signal_send(mavlink_channel_t chan, uint8_t rx_signal_det_flag, uint64_t rx_signal_det_time, float rx_signal_det_module_nocorr, float rx_signal_det_module_corr, uint8_t rx_saturation_flag_x, uint8_t rx_signal_det_flag_x, uint8_t rx_signal_det_sat_flag_x, uint64_t rx_signal_det_time_x, float rx_signal_det_val_nocorr_x, float rx_signal_det_val_corr_x, float rx_noise_val_nocorr_x, float rx_noise_val_corr_x, float rx_noise_std_nocorr_x, float rx_noise_std_corr_x, uint8_t rx_saturation_flag_y, uint8_t rx_signal_det_flag_y, uint8_t rx_signal_det_sat_flag_y, uint64_t rx_signal_det_time_y, float rx_signal_det_val_nocorr_y, float rx_signal_det_val_corr_y, float rx_noise_val_nocorr_y, float rx_noise_val_corr_y, float rx_noise_std_nocorr_y, float rx_noise_std_corr_y, uint8_t rx_time_reference)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN];
    _mav_put_uint64_t(buf, 0, rx_signal_det_time);
    _mav_put_uint64_t(buf, 8, rx_signal_det_time_x);
    _mav_put_uint64_t(buf, 16, rx_signal_det_time_y);
    _mav_put_float(buf, 24, rx_signal_det_module_nocorr);
    _mav_put_float(buf, 28, rx_signal_det_module_corr);
    _mav_put_float(buf, 32, rx_signal_det_val_nocorr_x);
    _mav_put_float(buf, 36, rx_signal_det_val_corr_x);
    _mav_put_float(buf, 40, rx_noise_val_nocorr_x);
    _mav_put_float(buf, 44, rx_noise_val_corr_x);
    _mav_put_float(buf, 48, rx_noise_std_nocorr_x);
    _mav_put_float(buf, 52, rx_noise_std_corr_x);
    _mav_put_float(buf, 56, rx_signal_det_val_nocorr_y);
    _mav_put_float(buf, 60, rx_signal_det_val_corr_y);
    _mav_put_float(buf, 64, rx_noise_val_nocorr_y);
    _mav_put_float(buf, 68, rx_noise_val_corr_y);
    _mav_put_float(buf, 72, rx_noise_std_nocorr_y);
    _mav_put_float(buf, 76, rx_noise_std_corr_y);
    _mav_put_uint8_t(buf, 80, rx_signal_det_flag);
    _mav_put_uint8_t(buf, 81, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 82, rx_signal_det_flag_x);
    _mav_put_uint8_t(buf, 83, rx_signal_det_sat_flag_x);
    _mav_put_uint8_t(buf, 84, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 85, rx_signal_det_flag_y);
    _mav_put_uint8_t(buf, 86, rx_signal_det_sat_flag_y);
    _mav_put_uint8_t(buf, 87, rx_time_reference);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL, buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_CRC);
#else
    mavlink_ivaq_rx_mini_signal_t packet;
    packet.rx_signal_det_time = rx_signal_det_time;
    packet.rx_signal_det_time_x = rx_signal_det_time_x;
    packet.rx_signal_det_time_y = rx_signal_det_time_y;
    packet.rx_signal_det_module_nocorr = rx_signal_det_module_nocorr;
    packet.rx_signal_det_module_corr = rx_signal_det_module_corr;
    packet.rx_signal_det_val_nocorr_x = rx_signal_det_val_nocorr_x;
    packet.rx_signal_det_val_corr_x = rx_signal_det_val_corr_x;
    packet.rx_noise_val_nocorr_x = rx_noise_val_nocorr_x;
    packet.rx_noise_val_corr_x = rx_noise_val_corr_x;
    packet.rx_noise_std_nocorr_x = rx_noise_std_nocorr_x;
    packet.rx_noise_std_corr_x = rx_noise_std_corr_x;
    packet.rx_signal_det_val_nocorr_y = rx_signal_det_val_nocorr_y;
    packet.rx_signal_det_val_corr_y = rx_signal_det_val_corr_y;
    packet.rx_noise_val_nocorr_y = rx_noise_val_nocorr_y;
    packet.rx_noise_val_corr_y = rx_noise_val_corr_y;
    packet.rx_noise_std_nocorr_y = rx_noise_std_nocorr_y;
    packet.rx_noise_std_corr_y = rx_noise_std_corr_y;
    packet.rx_signal_det_flag = rx_signal_det_flag;
    packet.rx_saturation_flag_x = rx_saturation_flag_x;
    packet.rx_signal_det_flag_x = rx_signal_det_flag_x;
    packet.rx_signal_det_sat_flag_x = rx_signal_det_sat_flag_x;
    packet.rx_saturation_flag_y = rx_saturation_flag_y;
    packet.rx_signal_det_flag_y = rx_signal_det_flag_y;
    packet.rx_signal_det_sat_flag_y = rx_signal_det_sat_flag_y;
    packet.rx_time_reference = rx_time_reference;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL, (const char *)&packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_CRC);
#endif
}

/**
 * @brief Send a ivaq_rx_mini_signal message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ivaq_rx_mini_signal_send_struct(mavlink_channel_t chan, const mavlink_ivaq_rx_mini_signal_t* ivaq_rx_mini_signal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ivaq_rx_mini_signal_send(chan, ivaq_rx_mini_signal->rx_signal_det_flag, ivaq_rx_mini_signal->rx_signal_det_time, ivaq_rx_mini_signal->rx_signal_det_module_nocorr, ivaq_rx_mini_signal->rx_signal_det_module_corr, ivaq_rx_mini_signal->rx_saturation_flag_x, ivaq_rx_mini_signal->rx_signal_det_flag_x, ivaq_rx_mini_signal->rx_signal_det_sat_flag_x, ivaq_rx_mini_signal->rx_signal_det_time_x, ivaq_rx_mini_signal->rx_signal_det_val_nocorr_x, ivaq_rx_mini_signal->rx_signal_det_val_corr_x, ivaq_rx_mini_signal->rx_noise_val_nocorr_x, ivaq_rx_mini_signal->rx_noise_val_corr_x, ivaq_rx_mini_signal->rx_noise_std_nocorr_x, ivaq_rx_mini_signal->rx_noise_std_corr_x, ivaq_rx_mini_signal->rx_saturation_flag_y, ivaq_rx_mini_signal->rx_signal_det_flag_y, ivaq_rx_mini_signal->rx_signal_det_sat_flag_y, ivaq_rx_mini_signal->rx_signal_det_time_y, ivaq_rx_mini_signal->rx_signal_det_val_nocorr_y, ivaq_rx_mini_signal->rx_signal_det_val_corr_y, ivaq_rx_mini_signal->rx_noise_val_nocorr_y, ivaq_rx_mini_signal->rx_noise_val_corr_y, ivaq_rx_mini_signal->rx_noise_std_nocorr_y, ivaq_rx_mini_signal->rx_noise_std_corr_y, ivaq_rx_mini_signal->rx_time_reference);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL, (const char *)ivaq_rx_mini_signal, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_CRC);
#endif
}

#if MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ivaq_rx_mini_signal_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t rx_signal_det_flag, uint64_t rx_signal_det_time, float rx_signal_det_module_nocorr, float rx_signal_det_module_corr, uint8_t rx_saturation_flag_x, uint8_t rx_signal_det_flag_x, uint8_t rx_signal_det_sat_flag_x, uint64_t rx_signal_det_time_x, float rx_signal_det_val_nocorr_x, float rx_signal_det_val_corr_x, float rx_noise_val_nocorr_x, float rx_noise_val_corr_x, float rx_noise_std_nocorr_x, float rx_noise_std_corr_x, uint8_t rx_saturation_flag_y, uint8_t rx_signal_det_flag_y, uint8_t rx_signal_det_sat_flag_y, uint64_t rx_signal_det_time_y, float rx_signal_det_val_nocorr_y, float rx_signal_det_val_corr_y, float rx_noise_val_nocorr_y, float rx_noise_val_corr_y, float rx_noise_std_nocorr_y, float rx_noise_std_corr_y, uint8_t rx_time_reference)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, rx_signal_det_time);
    _mav_put_uint64_t(buf, 8, rx_signal_det_time_x);
    _mav_put_uint64_t(buf, 16, rx_signal_det_time_y);
    _mav_put_float(buf, 24, rx_signal_det_module_nocorr);
    _mav_put_float(buf, 28, rx_signal_det_module_corr);
    _mav_put_float(buf, 32, rx_signal_det_val_nocorr_x);
    _mav_put_float(buf, 36, rx_signal_det_val_corr_x);
    _mav_put_float(buf, 40, rx_noise_val_nocorr_x);
    _mav_put_float(buf, 44, rx_noise_val_corr_x);
    _mav_put_float(buf, 48, rx_noise_std_nocorr_x);
    _mav_put_float(buf, 52, rx_noise_std_corr_x);
    _mav_put_float(buf, 56, rx_signal_det_val_nocorr_y);
    _mav_put_float(buf, 60, rx_signal_det_val_corr_y);
    _mav_put_float(buf, 64, rx_noise_val_nocorr_y);
    _mav_put_float(buf, 68, rx_noise_val_corr_y);
    _mav_put_float(buf, 72, rx_noise_std_nocorr_y);
    _mav_put_float(buf, 76, rx_noise_std_corr_y);
    _mav_put_uint8_t(buf, 80, rx_signal_det_flag);
    _mav_put_uint8_t(buf, 81, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 82, rx_signal_det_flag_x);
    _mav_put_uint8_t(buf, 83, rx_signal_det_sat_flag_x);
    _mav_put_uint8_t(buf, 84, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 85, rx_signal_det_flag_y);
    _mav_put_uint8_t(buf, 86, rx_signal_det_sat_flag_y);
    _mav_put_uint8_t(buf, 87, rx_time_reference);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL, buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_CRC);
#else
    mavlink_ivaq_rx_mini_signal_t *packet = (mavlink_ivaq_rx_mini_signal_t *)msgbuf;
    packet->rx_signal_det_time = rx_signal_det_time;
    packet->rx_signal_det_time_x = rx_signal_det_time_x;
    packet->rx_signal_det_time_y = rx_signal_det_time_y;
    packet->rx_signal_det_module_nocorr = rx_signal_det_module_nocorr;
    packet->rx_signal_det_module_corr = rx_signal_det_module_corr;
    packet->rx_signal_det_val_nocorr_x = rx_signal_det_val_nocorr_x;
    packet->rx_signal_det_val_corr_x = rx_signal_det_val_corr_x;
    packet->rx_noise_val_nocorr_x = rx_noise_val_nocorr_x;
    packet->rx_noise_val_corr_x = rx_noise_val_corr_x;
    packet->rx_noise_std_nocorr_x = rx_noise_std_nocorr_x;
    packet->rx_noise_std_corr_x = rx_noise_std_corr_x;
    packet->rx_signal_det_val_nocorr_y = rx_signal_det_val_nocorr_y;
    packet->rx_signal_det_val_corr_y = rx_signal_det_val_corr_y;
    packet->rx_noise_val_nocorr_y = rx_noise_val_nocorr_y;
    packet->rx_noise_val_corr_y = rx_noise_val_corr_y;
    packet->rx_noise_std_nocorr_y = rx_noise_std_nocorr_y;
    packet->rx_noise_std_corr_y = rx_noise_std_corr_y;
    packet->rx_signal_det_flag = rx_signal_det_flag;
    packet->rx_saturation_flag_x = rx_saturation_flag_x;
    packet->rx_signal_det_flag_x = rx_signal_det_flag_x;
    packet->rx_signal_det_sat_flag_x = rx_signal_det_sat_flag_x;
    packet->rx_saturation_flag_y = rx_saturation_flag_y;
    packet->rx_signal_det_flag_y = rx_signal_det_flag_y;
    packet->rx_signal_det_sat_flag_y = rx_signal_det_sat_flag_y;
    packet->rx_time_reference = rx_time_reference;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL, (const char *)packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_CRC);
#endif
}
#endif

#endif

// MESSAGE IVAQ_RX_MINI_SIGNAL UNPACKING


/**
 * @brief Get field rx_signal_det_flag from ivaq_rx_mini_signal message
 *
 * @return  Detection mask: 0=none, 1=X, 2=Y, 3=both. Must agree with the per-antenna detection flags.
 */
static inline uint8_t mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  80);
}

/**
 * @brief Get field rx_signal_det_time from ivaq_rx_mini_signal message
 *
 * @return [ms] Detected pulse timestamp in the clock selected by rx_time_reference. For the overall event use the earliest valid antenna timestamp; zero if no detection.
 */
static inline uint64_t mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field rx_signal_det_module_nocorr from ivaq_rx_mini_signal message
 *
 * @return [V] Two-axis magnitude sqrt(X*X + Y*Y) from matched pulse amplitudes, using the corresponding corrected or uncorrected values; NaN if no matched pair.
 */
static inline float mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_module_nocorr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field rx_signal_det_module_corr from ivaq_rx_mini_signal message
 *
 * @return [V] Two-axis magnitude sqrt(X*X + Y*Y) from matched pulse amplitudes, using the corresponding corrected or uncorrected values; NaN if no matched pair.
 */
static inline float mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_module_corr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field rx_saturation_flag_x from ivaq_rx_mini_signal message
 *
 * @return  Ivaq Rx X-ant Saturation flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_mini_signal_get_rx_saturation_flag_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  81);
}

/**
 * @brief Get field rx_signal_det_flag_x from ivaq_rx_mini_signal message
 *
 * @return  Ivaq Rx X-ant Signal Detection flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_flag_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  82);
}

/**
 * @brief Get field rx_signal_det_sat_flag_x from ivaq_rx_mini_signal message
 *
 * @return  Ivaq Rx X-ant Saturation flag for Detected Signal
 */
static inline uint8_t mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_sat_flag_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  83);
}

/**
 * @brief Get field rx_signal_det_time_x from ivaq_rx_mini_signal message
 *
 * @return [ms] Antenna detected pulse timestamp in the clock selected by rx_time_reference; zero when its detection flag is clear.
 */
static inline uint64_t mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_time_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  8);
}

/**
 * @brief Get field rx_signal_det_val_nocorr_x from ivaq_rx_mini_signal message
 *
 * @return [V] Ivaq Rx X-ant Signal NoCorr value in detected pulse
 */
static inline float mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_val_nocorr_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field rx_signal_det_val_corr_x from ivaq_rx_mini_signal message
 *
 * @return [V] Ivaq Rx X-ant Signal Corr value in detected pulse
 */
static inline float mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_val_corr_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field rx_noise_val_nocorr_x from ivaq_rx_mini_signal message
 *
 * @return [V] Ivaq Rx X-ant Noise No Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_val_nocorr_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field rx_noise_val_corr_x from ivaq_rx_mini_signal message
 *
 * @return [V] Ivaq Rx X-ant Noise Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_val_corr_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field rx_noise_std_nocorr_x from ivaq_rx_mini_signal message
 *
 * @return [V] Ivaq Rx X-ant Noise No Corr Demod std deviation
 */
static inline float mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_std_nocorr_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field rx_noise_std_corr_x from ivaq_rx_mini_signal message
 *
 * @return [V] Ivaq Rx X-ant Noise Corr Demod std deviation
 */
static inline float mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_std_corr_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field rx_saturation_flag_y from ivaq_rx_mini_signal message
 *
 * @return  Ivaq Rx Y-ant Saturation flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_mini_signal_get_rx_saturation_flag_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  84);
}

/**
 * @brief Get field rx_signal_det_flag_y from ivaq_rx_mini_signal message
 *
 * @return  Ivaq Rx Y-ant Signal Detection flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_flag_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  85);
}

/**
 * @brief Get field rx_signal_det_sat_flag_y from ivaq_rx_mini_signal message
 *
 * @return  Ivaq Rx Y-ant Saturation flag for Detected Signal
 */
static inline uint8_t mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_sat_flag_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  86);
}

/**
 * @brief Get field rx_signal_det_time_y from ivaq_rx_mini_signal message
 *
 * @return [ms] Antenna detected pulse timestamp in the clock selected by rx_time_reference; zero when its detection flag is clear.
 */
static inline uint64_t mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_time_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  16);
}

/**
 * @brief Get field rx_signal_det_val_nocorr_y from ivaq_rx_mini_signal message
 *
 * @return [V] Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 */
static inline float mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_val_nocorr_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field rx_signal_det_val_corr_y from ivaq_rx_mini_signal message
 *
 * @return [V] Ivaq Rx Y-ant Signal Corr value in detected pulse
 */
static inline float mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_val_corr_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field rx_noise_val_nocorr_y from ivaq_rx_mini_signal message
 *
 * @return [V] Ivaq Rx Y-ant Noise No Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_val_nocorr_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field rx_noise_val_corr_y from ivaq_rx_mini_signal message
 *
 * @return [V] Ivaq Rx Y-ant Noise Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_val_corr_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Get field rx_noise_std_nocorr_y from ivaq_rx_mini_signal message
 *
 * @return [V] Ivaq Rx Y-ant Noise No Corr Demod std deviation
 */
static inline float mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_std_nocorr_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  72);
}

/**
 * @brief Get field rx_noise_std_corr_y from ivaq_rx_mini_signal message
 *
 * @return [V] Ivaq Rx Y-ant Noise Corr Demod std deviation
 */
static inline float mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_std_corr_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  76);
}

/**
 * @brief Get field rx_time_reference from ivaq_rx_mini_signal message
 *
 * @return  Clock reference for overall, X and Y detection timestamps.
 */
static inline uint8_t mavlink_msg_ivaq_rx_mini_signal_get_rx_time_reference(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  87);
}

/**
 * @brief Decode a ivaq_rx_mini_signal message into a struct
 *
 * @param msg The message to decode
 * @param ivaq_rx_mini_signal C-struct to decode the message contents into
 */
static inline void mavlink_msg_ivaq_rx_mini_signal_decode(const mavlink_message_t* msg, mavlink_ivaq_rx_mini_signal_t* ivaq_rx_mini_signal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ivaq_rx_mini_signal->rx_signal_det_time = mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_time(msg);
    ivaq_rx_mini_signal->rx_signal_det_time_x = mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_time_x(msg);
    ivaq_rx_mini_signal->rx_signal_det_time_y = mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_time_y(msg);
    ivaq_rx_mini_signal->rx_signal_det_module_nocorr = mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_module_nocorr(msg);
    ivaq_rx_mini_signal->rx_signal_det_module_corr = mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_module_corr(msg);
    ivaq_rx_mini_signal->rx_signal_det_val_nocorr_x = mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_val_nocorr_x(msg);
    ivaq_rx_mini_signal->rx_signal_det_val_corr_x = mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_val_corr_x(msg);
    ivaq_rx_mini_signal->rx_noise_val_nocorr_x = mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_val_nocorr_x(msg);
    ivaq_rx_mini_signal->rx_noise_val_corr_x = mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_val_corr_x(msg);
    ivaq_rx_mini_signal->rx_noise_std_nocorr_x = mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_std_nocorr_x(msg);
    ivaq_rx_mini_signal->rx_noise_std_corr_x = mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_std_corr_x(msg);
    ivaq_rx_mini_signal->rx_signal_det_val_nocorr_y = mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_val_nocorr_y(msg);
    ivaq_rx_mini_signal->rx_signal_det_val_corr_y = mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_val_corr_y(msg);
    ivaq_rx_mini_signal->rx_noise_val_nocorr_y = mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_val_nocorr_y(msg);
    ivaq_rx_mini_signal->rx_noise_val_corr_y = mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_val_corr_y(msg);
    ivaq_rx_mini_signal->rx_noise_std_nocorr_y = mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_std_nocorr_y(msg);
    ivaq_rx_mini_signal->rx_noise_std_corr_y = mavlink_msg_ivaq_rx_mini_signal_get_rx_noise_std_corr_y(msg);
    ivaq_rx_mini_signal->rx_signal_det_flag = mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_flag(msg);
    ivaq_rx_mini_signal->rx_saturation_flag_x = mavlink_msg_ivaq_rx_mini_signal_get_rx_saturation_flag_x(msg);
    ivaq_rx_mini_signal->rx_signal_det_flag_x = mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_flag_x(msg);
    ivaq_rx_mini_signal->rx_signal_det_sat_flag_x = mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_sat_flag_x(msg);
    ivaq_rx_mini_signal->rx_saturation_flag_y = mavlink_msg_ivaq_rx_mini_signal_get_rx_saturation_flag_y(msg);
    ivaq_rx_mini_signal->rx_signal_det_flag_y = mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_flag_y(msg);
    ivaq_rx_mini_signal->rx_signal_det_sat_flag_y = mavlink_msg_ivaq_rx_mini_signal_get_rx_signal_det_sat_flag_y(msg);
    ivaq_rx_mini_signal->rx_time_reference = mavlink_msg_ivaq_rx_mini_signal_get_rx_time_reference(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN? msg->len : MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN;
        memset(ivaq_rx_mini_signal, 0, MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_LEN);
    memcpy(ivaq_rx_mini_signal, _MAV_PAYLOAD(msg), len);
#endif
}
