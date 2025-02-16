#pragma once
// MESSAGE IVAQ_RX_SIGNAL_MASTER PACKING

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER 204


typedef struct __mavlink_ivaq_rx_signal_master_t {
 uint64_t rx_signal_det_time; /*<  Ivaq Rx Detected Pulse Overall Signal Time tag [ms]*/
 float rx_signal_det_module_nocorr; /*<  Ivaq Rx Detected Pulse Module value [V]*/
 float rx_signal_det_module_corr; /*<  Ivaq Rx Detected Pulse Module value [V]*/
 uint32_t rx_signal_det_time_x; /*<  Ivaq Rx X-ant Signal NoCorr value in detected pulse*/
 float rx_signal_det_val_nocorr_x; /*<  Ivaq Rx X-ant Signal NoCorr value in detected pulse*/
 float rx_signal_det_val_corr_x; /*<  Ivaq Rx X-ant Signal Corr value in detected pulse*/
 float rx_noise_val_nocorr_x; /*<  Ivaq Rx X-ant Noise No Corr Demod value*/
 float rx_noise_val_corr_x; /*<  Ivaq Rx X-ant Noise Corr Demod value*/
 float rx_noise_std_nocorr_x; /*<  Ivaq Rx X-ant Noise No Corr Demod std deviation*/
 float rx_noise_std_corr_x; /*<  Ivaq Rx X-ant Noise Corr Demod std deviation*/
 uint32_t rx_signal_det_time_y; /*<  Ivaq Rx Y-ant Signal NoCorr value in detected pulse*/
 float rx_signal_det_val_nocorr_y; /*<  Ivaq Rx Y-ant Signal NoCorr value in detected pulse*/
 float rx_signal_det_val_corr_y; /*<  Ivaq Rx Y-ant Signal Corr value in detected pulse*/
 float rx_noise_val_nocorr_y; /*<  Ivaq Rx Y-ant Noise No Corr Demod value*/
 float rx_noise_val_corr_y; /*<  Ivaq Rx Y-ant Noise Corr Demod value*/
 float rx_noise_std_nocorr_y; /*<  Ivaq Rx Y-ant Noise No Corr Demod std deviation*/
 float rx_noise_std_corr_y; /*<  Ivaq Rx Y-ant Noise Corr Demod std deviation*/
 uint32_t rx_signal_det_time_z; /*<  Ivaq Rx Z-ant Signal NoCorr value in detected pulse*/
 float rx_signal_det_val_nocorr_z; /*<  Ivaq Rx Z-ant Signal NoCorr value in detected pulse*/
 float rx_signal_det_val_corr_z; /*<  Ivaq Rx Z-ant Signal Corr value in detected pulse*/
 float rx_noise_val_nocorr_z; /*<  Ivaq Rx Z-ant Noise No Corr Demod value*/
 float rx_noise_val_corr_z; /*<  Ivaq Rx Z-ant Noise Corr Demod value*/
 float rx_noise_std_nocorr_z; /*<  Ivaq Rx Z-ant Noise No Corr Demod std deviation*/
 float rx_noise_std_corr_z; /*<  Ivaq Rx Z-ant Noise Corr Demod std deviation*/
 uint8_t rx_signal_det_flag; /*<  Ivaq Rx X-ant Signal Detection flag*/
 uint8_t rx_signal_det_to_send_flag; /*<  Ivaq Rx Signal Detected Sent flag*/
 uint8_t rx_saturation_flag_x; /*<  Ivaq Rx X-ant Saturation flag*/
 uint8_t rx_signal_det_flag_x; /*<  Ivaq Rx X-ant Signal Detection flag*/
 uint8_t rx_signal_det_sat_flag_x; /*<  Ivaq Rx X-ant Saturation flag for Detected Signal*/
 uint8_t rx_saturation_flag_y; /*<  Ivaq Rx Y-ant Saturation flag*/
 uint8_t rx_signal_det_flag_y; /*<  Ivaq Rx Y-ant Signal Detection flag*/
 uint8_t rx_signal_det_sat_flag_y; /*<  Ivaq Rx Y-ant Saturation flag for Detected Signal*/
 uint8_t rx_saturation_flag_z; /*<  Ivaq Rx Z-ant Saturation flag*/
 uint8_t rx_signal_det_flag_z; /*<  Ivaq Rx Z-ant Signal Detection flag*/
 uint8_t rx_signal_det_sat_flag_z; /*<  Ivaq Rx Z-ant Saturation flag for Detected Signal*/
} mavlink_ivaq_rx_signal_master_t;

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN 111
#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN 111
#define MAVLINK_MSG_ID_204_LEN 111
#define MAVLINK_MSG_ID_204_MIN_LEN 111

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC 179
#define MAVLINK_MSG_ID_204_CRC 179



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL_MASTER { \
    204, \
    "IVAQ_RX_SIGNAL_MASTER", \
    35, \
    {  { "rx_signal_det_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 100, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_flag) }, \
         { "rx_signal_det_to_send_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 101, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_to_send_flag) }, \
         { "rx_signal_det_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_time) }, \
         { "rx_signal_det_module_nocorr", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_module_nocorr) }, \
         { "rx_signal_det_module_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_module_corr) }, \
         { "rx_saturation_flag_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 102, offsetof(mavlink_ivaq_rx_signal_master_t, rx_saturation_flag_x) }, \
         { "rx_signal_det_flag_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 103, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_flag_x) }, \
         { "rx_signal_det_sat_flag_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 104, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_sat_flag_x) }, \
         { "rx_signal_det_time_x", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_time_x) }, \
         { "rx_signal_det_val_nocorr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_val_nocorr_x) }, \
         { "rx_signal_det_val_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_val_corr_x) }, \
         { "rx_noise_val_nocorr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_val_nocorr_x) }, \
         { "rx_noise_val_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_val_corr_x) }, \
         { "rx_noise_std_nocorr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_std_nocorr_x) }, \
         { "rx_noise_std_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_std_corr_x) }, \
         { "rx_saturation_flag_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 105, offsetof(mavlink_ivaq_rx_signal_master_t, rx_saturation_flag_y) }, \
         { "rx_signal_det_flag_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 106, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_flag_y) }, \
         { "rx_signal_det_sat_flag_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 107, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_sat_flag_y) }, \
         { "rx_signal_det_time_y", NULL, MAVLINK_TYPE_UINT32_T, 0, 44, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_time_y) }, \
         { "rx_signal_det_val_nocorr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_val_nocorr_y) }, \
         { "rx_signal_det_val_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_val_corr_y) }, \
         { "rx_noise_val_nocorr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_val_nocorr_y) }, \
         { "rx_noise_val_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_val_corr_y) }, \
         { "rx_noise_std_nocorr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_std_nocorr_y) }, \
         { "rx_noise_std_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_std_corr_y) }, \
         { "rx_saturation_flag_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 108, offsetof(mavlink_ivaq_rx_signal_master_t, rx_saturation_flag_z) }, \
         { "rx_signal_det_flag_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 109, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_flag_z) }, \
         { "rx_signal_det_sat_flag_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 110, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_sat_flag_z) }, \
         { "rx_signal_det_time_z", NULL, MAVLINK_TYPE_UINT32_T, 0, 72, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_time_z) }, \
         { "rx_signal_det_val_nocorr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_val_nocorr_z) }, \
         { "rx_signal_det_val_corr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_val_corr_z) }, \
         { "rx_noise_val_nocorr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_val_nocorr_z) }, \
         { "rx_noise_val_corr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_val_corr_z) }, \
         { "rx_noise_std_nocorr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 92, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_std_nocorr_z) }, \
         { "rx_noise_std_corr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 96, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_std_corr_z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL_MASTER { \
    "IVAQ_RX_SIGNAL_MASTER", \
    35, \
    {  { "rx_signal_det_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 100, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_flag) }, \
         { "rx_signal_det_to_send_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 101, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_to_send_flag) }, \
         { "rx_signal_det_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_time) }, \
         { "rx_signal_det_module_nocorr", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_module_nocorr) }, \
         { "rx_signal_det_module_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_module_corr) }, \
         { "rx_saturation_flag_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 102, offsetof(mavlink_ivaq_rx_signal_master_t, rx_saturation_flag_x) }, \
         { "rx_signal_det_flag_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 103, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_flag_x) }, \
         { "rx_signal_det_sat_flag_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 104, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_sat_flag_x) }, \
         { "rx_signal_det_time_x", NULL, MAVLINK_TYPE_UINT32_T, 0, 16, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_time_x) }, \
         { "rx_signal_det_val_nocorr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_val_nocorr_x) }, \
         { "rx_signal_det_val_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_val_corr_x) }, \
         { "rx_noise_val_nocorr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_val_nocorr_x) }, \
         { "rx_noise_val_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_val_corr_x) }, \
         { "rx_noise_std_nocorr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_std_nocorr_x) }, \
         { "rx_noise_std_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_std_corr_x) }, \
         { "rx_saturation_flag_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 105, offsetof(mavlink_ivaq_rx_signal_master_t, rx_saturation_flag_y) }, \
         { "rx_signal_det_flag_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 106, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_flag_y) }, \
         { "rx_signal_det_sat_flag_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 107, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_sat_flag_y) }, \
         { "rx_signal_det_time_y", NULL, MAVLINK_TYPE_UINT32_T, 0, 44, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_time_y) }, \
         { "rx_signal_det_val_nocorr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_val_nocorr_y) }, \
         { "rx_signal_det_val_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_val_corr_y) }, \
         { "rx_noise_val_nocorr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_val_nocorr_y) }, \
         { "rx_noise_val_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_val_corr_y) }, \
         { "rx_noise_std_nocorr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_std_nocorr_y) }, \
         { "rx_noise_std_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_std_corr_y) }, \
         { "rx_saturation_flag_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 108, offsetof(mavlink_ivaq_rx_signal_master_t, rx_saturation_flag_z) }, \
         { "rx_signal_det_flag_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 109, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_flag_z) }, \
         { "rx_signal_det_sat_flag_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 110, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_sat_flag_z) }, \
         { "rx_signal_det_time_z", NULL, MAVLINK_TYPE_UINT32_T, 0, 72, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_time_z) }, \
         { "rx_signal_det_val_nocorr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 76, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_val_nocorr_z) }, \
         { "rx_signal_det_val_corr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 80, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_val_corr_z) }, \
         { "rx_noise_val_nocorr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 84, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_val_nocorr_z) }, \
         { "rx_noise_val_corr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 88, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_val_corr_z) }, \
         { "rx_noise_std_nocorr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 92, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_std_nocorr_z) }, \
         { "rx_noise_std_corr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 96, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_std_corr_z) }, \
         } \
}
#endif

/**
 * @brief Pack a ivaq_rx_signal_master message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_signal_det_flag  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_det_to_send_flag  Ivaq Rx Signal Detected Sent flag
 * @param rx_signal_det_time  Ivaq Rx Detected Pulse Overall Signal Time tag [ms]
 * @param rx_signal_det_module_nocorr  Ivaq Rx Detected Pulse Module value [V]
 * @param rx_signal_det_module_corr  Ivaq Rx Detected Pulse Module value [V]
 * @param rx_saturation_flag_x  Ivaq Rx X-ant Saturation flag
 * @param rx_signal_det_flag_x  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_x  Ivaq Rx X-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_x  Ivaq Rx X-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr_x  Ivaq Rx X-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_x  Ivaq Rx X-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_x  Ivaq Rx X-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_x  Ivaq Rx X-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_x  Ivaq Rx X-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_x  Ivaq Rx X-ant Noise Corr Demod std deviation
 * @param rx_saturation_flag_y  Ivaq Rx Y-ant Saturation flag
 * @param rx_signal_det_flag_y  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_y  Ivaq Rx Y-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_y  Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr_y  Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_y  Ivaq Rx Y-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_y  Ivaq Rx Y-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_y  Ivaq Rx Y-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_y  Ivaq Rx Y-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_y  Ivaq Rx Y-ant Noise Corr Demod std deviation
 * @param rx_saturation_flag_z  Ivaq Rx Z-ant Saturation flag
 * @param rx_signal_det_flag_z  Ivaq Rx Z-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_z  Ivaq Rx Z-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_z  Ivaq Rx Z-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr_z  Ivaq Rx Z-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_z  Ivaq Rx Z-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_z  Ivaq Rx Z-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_z  Ivaq Rx Z-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_z  Ivaq Rx Z-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_z  Ivaq Rx Z-ant Noise Corr Demod std deviation
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_master_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t rx_signal_det_flag, uint8_t rx_signal_det_to_send_flag, uint64_t rx_signal_det_time, float rx_signal_det_module_nocorr, float rx_signal_det_module_corr, uint8_t rx_saturation_flag_x, uint8_t rx_signal_det_flag_x, uint8_t rx_signal_det_sat_flag_x, uint32_t rx_signal_det_time_x, float rx_signal_det_val_nocorr_x, float rx_signal_det_val_corr_x, float rx_noise_val_nocorr_x, float rx_noise_val_corr_x, float rx_noise_std_nocorr_x, float rx_noise_std_corr_x, uint8_t rx_saturation_flag_y, uint8_t rx_signal_det_flag_y, uint8_t rx_signal_det_sat_flag_y, uint32_t rx_signal_det_time_y, float rx_signal_det_val_nocorr_y, float rx_signal_det_val_corr_y, float rx_noise_val_nocorr_y, float rx_noise_val_corr_y, float rx_noise_std_nocorr_y, float rx_noise_std_corr_y, uint8_t rx_saturation_flag_z, uint8_t rx_signal_det_flag_z, uint8_t rx_signal_det_sat_flag_z, uint32_t rx_signal_det_time_z, float rx_signal_det_val_nocorr_z, float rx_signal_det_val_corr_z, float rx_noise_val_nocorr_z, float rx_noise_val_corr_z, float rx_noise_std_nocorr_z, float rx_noise_std_corr_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN];
    _mav_put_uint64_t(buf, 0, rx_signal_det_time);
    _mav_put_float(buf, 8, rx_signal_det_module_nocorr);
    _mav_put_float(buf, 12, rx_signal_det_module_corr);
    _mav_put_uint32_t(buf, 16, rx_signal_det_time_x);
    _mav_put_float(buf, 20, rx_signal_det_val_nocorr_x);
    _mav_put_float(buf, 24, rx_signal_det_val_corr_x);
    _mav_put_float(buf, 28, rx_noise_val_nocorr_x);
    _mav_put_float(buf, 32, rx_noise_val_corr_x);
    _mav_put_float(buf, 36, rx_noise_std_nocorr_x);
    _mav_put_float(buf, 40, rx_noise_std_corr_x);
    _mav_put_uint32_t(buf, 44, rx_signal_det_time_y);
    _mav_put_float(buf, 48, rx_signal_det_val_nocorr_y);
    _mav_put_float(buf, 52, rx_signal_det_val_corr_y);
    _mav_put_float(buf, 56, rx_noise_val_nocorr_y);
    _mav_put_float(buf, 60, rx_noise_val_corr_y);
    _mav_put_float(buf, 64, rx_noise_std_nocorr_y);
    _mav_put_float(buf, 68, rx_noise_std_corr_y);
    _mav_put_uint32_t(buf, 72, rx_signal_det_time_z);
    _mav_put_float(buf, 76, rx_signal_det_val_nocorr_z);
    _mav_put_float(buf, 80, rx_signal_det_val_corr_z);
    _mav_put_float(buf, 84, rx_noise_val_nocorr_z);
    _mav_put_float(buf, 88, rx_noise_val_corr_z);
    _mav_put_float(buf, 92, rx_noise_std_nocorr_z);
    _mav_put_float(buf, 96, rx_noise_std_corr_z);
    _mav_put_uint8_t(buf, 100, rx_signal_det_flag);
    _mav_put_uint8_t(buf, 101, rx_signal_det_to_send_flag);
    _mav_put_uint8_t(buf, 102, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 103, rx_signal_det_flag_x);
    _mav_put_uint8_t(buf, 104, rx_signal_det_sat_flag_x);
    _mav_put_uint8_t(buf, 105, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 106, rx_signal_det_flag_y);
    _mav_put_uint8_t(buf, 107, rx_signal_det_sat_flag_y);
    _mav_put_uint8_t(buf, 108, rx_saturation_flag_z);
    _mav_put_uint8_t(buf, 109, rx_signal_det_flag_z);
    _mav_put_uint8_t(buf, 110, rx_signal_det_sat_flag_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
#else
    mavlink_ivaq_rx_signal_master_t packet;
    packet.rx_signal_det_time = rx_signal_det_time;
    packet.rx_signal_det_module_nocorr = rx_signal_det_module_nocorr;
    packet.rx_signal_det_module_corr = rx_signal_det_module_corr;
    packet.rx_signal_det_time_x = rx_signal_det_time_x;
    packet.rx_signal_det_val_nocorr_x = rx_signal_det_val_nocorr_x;
    packet.rx_signal_det_val_corr_x = rx_signal_det_val_corr_x;
    packet.rx_noise_val_nocorr_x = rx_noise_val_nocorr_x;
    packet.rx_noise_val_corr_x = rx_noise_val_corr_x;
    packet.rx_noise_std_nocorr_x = rx_noise_std_nocorr_x;
    packet.rx_noise_std_corr_x = rx_noise_std_corr_x;
    packet.rx_signal_det_time_y = rx_signal_det_time_y;
    packet.rx_signal_det_val_nocorr_y = rx_signal_det_val_nocorr_y;
    packet.rx_signal_det_val_corr_y = rx_signal_det_val_corr_y;
    packet.rx_noise_val_nocorr_y = rx_noise_val_nocorr_y;
    packet.rx_noise_val_corr_y = rx_noise_val_corr_y;
    packet.rx_noise_std_nocorr_y = rx_noise_std_nocorr_y;
    packet.rx_noise_std_corr_y = rx_noise_std_corr_y;
    packet.rx_signal_det_time_z = rx_signal_det_time_z;
    packet.rx_signal_det_val_nocorr_z = rx_signal_det_val_nocorr_z;
    packet.rx_signal_det_val_corr_z = rx_signal_det_val_corr_z;
    packet.rx_noise_val_nocorr_z = rx_noise_val_nocorr_z;
    packet.rx_noise_val_corr_z = rx_noise_val_corr_z;
    packet.rx_noise_std_nocorr_z = rx_noise_std_nocorr_z;
    packet.rx_noise_std_corr_z = rx_noise_std_corr_z;
    packet.rx_signal_det_flag = rx_signal_det_flag;
    packet.rx_signal_det_to_send_flag = rx_signal_det_to_send_flag;
    packet.rx_saturation_flag_x = rx_saturation_flag_x;
    packet.rx_signal_det_flag_x = rx_signal_det_flag_x;
    packet.rx_signal_det_sat_flag_x = rx_signal_det_sat_flag_x;
    packet.rx_saturation_flag_y = rx_saturation_flag_y;
    packet.rx_signal_det_flag_y = rx_signal_det_flag_y;
    packet.rx_signal_det_sat_flag_y = rx_signal_det_sat_flag_y;
    packet.rx_saturation_flag_z = rx_saturation_flag_z;
    packet.rx_signal_det_flag_z = rx_signal_det_flag_z;
    packet.rx_signal_det_sat_flag_z = rx_signal_det_sat_flag_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC);
}

/**
 * @brief Pack a ivaq_rx_signal_master message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_signal_det_flag  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_det_to_send_flag  Ivaq Rx Signal Detected Sent flag
 * @param rx_signal_det_time  Ivaq Rx Detected Pulse Overall Signal Time tag [ms]
 * @param rx_signal_det_module_nocorr  Ivaq Rx Detected Pulse Module value [V]
 * @param rx_signal_det_module_corr  Ivaq Rx Detected Pulse Module value [V]
 * @param rx_saturation_flag_x  Ivaq Rx X-ant Saturation flag
 * @param rx_signal_det_flag_x  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_x  Ivaq Rx X-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_x  Ivaq Rx X-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr_x  Ivaq Rx X-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_x  Ivaq Rx X-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_x  Ivaq Rx X-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_x  Ivaq Rx X-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_x  Ivaq Rx X-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_x  Ivaq Rx X-ant Noise Corr Demod std deviation
 * @param rx_saturation_flag_y  Ivaq Rx Y-ant Saturation flag
 * @param rx_signal_det_flag_y  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_y  Ivaq Rx Y-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_y  Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr_y  Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_y  Ivaq Rx Y-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_y  Ivaq Rx Y-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_y  Ivaq Rx Y-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_y  Ivaq Rx Y-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_y  Ivaq Rx Y-ant Noise Corr Demod std deviation
 * @param rx_saturation_flag_z  Ivaq Rx Z-ant Saturation flag
 * @param rx_signal_det_flag_z  Ivaq Rx Z-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_z  Ivaq Rx Z-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_z  Ivaq Rx Z-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr_z  Ivaq Rx Z-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_z  Ivaq Rx Z-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_z  Ivaq Rx Z-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_z  Ivaq Rx Z-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_z  Ivaq Rx Z-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_z  Ivaq Rx Z-ant Noise Corr Demod std deviation
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_master_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t rx_signal_det_flag, uint8_t rx_signal_det_to_send_flag, uint64_t rx_signal_det_time, float rx_signal_det_module_nocorr, float rx_signal_det_module_corr, uint8_t rx_saturation_flag_x, uint8_t rx_signal_det_flag_x, uint8_t rx_signal_det_sat_flag_x, uint32_t rx_signal_det_time_x, float rx_signal_det_val_nocorr_x, float rx_signal_det_val_corr_x, float rx_noise_val_nocorr_x, float rx_noise_val_corr_x, float rx_noise_std_nocorr_x, float rx_noise_std_corr_x, uint8_t rx_saturation_flag_y, uint8_t rx_signal_det_flag_y, uint8_t rx_signal_det_sat_flag_y, uint32_t rx_signal_det_time_y, float rx_signal_det_val_nocorr_y, float rx_signal_det_val_corr_y, float rx_noise_val_nocorr_y, float rx_noise_val_corr_y, float rx_noise_std_nocorr_y, float rx_noise_std_corr_y, uint8_t rx_saturation_flag_z, uint8_t rx_signal_det_flag_z, uint8_t rx_signal_det_sat_flag_z, uint32_t rx_signal_det_time_z, float rx_signal_det_val_nocorr_z, float rx_signal_det_val_corr_z, float rx_noise_val_nocorr_z, float rx_noise_val_corr_z, float rx_noise_std_nocorr_z, float rx_noise_std_corr_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN];
    _mav_put_uint64_t(buf, 0, rx_signal_det_time);
    _mav_put_float(buf, 8, rx_signal_det_module_nocorr);
    _mav_put_float(buf, 12, rx_signal_det_module_corr);
    _mav_put_uint32_t(buf, 16, rx_signal_det_time_x);
    _mav_put_float(buf, 20, rx_signal_det_val_nocorr_x);
    _mav_put_float(buf, 24, rx_signal_det_val_corr_x);
    _mav_put_float(buf, 28, rx_noise_val_nocorr_x);
    _mav_put_float(buf, 32, rx_noise_val_corr_x);
    _mav_put_float(buf, 36, rx_noise_std_nocorr_x);
    _mav_put_float(buf, 40, rx_noise_std_corr_x);
    _mav_put_uint32_t(buf, 44, rx_signal_det_time_y);
    _mav_put_float(buf, 48, rx_signal_det_val_nocorr_y);
    _mav_put_float(buf, 52, rx_signal_det_val_corr_y);
    _mav_put_float(buf, 56, rx_noise_val_nocorr_y);
    _mav_put_float(buf, 60, rx_noise_val_corr_y);
    _mav_put_float(buf, 64, rx_noise_std_nocorr_y);
    _mav_put_float(buf, 68, rx_noise_std_corr_y);
    _mav_put_uint32_t(buf, 72, rx_signal_det_time_z);
    _mav_put_float(buf, 76, rx_signal_det_val_nocorr_z);
    _mav_put_float(buf, 80, rx_signal_det_val_corr_z);
    _mav_put_float(buf, 84, rx_noise_val_nocorr_z);
    _mav_put_float(buf, 88, rx_noise_val_corr_z);
    _mav_put_float(buf, 92, rx_noise_std_nocorr_z);
    _mav_put_float(buf, 96, rx_noise_std_corr_z);
    _mav_put_uint8_t(buf, 100, rx_signal_det_flag);
    _mav_put_uint8_t(buf, 101, rx_signal_det_to_send_flag);
    _mav_put_uint8_t(buf, 102, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 103, rx_signal_det_flag_x);
    _mav_put_uint8_t(buf, 104, rx_signal_det_sat_flag_x);
    _mav_put_uint8_t(buf, 105, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 106, rx_signal_det_flag_y);
    _mav_put_uint8_t(buf, 107, rx_signal_det_sat_flag_y);
    _mav_put_uint8_t(buf, 108, rx_saturation_flag_z);
    _mav_put_uint8_t(buf, 109, rx_signal_det_flag_z);
    _mav_put_uint8_t(buf, 110, rx_signal_det_sat_flag_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
#else
    mavlink_ivaq_rx_signal_master_t packet;
    packet.rx_signal_det_time = rx_signal_det_time;
    packet.rx_signal_det_module_nocorr = rx_signal_det_module_nocorr;
    packet.rx_signal_det_module_corr = rx_signal_det_module_corr;
    packet.rx_signal_det_time_x = rx_signal_det_time_x;
    packet.rx_signal_det_val_nocorr_x = rx_signal_det_val_nocorr_x;
    packet.rx_signal_det_val_corr_x = rx_signal_det_val_corr_x;
    packet.rx_noise_val_nocorr_x = rx_noise_val_nocorr_x;
    packet.rx_noise_val_corr_x = rx_noise_val_corr_x;
    packet.rx_noise_std_nocorr_x = rx_noise_std_nocorr_x;
    packet.rx_noise_std_corr_x = rx_noise_std_corr_x;
    packet.rx_signal_det_time_y = rx_signal_det_time_y;
    packet.rx_signal_det_val_nocorr_y = rx_signal_det_val_nocorr_y;
    packet.rx_signal_det_val_corr_y = rx_signal_det_val_corr_y;
    packet.rx_noise_val_nocorr_y = rx_noise_val_nocorr_y;
    packet.rx_noise_val_corr_y = rx_noise_val_corr_y;
    packet.rx_noise_std_nocorr_y = rx_noise_std_nocorr_y;
    packet.rx_noise_std_corr_y = rx_noise_std_corr_y;
    packet.rx_signal_det_time_z = rx_signal_det_time_z;
    packet.rx_signal_det_val_nocorr_z = rx_signal_det_val_nocorr_z;
    packet.rx_signal_det_val_corr_z = rx_signal_det_val_corr_z;
    packet.rx_noise_val_nocorr_z = rx_noise_val_nocorr_z;
    packet.rx_noise_val_corr_z = rx_noise_val_corr_z;
    packet.rx_noise_std_nocorr_z = rx_noise_std_nocorr_z;
    packet.rx_noise_std_corr_z = rx_noise_std_corr_z;
    packet.rx_signal_det_flag = rx_signal_det_flag;
    packet.rx_signal_det_to_send_flag = rx_signal_det_to_send_flag;
    packet.rx_saturation_flag_x = rx_saturation_flag_x;
    packet.rx_signal_det_flag_x = rx_signal_det_flag_x;
    packet.rx_signal_det_sat_flag_x = rx_signal_det_sat_flag_x;
    packet.rx_saturation_flag_y = rx_saturation_flag_y;
    packet.rx_signal_det_flag_y = rx_signal_det_flag_y;
    packet.rx_signal_det_sat_flag_y = rx_signal_det_sat_flag_y;
    packet.rx_saturation_flag_z = rx_saturation_flag_z;
    packet.rx_signal_det_flag_z = rx_signal_det_flag_z;
    packet.rx_signal_det_sat_flag_z = rx_signal_det_sat_flag_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
#endif
}

/**
 * @brief Pack a ivaq_rx_signal_master message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rx_signal_det_flag  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_det_to_send_flag  Ivaq Rx Signal Detected Sent flag
 * @param rx_signal_det_time  Ivaq Rx Detected Pulse Overall Signal Time tag [ms]
 * @param rx_signal_det_module_nocorr  Ivaq Rx Detected Pulse Module value [V]
 * @param rx_signal_det_module_corr  Ivaq Rx Detected Pulse Module value [V]
 * @param rx_saturation_flag_x  Ivaq Rx X-ant Saturation flag
 * @param rx_signal_det_flag_x  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_x  Ivaq Rx X-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_x  Ivaq Rx X-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr_x  Ivaq Rx X-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_x  Ivaq Rx X-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_x  Ivaq Rx X-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_x  Ivaq Rx X-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_x  Ivaq Rx X-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_x  Ivaq Rx X-ant Noise Corr Demod std deviation
 * @param rx_saturation_flag_y  Ivaq Rx Y-ant Saturation flag
 * @param rx_signal_det_flag_y  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_y  Ivaq Rx Y-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_y  Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr_y  Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_y  Ivaq Rx Y-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_y  Ivaq Rx Y-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_y  Ivaq Rx Y-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_y  Ivaq Rx Y-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_y  Ivaq Rx Y-ant Noise Corr Demod std deviation
 * @param rx_saturation_flag_z  Ivaq Rx Z-ant Saturation flag
 * @param rx_signal_det_flag_z  Ivaq Rx Z-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_z  Ivaq Rx Z-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_z  Ivaq Rx Z-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr_z  Ivaq Rx Z-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_z  Ivaq Rx Z-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_z  Ivaq Rx Z-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_z  Ivaq Rx Z-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_z  Ivaq Rx Z-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_z  Ivaq Rx Z-ant Noise Corr Demod std deviation
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_master_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t rx_signal_det_flag,uint8_t rx_signal_det_to_send_flag,uint64_t rx_signal_det_time,float rx_signal_det_module_nocorr,float rx_signal_det_module_corr,uint8_t rx_saturation_flag_x,uint8_t rx_signal_det_flag_x,uint8_t rx_signal_det_sat_flag_x,uint32_t rx_signal_det_time_x,float rx_signal_det_val_nocorr_x,float rx_signal_det_val_corr_x,float rx_noise_val_nocorr_x,float rx_noise_val_corr_x,float rx_noise_std_nocorr_x,float rx_noise_std_corr_x,uint8_t rx_saturation_flag_y,uint8_t rx_signal_det_flag_y,uint8_t rx_signal_det_sat_flag_y,uint32_t rx_signal_det_time_y,float rx_signal_det_val_nocorr_y,float rx_signal_det_val_corr_y,float rx_noise_val_nocorr_y,float rx_noise_val_corr_y,float rx_noise_std_nocorr_y,float rx_noise_std_corr_y,uint8_t rx_saturation_flag_z,uint8_t rx_signal_det_flag_z,uint8_t rx_signal_det_sat_flag_z,uint32_t rx_signal_det_time_z,float rx_signal_det_val_nocorr_z,float rx_signal_det_val_corr_z,float rx_noise_val_nocorr_z,float rx_noise_val_corr_z,float rx_noise_std_nocorr_z,float rx_noise_std_corr_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN];
    _mav_put_uint64_t(buf, 0, rx_signal_det_time);
    _mav_put_float(buf, 8, rx_signal_det_module_nocorr);
    _mav_put_float(buf, 12, rx_signal_det_module_corr);
    _mav_put_uint32_t(buf, 16, rx_signal_det_time_x);
    _mav_put_float(buf, 20, rx_signal_det_val_nocorr_x);
    _mav_put_float(buf, 24, rx_signal_det_val_corr_x);
    _mav_put_float(buf, 28, rx_noise_val_nocorr_x);
    _mav_put_float(buf, 32, rx_noise_val_corr_x);
    _mav_put_float(buf, 36, rx_noise_std_nocorr_x);
    _mav_put_float(buf, 40, rx_noise_std_corr_x);
    _mav_put_uint32_t(buf, 44, rx_signal_det_time_y);
    _mav_put_float(buf, 48, rx_signal_det_val_nocorr_y);
    _mav_put_float(buf, 52, rx_signal_det_val_corr_y);
    _mav_put_float(buf, 56, rx_noise_val_nocorr_y);
    _mav_put_float(buf, 60, rx_noise_val_corr_y);
    _mav_put_float(buf, 64, rx_noise_std_nocorr_y);
    _mav_put_float(buf, 68, rx_noise_std_corr_y);
    _mav_put_uint32_t(buf, 72, rx_signal_det_time_z);
    _mav_put_float(buf, 76, rx_signal_det_val_nocorr_z);
    _mav_put_float(buf, 80, rx_signal_det_val_corr_z);
    _mav_put_float(buf, 84, rx_noise_val_nocorr_z);
    _mav_put_float(buf, 88, rx_noise_val_corr_z);
    _mav_put_float(buf, 92, rx_noise_std_nocorr_z);
    _mav_put_float(buf, 96, rx_noise_std_corr_z);
    _mav_put_uint8_t(buf, 100, rx_signal_det_flag);
    _mav_put_uint8_t(buf, 101, rx_signal_det_to_send_flag);
    _mav_put_uint8_t(buf, 102, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 103, rx_signal_det_flag_x);
    _mav_put_uint8_t(buf, 104, rx_signal_det_sat_flag_x);
    _mav_put_uint8_t(buf, 105, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 106, rx_signal_det_flag_y);
    _mav_put_uint8_t(buf, 107, rx_signal_det_sat_flag_y);
    _mav_put_uint8_t(buf, 108, rx_saturation_flag_z);
    _mav_put_uint8_t(buf, 109, rx_signal_det_flag_z);
    _mav_put_uint8_t(buf, 110, rx_signal_det_sat_flag_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
#else
    mavlink_ivaq_rx_signal_master_t packet;
    packet.rx_signal_det_time = rx_signal_det_time;
    packet.rx_signal_det_module_nocorr = rx_signal_det_module_nocorr;
    packet.rx_signal_det_module_corr = rx_signal_det_module_corr;
    packet.rx_signal_det_time_x = rx_signal_det_time_x;
    packet.rx_signal_det_val_nocorr_x = rx_signal_det_val_nocorr_x;
    packet.rx_signal_det_val_corr_x = rx_signal_det_val_corr_x;
    packet.rx_noise_val_nocorr_x = rx_noise_val_nocorr_x;
    packet.rx_noise_val_corr_x = rx_noise_val_corr_x;
    packet.rx_noise_std_nocorr_x = rx_noise_std_nocorr_x;
    packet.rx_noise_std_corr_x = rx_noise_std_corr_x;
    packet.rx_signal_det_time_y = rx_signal_det_time_y;
    packet.rx_signal_det_val_nocorr_y = rx_signal_det_val_nocorr_y;
    packet.rx_signal_det_val_corr_y = rx_signal_det_val_corr_y;
    packet.rx_noise_val_nocorr_y = rx_noise_val_nocorr_y;
    packet.rx_noise_val_corr_y = rx_noise_val_corr_y;
    packet.rx_noise_std_nocorr_y = rx_noise_std_nocorr_y;
    packet.rx_noise_std_corr_y = rx_noise_std_corr_y;
    packet.rx_signal_det_time_z = rx_signal_det_time_z;
    packet.rx_signal_det_val_nocorr_z = rx_signal_det_val_nocorr_z;
    packet.rx_signal_det_val_corr_z = rx_signal_det_val_corr_z;
    packet.rx_noise_val_nocorr_z = rx_noise_val_nocorr_z;
    packet.rx_noise_val_corr_z = rx_noise_val_corr_z;
    packet.rx_noise_std_nocorr_z = rx_noise_std_nocorr_z;
    packet.rx_noise_std_corr_z = rx_noise_std_corr_z;
    packet.rx_signal_det_flag = rx_signal_det_flag;
    packet.rx_signal_det_to_send_flag = rx_signal_det_to_send_flag;
    packet.rx_saturation_flag_x = rx_saturation_flag_x;
    packet.rx_signal_det_flag_x = rx_signal_det_flag_x;
    packet.rx_signal_det_sat_flag_x = rx_signal_det_sat_flag_x;
    packet.rx_saturation_flag_y = rx_saturation_flag_y;
    packet.rx_signal_det_flag_y = rx_signal_det_flag_y;
    packet.rx_signal_det_sat_flag_y = rx_signal_det_sat_flag_y;
    packet.rx_saturation_flag_z = rx_saturation_flag_z;
    packet.rx_signal_det_flag_z = rx_signal_det_flag_z;
    packet.rx_signal_det_sat_flag_z = rx_signal_det_sat_flag_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC);
}

/**
 * @brief Encode a ivaq_rx_signal_master struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_signal_master C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_master_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ivaq_rx_signal_master_t* ivaq_rx_signal_master)
{
    return mavlink_msg_ivaq_rx_signal_master_pack(system_id, component_id, msg, ivaq_rx_signal_master->rx_signal_det_flag, ivaq_rx_signal_master->rx_signal_det_to_send_flag, ivaq_rx_signal_master->rx_signal_det_time, ivaq_rx_signal_master->rx_signal_det_module_nocorr, ivaq_rx_signal_master->rx_signal_det_module_corr, ivaq_rx_signal_master->rx_saturation_flag_x, ivaq_rx_signal_master->rx_signal_det_flag_x, ivaq_rx_signal_master->rx_signal_det_sat_flag_x, ivaq_rx_signal_master->rx_signal_det_time_x, ivaq_rx_signal_master->rx_signal_det_val_nocorr_x, ivaq_rx_signal_master->rx_signal_det_val_corr_x, ivaq_rx_signal_master->rx_noise_val_nocorr_x, ivaq_rx_signal_master->rx_noise_val_corr_x, ivaq_rx_signal_master->rx_noise_std_nocorr_x, ivaq_rx_signal_master->rx_noise_std_corr_x, ivaq_rx_signal_master->rx_saturation_flag_y, ivaq_rx_signal_master->rx_signal_det_flag_y, ivaq_rx_signal_master->rx_signal_det_sat_flag_y, ivaq_rx_signal_master->rx_signal_det_time_y, ivaq_rx_signal_master->rx_signal_det_val_nocorr_y, ivaq_rx_signal_master->rx_signal_det_val_corr_y, ivaq_rx_signal_master->rx_noise_val_nocorr_y, ivaq_rx_signal_master->rx_noise_val_corr_y, ivaq_rx_signal_master->rx_noise_std_nocorr_y, ivaq_rx_signal_master->rx_noise_std_corr_y, ivaq_rx_signal_master->rx_saturation_flag_z, ivaq_rx_signal_master->rx_signal_det_flag_z, ivaq_rx_signal_master->rx_signal_det_sat_flag_z, ivaq_rx_signal_master->rx_signal_det_time_z, ivaq_rx_signal_master->rx_signal_det_val_nocorr_z, ivaq_rx_signal_master->rx_signal_det_val_corr_z, ivaq_rx_signal_master->rx_noise_val_nocorr_z, ivaq_rx_signal_master->rx_noise_val_corr_z, ivaq_rx_signal_master->rx_noise_std_nocorr_z, ivaq_rx_signal_master->rx_noise_std_corr_z);
}

/**
 * @brief Encode a ivaq_rx_signal_master struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_signal_master C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_master_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ivaq_rx_signal_master_t* ivaq_rx_signal_master)
{
    return mavlink_msg_ivaq_rx_signal_master_pack_chan(system_id, component_id, chan, msg, ivaq_rx_signal_master->rx_signal_det_flag, ivaq_rx_signal_master->rx_signal_det_to_send_flag, ivaq_rx_signal_master->rx_signal_det_time, ivaq_rx_signal_master->rx_signal_det_module_nocorr, ivaq_rx_signal_master->rx_signal_det_module_corr, ivaq_rx_signal_master->rx_saturation_flag_x, ivaq_rx_signal_master->rx_signal_det_flag_x, ivaq_rx_signal_master->rx_signal_det_sat_flag_x, ivaq_rx_signal_master->rx_signal_det_time_x, ivaq_rx_signal_master->rx_signal_det_val_nocorr_x, ivaq_rx_signal_master->rx_signal_det_val_corr_x, ivaq_rx_signal_master->rx_noise_val_nocorr_x, ivaq_rx_signal_master->rx_noise_val_corr_x, ivaq_rx_signal_master->rx_noise_std_nocorr_x, ivaq_rx_signal_master->rx_noise_std_corr_x, ivaq_rx_signal_master->rx_saturation_flag_y, ivaq_rx_signal_master->rx_signal_det_flag_y, ivaq_rx_signal_master->rx_signal_det_sat_flag_y, ivaq_rx_signal_master->rx_signal_det_time_y, ivaq_rx_signal_master->rx_signal_det_val_nocorr_y, ivaq_rx_signal_master->rx_signal_det_val_corr_y, ivaq_rx_signal_master->rx_noise_val_nocorr_y, ivaq_rx_signal_master->rx_noise_val_corr_y, ivaq_rx_signal_master->rx_noise_std_nocorr_y, ivaq_rx_signal_master->rx_noise_std_corr_y, ivaq_rx_signal_master->rx_saturation_flag_z, ivaq_rx_signal_master->rx_signal_det_flag_z, ivaq_rx_signal_master->rx_signal_det_sat_flag_z, ivaq_rx_signal_master->rx_signal_det_time_z, ivaq_rx_signal_master->rx_signal_det_val_nocorr_z, ivaq_rx_signal_master->rx_signal_det_val_corr_z, ivaq_rx_signal_master->rx_noise_val_nocorr_z, ivaq_rx_signal_master->rx_noise_val_corr_z, ivaq_rx_signal_master->rx_noise_std_nocorr_z, ivaq_rx_signal_master->rx_noise_std_corr_z);
}

/**
 * @brief Encode a ivaq_rx_signal_master struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_signal_master C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_master_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ivaq_rx_signal_master_t* ivaq_rx_signal_master)
{
    return mavlink_msg_ivaq_rx_signal_master_pack_status(system_id, component_id, _status, msg,  ivaq_rx_signal_master->rx_signal_det_flag, ivaq_rx_signal_master->rx_signal_det_to_send_flag, ivaq_rx_signal_master->rx_signal_det_time, ivaq_rx_signal_master->rx_signal_det_module_nocorr, ivaq_rx_signal_master->rx_signal_det_module_corr, ivaq_rx_signal_master->rx_saturation_flag_x, ivaq_rx_signal_master->rx_signal_det_flag_x, ivaq_rx_signal_master->rx_signal_det_sat_flag_x, ivaq_rx_signal_master->rx_signal_det_time_x, ivaq_rx_signal_master->rx_signal_det_val_nocorr_x, ivaq_rx_signal_master->rx_signal_det_val_corr_x, ivaq_rx_signal_master->rx_noise_val_nocorr_x, ivaq_rx_signal_master->rx_noise_val_corr_x, ivaq_rx_signal_master->rx_noise_std_nocorr_x, ivaq_rx_signal_master->rx_noise_std_corr_x, ivaq_rx_signal_master->rx_saturation_flag_y, ivaq_rx_signal_master->rx_signal_det_flag_y, ivaq_rx_signal_master->rx_signal_det_sat_flag_y, ivaq_rx_signal_master->rx_signal_det_time_y, ivaq_rx_signal_master->rx_signal_det_val_nocorr_y, ivaq_rx_signal_master->rx_signal_det_val_corr_y, ivaq_rx_signal_master->rx_noise_val_nocorr_y, ivaq_rx_signal_master->rx_noise_val_corr_y, ivaq_rx_signal_master->rx_noise_std_nocorr_y, ivaq_rx_signal_master->rx_noise_std_corr_y, ivaq_rx_signal_master->rx_saturation_flag_z, ivaq_rx_signal_master->rx_signal_det_flag_z, ivaq_rx_signal_master->rx_signal_det_sat_flag_z, ivaq_rx_signal_master->rx_signal_det_time_z, ivaq_rx_signal_master->rx_signal_det_val_nocorr_z, ivaq_rx_signal_master->rx_signal_det_val_corr_z, ivaq_rx_signal_master->rx_noise_val_nocorr_z, ivaq_rx_signal_master->rx_noise_val_corr_z, ivaq_rx_signal_master->rx_noise_std_nocorr_z, ivaq_rx_signal_master->rx_noise_std_corr_z);
}

/**
 * @brief Send a ivaq_rx_signal_master message
 * @param chan MAVLink channel to send the message
 *
 * @param rx_signal_det_flag  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_det_to_send_flag  Ivaq Rx Signal Detected Sent flag
 * @param rx_signal_det_time  Ivaq Rx Detected Pulse Overall Signal Time tag [ms]
 * @param rx_signal_det_module_nocorr  Ivaq Rx Detected Pulse Module value [V]
 * @param rx_signal_det_module_corr  Ivaq Rx Detected Pulse Module value [V]
 * @param rx_saturation_flag_x  Ivaq Rx X-ant Saturation flag
 * @param rx_signal_det_flag_x  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_x  Ivaq Rx X-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_x  Ivaq Rx X-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr_x  Ivaq Rx X-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_x  Ivaq Rx X-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_x  Ivaq Rx X-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_x  Ivaq Rx X-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_x  Ivaq Rx X-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_x  Ivaq Rx X-ant Noise Corr Demod std deviation
 * @param rx_saturation_flag_y  Ivaq Rx Y-ant Saturation flag
 * @param rx_signal_det_flag_y  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_y  Ivaq Rx Y-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_y  Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr_y  Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_y  Ivaq Rx Y-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_y  Ivaq Rx Y-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_y  Ivaq Rx Y-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_y  Ivaq Rx Y-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_y  Ivaq Rx Y-ant Noise Corr Demod std deviation
 * @param rx_saturation_flag_z  Ivaq Rx Z-ant Saturation flag
 * @param rx_signal_det_flag_z  Ivaq Rx Z-ant Signal Detection flag
 * @param rx_signal_det_sat_flag_z  Ivaq Rx Z-ant Saturation flag for Detected Signal
 * @param rx_signal_det_time_z  Ivaq Rx Z-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr_z  Ivaq Rx Z-ant Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr_z  Ivaq Rx Z-ant Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr_z  Ivaq Rx Z-ant Noise No Corr Demod value
 * @param rx_noise_val_corr_z  Ivaq Rx Z-ant Noise Corr Demod value
 * @param rx_noise_std_nocorr_z  Ivaq Rx Z-ant Noise No Corr Demod std deviation
 * @param rx_noise_std_corr_z  Ivaq Rx Z-ant Noise Corr Demod std deviation
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ivaq_rx_signal_master_send(mavlink_channel_t chan, uint8_t rx_signal_det_flag, uint8_t rx_signal_det_to_send_flag, uint64_t rx_signal_det_time, float rx_signal_det_module_nocorr, float rx_signal_det_module_corr, uint8_t rx_saturation_flag_x, uint8_t rx_signal_det_flag_x, uint8_t rx_signal_det_sat_flag_x, uint32_t rx_signal_det_time_x, float rx_signal_det_val_nocorr_x, float rx_signal_det_val_corr_x, float rx_noise_val_nocorr_x, float rx_noise_val_corr_x, float rx_noise_std_nocorr_x, float rx_noise_std_corr_x, uint8_t rx_saturation_flag_y, uint8_t rx_signal_det_flag_y, uint8_t rx_signal_det_sat_flag_y, uint32_t rx_signal_det_time_y, float rx_signal_det_val_nocorr_y, float rx_signal_det_val_corr_y, float rx_noise_val_nocorr_y, float rx_noise_val_corr_y, float rx_noise_std_nocorr_y, float rx_noise_std_corr_y, uint8_t rx_saturation_flag_z, uint8_t rx_signal_det_flag_z, uint8_t rx_signal_det_sat_flag_z, uint32_t rx_signal_det_time_z, float rx_signal_det_val_nocorr_z, float rx_signal_det_val_corr_z, float rx_noise_val_nocorr_z, float rx_noise_val_corr_z, float rx_noise_std_nocorr_z, float rx_noise_std_corr_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN];
    _mav_put_uint64_t(buf, 0, rx_signal_det_time);
    _mav_put_float(buf, 8, rx_signal_det_module_nocorr);
    _mav_put_float(buf, 12, rx_signal_det_module_corr);
    _mav_put_uint32_t(buf, 16, rx_signal_det_time_x);
    _mav_put_float(buf, 20, rx_signal_det_val_nocorr_x);
    _mav_put_float(buf, 24, rx_signal_det_val_corr_x);
    _mav_put_float(buf, 28, rx_noise_val_nocorr_x);
    _mav_put_float(buf, 32, rx_noise_val_corr_x);
    _mav_put_float(buf, 36, rx_noise_std_nocorr_x);
    _mav_put_float(buf, 40, rx_noise_std_corr_x);
    _mav_put_uint32_t(buf, 44, rx_signal_det_time_y);
    _mav_put_float(buf, 48, rx_signal_det_val_nocorr_y);
    _mav_put_float(buf, 52, rx_signal_det_val_corr_y);
    _mav_put_float(buf, 56, rx_noise_val_nocorr_y);
    _mav_put_float(buf, 60, rx_noise_val_corr_y);
    _mav_put_float(buf, 64, rx_noise_std_nocorr_y);
    _mav_put_float(buf, 68, rx_noise_std_corr_y);
    _mav_put_uint32_t(buf, 72, rx_signal_det_time_z);
    _mav_put_float(buf, 76, rx_signal_det_val_nocorr_z);
    _mav_put_float(buf, 80, rx_signal_det_val_corr_z);
    _mav_put_float(buf, 84, rx_noise_val_nocorr_z);
    _mav_put_float(buf, 88, rx_noise_val_corr_z);
    _mav_put_float(buf, 92, rx_noise_std_nocorr_z);
    _mav_put_float(buf, 96, rx_noise_std_corr_z);
    _mav_put_uint8_t(buf, 100, rx_signal_det_flag);
    _mav_put_uint8_t(buf, 101, rx_signal_det_to_send_flag);
    _mav_put_uint8_t(buf, 102, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 103, rx_signal_det_flag_x);
    _mav_put_uint8_t(buf, 104, rx_signal_det_sat_flag_x);
    _mav_put_uint8_t(buf, 105, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 106, rx_signal_det_flag_y);
    _mav_put_uint8_t(buf, 107, rx_signal_det_sat_flag_y);
    _mav_put_uint8_t(buf, 108, rx_saturation_flag_z);
    _mav_put_uint8_t(buf, 109, rx_signal_det_flag_z);
    _mav_put_uint8_t(buf, 110, rx_signal_det_sat_flag_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER, buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC);
#else
    mavlink_ivaq_rx_signal_master_t packet;
    packet.rx_signal_det_time = rx_signal_det_time;
    packet.rx_signal_det_module_nocorr = rx_signal_det_module_nocorr;
    packet.rx_signal_det_module_corr = rx_signal_det_module_corr;
    packet.rx_signal_det_time_x = rx_signal_det_time_x;
    packet.rx_signal_det_val_nocorr_x = rx_signal_det_val_nocorr_x;
    packet.rx_signal_det_val_corr_x = rx_signal_det_val_corr_x;
    packet.rx_noise_val_nocorr_x = rx_noise_val_nocorr_x;
    packet.rx_noise_val_corr_x = rx_noise_val_corr_x;
    packet.rx_noise_std_nocorr_x = rx_noise_std_nocorr_x;
    packet.rx_noise_std_corr_x = rx_noise_std_corr_x;
    packet.rx_signal_det_time_y = rx_signal_det_time_y;
    packet.rx_signal_det_val_nocorr_y = rx_signal_det_val_nocorr_y;
    packet.rx_signal_det_val_corr_y = rx_signal_det_val_corr_y;
    packet.rx_noise_val_nocorr_y = rx_noise_val_nocorr_y;
    packet.rx_noise_val_corr_y = rx_noise_val_corr_y;
    packet.rx_noise_std_nocorr_y = rx_noise_std_nocorr_y;
    packet.rx_noise_std_corr_y = rx_noise_std_corr_y;
    packet.rx_signal_det_time_z = rx_signal_det_time_z;
    packet.rx_signal_det_val_nocorr_z = rx_signal_det_val_nocorr_z;
    packet.rx_signal_det_val_corr_z = rx_signal_det_val_corr_z;
    packet.rx_noise_val_nocorr_z = rx_noise_val_nocorr_z;
    packet.rx_noise_val_corr_z = rx_noise_val_corr_z;
    packet.rx_noise_std_nocorr_z = rx_noise_std_nocorr_z;
    packet.rx_noise_std_corr_z = rx_noise_std_corr_z;
    packet.rx_signal_det_flag = rx_signal_det_flag;
    packet.rx_signal_det_to_send_flag = rx_signal_det_to_send_flag;
    packet.rx_saturation_flag_x = rx_saturation_flag_x;
    packet.rx_signal_det_flag_x = rx_signal_det_flag_x;
    packet.rx_signal_det_sat_flag_x = rx_signal_det_sat_flag_x;
    packet.rx_saturation_flag_y = rx_saturation_flag_y;
    packet.rx_signal_det_flag_y = rx_signal_det_flag_y;
    packet.rx_signal_det_sat_flag_y = rx_signal_det_sat_flag_y;
    packet.rx_saturation_flag_z = rx_saturation_flag_z;
    packet.rx_signal_det_flag_z = rx_signal_det_flag_z;
    packet.rx_signal_det_sat_flag_z = rx_signal_det_sat_flag_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER, (const char *)&packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC);
#endif
}

/**
 * @brief Send a ivaq_rx_signal_master message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ivaq_rx_signal_master_send_struct(mavlink_channel_t chan, const mavlink_ivaq_rx_signal_master_t* ivaq_rx_signal_master)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ivaq_rx_signal_master_send(chan, ivaq_rx_signal_master->rx_signal_det_flag, ivaq_rx_signal_master->rx_signal_det_to_send_flag, ivaq_rx_signal_master->rx_signal_det_time, ivaq_rx_signal_master->rx_signal_det_module_nocorr, ivaq_rx_signal_master->rx_signal_det_module_corr, ivaq_rx_signal_master->rx_saturation_flag_x, ivaq_rx_signal_master->rx_signal_det_flag_x, ivaq_rx_signal_master->rx_signal_det_sat_flag_x, ivaq_rx_signal_master->rx_signal_det_time_x, ivaq_rx_signal_master->rx_signal_det_val_nocorr_x, ivaq_rx_signal_master->rx_signal_det_val_corr_x, ivaq_rx_signal_master->rx_noise_val_nocorr_x, ivaq_rx_signal_master->rx_noise_val_corr_x, ivaq_rx_signal_master->rx_noise_std_nocorr_x, ivaq_rx_signal_master->rx_noise_std_corr_x, ivaq_rx_signal_master->rx_saturation_flag_y, ivaq_rx_signal_master->rx_signal_det_flag_y, ivaq_rx_signal_master->rx_signal_det_sat_flag_y, ivaq_rx_signal_master->rx_signal_det_time_y, ivaq_rx_signal_master->rx_signal_det_val_nocorr_y, ivaq_rx_signal_master->rx_signal_det_val_corr_y, ivaq_rx_signal_master->rx_noise_val_nocorr_y, ivaq_rx_signal_master->rx_noise_val_corr_y, ivaq_rx_signal_master->rx_noise_std_nocorr_y, ivaq_rx_signal_master->rx_noise_std_corr_y, ivaq_rx_signal_master->rx_saturation_flag_z, ivaq_rx_signal_master->rx_signal_det_flag_z, ivaq_rx_signal_master->rx_signal_det_sat_flag_z, ivaq_rx_signal_master->rx_signal_det_time_z, ivaq_rx_signal_master->rx_signal_det_val_nocorr_z, ivaq_rx_signal_master->rx_signal_det_val_corr_z, ivaq_rx_signal_master->rx_noise_val_nocorr_z, ivaq_rx_signal_master->rx_noise_val_corr_z, ivaq_rx_signal_master->rx_noise_std_nocorr_z, ivaq_rx_signal_master->rx_noise_std_corr_z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER, (const char *)ivaq_rx_signal_master, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC);
#endif
}

#if MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ivaq_rx_signal_master_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t rx_signal_det_flag, uint8_t rx_signal_det_to_send_flag, uint64_t rx_signal_det_time, float rx_signal_det_module_nocorr, float rx_signal_det_module_corr, uint8_t rx_saturation_flag_x, uint8_t rx_signal_det_flag_x, uint8_t rx_signal_det_sat_flag_x, uint32_t rx_signal_det_time_x, float rx_signal_det_val_nocorr_x, float rx_signal_det_val_corr_x, float rx_noise_val_nocorr_x, float rx_noise_val_corr_x, float rx_noise_std_nocorr_x, float rx_noise_std_corr_x, uint8_t rx_saturation_flag_y, uint8_t rx_signal_det_flag_y, uint8_t rx_signal_det_sat_flag_y, uint32_t rx_signal_det_time_y, float rx_signal_det_val_nocorr_y, float rx_signal_det_val_corr_y, float rx_noise_val_nocorr_y, float rx_noise_val_corr_y, float rx_noise_std_nocorr_y, float rx_noise_std_corr_y, uint8_t rx_saturation_flag_z, uint8_t rx_signal_det_flag_z, uint8_t rx_signal_det_sat_flag_z, uint32_t rx_signal_det_time_z, float rx_signal_det_val_nocorr_z, float rx_signal_det_val_corr_z, float rx_noise_val_nocorr_z, float rx_noise_val_corr_z, float rx_noise_std_nocorr_z, float rx_noise_std_corr_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, rx_signal_det_time);
    _mav_put_float(buf, 8, rx_signal_det_module_nocorr);
    _mav_put_float(buf, 12, rx_signal_det_module_corr);
    _mav_put_uint32_t(buf, 16, rx_signal_det_time_x);
    _mav_put_float(buf, 20, rx_signal_det_val_nocorr_x);
    _mav_put_float(buf, 24, rx_signal_det_val_corr_x);
    _mav_put_float(buf, 28, rx_noise_val_nocorr_x);
    _mav_put_float(buf, 32, rx_noise_val_corr_x);
    _mav_put_float(buf, 36, rx_noise_std_nocorr_x);
    _mav_put_float(buf, 40, rx_noise_std_corr_x);
    _mav_put_uint32_t(buf, 44, rx_signal_det_time_y);
    _mav_put_float(buf, 48, rx_signal_det_val_nocorr_y);
    _mav_put_float(buf, 52, rx_signal_det_val_corr_y);
    _mav_put_float(buf, 56, rx_noise_val_nocorr_y);
    _mav_put_float(buf, 60, rx_noise_val_corr_y);
    _mav_put_float(buf, 64, rx_noise_std_nocorr_y);
    _mav_put_float(buf, 68, rx_noise_std_corr_y);
    _mav_put_uint32_t(buf, 72, rx_signal_det_time_z);
    _mav_put_float(buf, 76, rx_signal_det_val_nocorr_z);
    _mav_put_float(buf, 80, rx_signal_det_val_corr_z);
    _mav_put_float(buf, 84, rx_noise_val_nocorr_z);
    _mav_put_float(buf, 88, rx_noise_val_corr_z);
    _mav_put_float(buf, 92, rx_noise_std_nocorr_z);
    _mav_put_float(buf, 96, rx_noise_std_corr_z);
    _mav_put_uint8_t(buf, 100, rx_signal_det_flag);
    _mav_put_uint8_t(buf, 101, rx_signal_det_to_send_flag);
    _mav_put_uint8_t(buf, 102, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 103, rx_signal_det_flag_x);
    _mav_put_uint8_t(buf, 104, rx_signal_det_sat_flag_x);
    _mav_put_uint8_t(buf, 105, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 106, rx_signal_det_flag_y);
    _mav_put_uint8_t(buf, 107, rx_signal_det_sat_flag_y);
    _mav_put_uint8_t(buf, 108, rx_saturation_flag_z);
    _mav_put_uint8_t(buf, 109, rx_signal_det_flag_z);
    _mav_put_uint8_t(buf, 110, rx_signal_det_sat_flag_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER, buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC);
#else
    mavlink_ivaq_rx_signal_master_t *packet = (mavlink_ivaq_rx_signal_master_t *)msgbuf;
    packet->rx_signal_det_time = rx_signal_det_time;
    packet->rx_signal_det_module_nocorr = rx_signal_det_module_nocorr;
    packet->rx_signal_det_module_corr = rx_signal_det_module_corr;
    packet->rx_signal_det_time_x = rx_signal_det_time_x;
    packet->rx_signal_det_val_nocorr_x = rx_signal_det_val_nocorr_x;
    packet->rx_signal_det_val_corr_x = rx_signal_det_val_corr_x;
    packet->rx_noise_val_nocorr_x = rx_noise_val_nocorr_x;
    packet->rx_noise_val_corr_x = rx_noise_val_corr_x;
    packet->rx_noise_std_nocorr_x = rx_noise_std_nocorr_x;
    packet->rx_noise_std_corr_x = rx_noise_std_corr_x;
    packet->rx_signal_det_time_y = rx_signal_det_time_y;
    packet->rx_signal_det_val_nocorr_y = rx_signal_det_val_nocorr_y;
    packet->rx_signal_det_val_corr_y = rx_signal_det_val_corr_y;
    packet->rx_noise_val_nocorr_y = rx_noise_val_nocorr_y;
    packet->rx_noise_val_corr_y = rx_noise_val_corr_y;
    packet->rx_noise_std_nocorr_y = rx_noise_std_nocorr_y;
    packet->rx_noise_std_corr_y = rx_noise_std_corr_y;
    packet->rx_signal_det_time_z = rx_signal_det_time_z;
    packet->rx_signal_det_val_nocorr_z = rx_signal_det_val_nocorr_z;
    packet->rx_signal_det_val_corr_z = rx_signal_det_val_corr_z;
    packet->rx_noise_val_nocorr_z = rx_noise_val_nocorr_z;
    packet->rx_noise_val_corr_z = rx_noise_val_corr_z;
    packet->rx_noise_std_nocorr_z = rx_noise_std_nocorr_z;
    packet->rx_noise_std_corr_z = rx_noise_std_corr_z;
    packet->rx_signal_det_flag = rx_signal_det_flag;
    packet->rx_signal_det_to_send_flag = rx_signal_det_to_send_flag;
    packet->rx_saturation_flag_x = rx_saturation_flag_x;
    packet->rx_signal_det_flag_x = rx_signal_det_flag_x;
    packet->rx_signal_det_sat_flag_x = rx_signal_det_sat_flag_x;
    packet->rx_saturation_flag_y = rx_saturation_flag_y;
    packet->rx_signal_det_flag_y = rx_signal_det_flag_y;
    packet->rx_signal_det_sat_flag_y = rx_signal_det_sat_flag_y;
    packet->rx_saturation_flag_z = rx_saturation_flag_z;
    packet->rx_signal_det_flag_z = rx_signal_det_flag_z;
    packet->rx_signal_det_sat_flag_z = rx_signal_det_sat_flag_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER, (const char *)packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC);
#endif
}
#endif

#endif

// MESSAGE IVAQ_RX_SIGNAL_MASTER UNPACKING


/**
 * @brief Get field rx_signal_det_flag from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Signal Detection flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  100);
}

/**
 * @brief Get field rx_signal_det_to_send_flag from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Signal Detected Sent flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_to_send_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  101);
}

/**
 * @brief Get field rx_signal_det_time from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Detected Pulse Overall Signal Time tag [ms]
 */
static inline uint64_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field rx_signal_det_module_nocorr from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Detected Pulse Module value [V]
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_module_nocorr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field rx_signal_det_module_corr from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Detected Pulse Module value [V]
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_module_corr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field rx_saturation_flag_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Saturation flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_saturation_flag_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  102);
}

/**
 * @brief Get field rx_signal_det_flag_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Signal Detection flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_flag_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  103);
}

/**
 * @brief Get field rx_signal_det_sat_flag_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Saturation flag for Detected Signal
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_sat_flag_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  104);
}

/**
 * @brief Get field rx_signal_det_time_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Signal NoCorr value in detected pulse
 */
static inline uint32_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_time_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  16);
}

/**
 * @brief Get field rx_signal_det_val_nocorr_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Signal NoCorr value in detected pulse
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_val_nocorr_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field rx_signal_det_val_corr_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Signal Corr value in detected pulse
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_val_corr_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field rx_noise_val_nocorr_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Noise No Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_val_nocorr_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field rx_noise_val_corr_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Noise Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_val_corr_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field rx_noise_std_nocorr_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Noise No Corr Demod std deviation
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_std_nocorr_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field rx_noise_std_corr_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Noise Corr Demod std deviation
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_std_corr_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field rx_saturation_flag_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Saturation flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_saturation_flag_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  105);
}

/**
 * @brief Get field rx_signal_det_flag_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Signal Detection flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_flag_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  106);
}

/**
 * @brief Get field rx_signal_det_sat_flag_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Saturation flag for Detected Signal
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_sat_flag_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  107);
}

/**
 * @brief Get field rx_signal_det_time_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 */
static inline uint32_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_time_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  44);
}

/**
 * @brief Get field rx_signal_det_val_nocorr_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Signal NoCorr value in detected pulse
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_val_nocorr_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field rx_signal_det_val_corr_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Signal Corr value in detected pulse
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_val_corr_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field rx_noise_val_nocorr_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Noise No Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_val_nocorr_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field rx_noise_val_corr_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Noise Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_val_corr_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field rx_noise_std_nocorr_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Noise No Corr Demod std deviation
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_std_nocorr_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field rx_noise_std_corr_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Noise Corr Demod std deviation
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_std_corr_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Get field rx_saturation_flag_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Saturation flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_saturation_flag_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  108);
}

/**
 * @brief Get field rx_signal_det_flag_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Signal Detection flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_flag_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  109);
}

/**
 * @brief Get field rx_signal_det_sat_flag_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Saturation flag for Detected Signal
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_sat_flag_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  110);
}

/**
 * @brief Get field rx_signal_det_time_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Signal NoCorr value in detected pulse
 */
static inline uint32_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_time_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  72);
}

/**
 * @brief Get field rx_signal_det_val_nocorr_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Signal NoCorr value in detected pulse
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_val_nocorr_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  76);
}

/**
 * @brief Get field rx_signal_det_val_corr_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Signal Corr value in detected pulse
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_val_corr_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  80);
}

/**
 * @brief Get field rx_noise_val_nocorr_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Noise No Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_val_nocorr_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  84);
}

/**
 * @brief Get field rx_noise_val_corr_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Noise Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_val_corr_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  88);
}

/**
 * @brief Get field rx_noise_std_nocorr_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Noise No Corr Demod std deviation
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_std_nocorr_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  92);
}

/**
 * @brief Get field rx_noise_std_corr_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Noise Corr Demod std deviation
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_std_corr_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  96);
}

/**
 * @brief Decode a ivaq_rx_signal_master message into a struct
 *
 * @param msg The message to decode
 * @param ivaq_rx_signal_master C-struct to decode the message contents into
 */
static inline void mavlink_msg_ivaq_rx_signal_master_decode(const mavlink_message_t* msg, mavlink_ivaq_rx_signal_master_t* ivaq_rx_signal_master)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ivaq_rx_signal_master->rx_signal_det_time = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_time(msg);
    ivaq_rx_signal_master->rx_signal_det_module_nocorr = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_module_nocorr(msg);
    ivaq_rx_signal_master->rx_signal_det_module_corr = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_module_corr(msg);
    ivaq_rx_signal_master->rx_signal_det_time_x = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_time_x(msg);
    ivaq_rx_signal_master->rx_signal_det_val_nocorr_x = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_val_nocorr_x(msg);
    ivaq_rx_signal_master->rx_signal_det_val_corr_x = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_val_corr_x(msg);
    ivaq_rx_signal_master->rx_noise_val_nocorr_x = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_val_nocorr_x(msg);
    ivaq_rx_signal_master->rx_noise_val_corr_x = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_val_corr_x(msg);
    ivaq_rx_signal_master->rx_noise_std_nocorr_x = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_std_nocorr_x(msg);
    ivaq_rx_signal_master->rx_noise_std_corr_x = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_std_corr_x(msg);
    ivaq_rx_signal_master->rx_signal_det_time_y = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_time_y(msg);
    ivaq_rx_signal_master->rx_signal_det_val_nocorr_y = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_val_nocorr_y(msg);
    ivaq_rx_signal_master->rx_signal_det_val_corr_y = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_val_corr_y(msg);
    ivaq_rx_signal_master->rx_noise_val_nocorr_y = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_val_nocorr_y(msg);
    ivaq_rx_signal_master->rx_noise_val_corr_y = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_val_corr_y(msg);
    ivaq_rx_signal_master->rx_noise_std_nocorr_y = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_std_nocorr_y(msg);
    ivaq_rx_signal_master->rx_noise_std_corr_y = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_std_corr_y(msg);
    ivaq_rx_signal_master->rx_signal_det_time_z = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_time_z(msg);
    ivaq_rx_signal_master->rx_signal_det_val_nocorr_z = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_val_nocorr_z(msg);
    ivaq_rx_signal_master->rx_signal_det_val_corr_z = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_val_corr_z(msg);
    ivaq_rx_signal_master->rx_noise_val_nocorr_z = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_val_nocorr_z(msg);
    ivaq_rx_signal_master->rx_noise_val_corr_z = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_val_corr_z(msg);
    ivaq_rx_signal_master->rx_noise_std_nocorr_z = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_std_nocorr_z(msg);
    ivaq_rx_signal_master->rx_noise_std_corr_z = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_std_corr_z(msg);
    ivaq_rx_signal_master->rx_signal_det_flag = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_flag(msg);
    ivaq_rx_signal_master->rx_signal_det_to_send_flag = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_to_send_flag(msg);
    ivaq_rx_signal_master->rx_saturation_flag_x = mavlink_msg_ivaq_rx_signal_master_get_rx_saturation_flag_x(msg);
    ivaq_rx_signal_master->rx_signal_det_flag_x = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_flag_x(msg);
    ivaq_rx_signal_master->rx_signal_det_sat_flag_x = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_sat_flag_x(msg);
    ivaq_rx_signal_master->rx_saturation_flag_y = mavlink_msg_ivaq_rx_signal_master_get_rx_saturation_flag_y(msg);
    ivaq_rx_signal_master->rx_signal_det_flag_y = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_flag_y(msg);
    ivaq_rx_signal_master->rx_signal_det_sat_flag_y = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_sat_flag_y(msg);
    ivaq_rx_signal_master->rx_saturation_flag_z = mavlink_msg_ivaq_rx_signal_master_get_rx_saturation_flag_z(msg);
    ivaq_rx_signal_master->rx_signal_det_flag_z = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_flag_z(msg);
    ivaq_rx_signal_master->rx_signal_det_sat_flag_z = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_sat_flag_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN? msg->len : MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN;
        memset(ivaq_rx_signal_master, 0, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
    memcpy(ivaq_rx_signal_master, _MAV_PAYLOAD(msg), len);
#endif
}
