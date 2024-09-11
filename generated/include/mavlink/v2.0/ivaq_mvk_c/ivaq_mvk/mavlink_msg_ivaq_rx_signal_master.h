#pragma once
// MESSAGE IVAQ_RX_SIGNAL_MASTER PACKING

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER 204


typedef struct __mavlink_ivaq_rx_signal_master_t {
 uint32_t rx_time_signal_ms; /*<  Ivaq Rx Signal Time tag*/
 float rx_signal_raw_x; /*<  Ivaq Rx X-ant Signal Raw Demod value*/
 float rx_signal_corr_x; /*<  Ivaq Rx X-ant Signal Corr Demod value*/
 float rx_noise_raw_x; /*<  Ivaq Rx Z-ant Noise Raw Demod value*/
 float rx_noise_corr_x; /*<  Ivaq Rx Z-ant Noise Corr Demod value*/
 float rx_signal_raw_y; /*<  Ivaq Rx Y-ant Signal Raw Demod value*/
 float rx_signal_corr_y; /*<  Ivaq Rx Y-ant Signal Corr Demod value*/
 float rx_noise_raw_y; /*<  Ivaq Rx Z-ant Noise Raw Demod value*/
 float rx_noise_corr_y; /*<  Ivaq Rx Z-ant Noise Corr Demod value*/
 float rx_signal_raw_z; /*<  Ivaq Rx Z-ant Signal Raw Demod value*/
 float rx_signal_corr_z; /*<  Ivaq Rx Z-ant Signal Corr Demod value*/
 float rx_noise_raw_z; /*<  Ivaq Rx Z-ant Noise Raw Demod value*/
 float rx_noise_corr_z; /*<  Ivaq Rx Z-ant Noise Corr Demod value*/
 uint8_t rx_saturation_flag_x; /*<  Ivaq Rx X-ant Saturation flag*/
 uint8_t rx_signal_det_x; /*<  Ivaq Rx X-ant Signal Detection flag*/
 uint8_t rx_saturation_flag_y; /*<  Ivaq Rx Y-ant Saturation flag*/
 uint8_t rx_signal_det_y; /*<  Ivaq Rx Y-ant Signal Detection flag*/
 uint8_t rx_saturation_flag_z; /*<  Ivaq Rx Z-ant Saturation flag*/
 uint8_t rx_signal_det_z; /*<  Ivaq Rx Z-ant Signal Detection flag*/
} mavlink_ivaq_rx_signal_master_t;

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN 58
#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN 58
#define MAVLINK_MSG_ID_204_LEN 58
#define MAVLINK_MSG_ID_204_MIN_LEN 58

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC 96
#define MAVLINK_MSG_ID_204_CRC 96



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL_MASTER { \
    204, \
    "IVAQ_RX_SIGNAL_MASTER", \
    19, \
    {  { "rx_time_signal_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ivaq_rx_signal_master_t, rx_time_signal_ms) }, \
         { "rx_saturation_flag_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 52, offsetof(mavlink_ivaq_rx_signal_master_t, rx_saturation_flag_x) }, \
         { "rx_signal_det_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 53, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_x) }, \
         { "rx_signal_raw_x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_raw_x) }, \
         { "rx_signal_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_corr_x) }, \
         { "rx_noise_raw_x", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_raw_x) }, \
         { "rx_noise_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_corr_x) }, \
         { "rx_saturation_flag_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 54, offsetof(mavlink_ivaq_rx_signal_master_t, rx_saturation_flag_y) }, \
         { "rx_signal_det_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 55, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_y) }, \
         { "rx_signal_raw_y", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_raw_y) }, \
         { "rx_signal_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_corr_y) }, \
         { "rx_noise_raw_y", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_raw_y) }, \
         { "rx_noise_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_corr_y) }, \
         { "rx_saturation_flag_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 56, offsetof(mavlink_ivaq_rx_signal_master_t, rx_saturation_flag_z) }, \
         { "rx_signal_det_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 57, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_z) }, \
         { "rx_signal_raw_z", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_raw_z) }, \
         { "rx_signal_corr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_corr_z) }, \
         { "rx_noise_raw_z", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_raw_z) }, \
         { "rx_noise_corr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_corr_z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL_MASTER { \
    "IVAQ_RX_SIGNAL_MASTER", \
    19, \
    {  { "rx_time_signal_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ivaq_rx_signal_master_t, rx_time_signal_ms) }, \
         { "rx_saturation_flag_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 52, offsetof(mavlink_ivaq_rx_signal_master_t, rx_saturation_flag_x) }, \
         { "rx_signal_det_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 53, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_x) }, \
         { "rx_signal_raw_x", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_raw_x) }, \
         { "rx_signal_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_corr_x) }, \
         { "rx_noise_raw_x", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_raw_x) }, \
         { "rx_noise_corr_x", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_corr_x) }, \
         { "rx_saturation_flag_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 54, offsetof(mavlink_ivaq_rx_signal_master_t, rx_saturation_flag_y) }, \
         { "rx_signal_det_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 55, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_y) }, \
         { "rx_signal_raw_y", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_raw_y) }, \
         { "rx_signal_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_corr_y) }, \
         { "rx_noise_raw_y", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_raw_y) }, \
         { "rx_noise_corr_y", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_corr_y) }, \
         { "rx_saturation_flag_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 56, offsetof(mavlink_ivaq_rx_signal_master_t, rx_saturation_flag_z) }, \
         { "rx_signal_det_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 57, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_det_z) }, \
         { "rx_signal_raw_z", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_raw_z) }, \
         { "rx_signal_corr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_corr_z) }, \
         { "rx_noise_raw_z", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_raw_z) }, \
         { "rx_noise_corr_z", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_ivaq_rx_signal_master_t, rx_noise_corr_z) }, \
         } \
}
#endif

/**
 * @brief Pack a ivaq_rx_signal_master message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_time_signal_ms  Ivaq Rx Signal Time tag
 * @param rx_saturation_flag_x  Ivaq Rx X-ant Saturation flag
 * @param rx_signal_det_x  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_raw_x  Ivaq Rx X-ant Signal Raw Demod value
 * @param rx_signal_corr_x  Ivaq Rx X-ant Signal Corr Demod value
 * @param rx_noise_raw_x  Ivaq Rx Z-ant Noise Raw Demod value
 * @param rx_noise_corr_x  Ivaq Rx Z-ant Noise Corr Demod value
 * @param rx_saturation_flag_y  Ivaq Rx Y-ant Saturation flag
 * @param rx_signal_det_y  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_raw_y  Ivaq Rx Y-ant Signal Raw Demod value
 * @param rx_signal_corr_y  Ivaq Rx Y-ant Signal Corr Demod value
 * @param rx_noise_raw_y  Ivaq Rx Z-ant Noise Raw Demod value
 * @param rx_noise_corr_y  Ivaq Rx Z-ant Noise Corr Demod value
 * @param rx_saturation_flag_z  Ivaq Rx Z-ant Saturation flag
 * @param rx_signal_det_z  Ivaq Rx Z-ant Signal Detection flag
 * @param rx_signal_raw_z  Ivaq Rx Z-ant Signal Raw Demod value
 * @param rx_signal_corr_z  Ivaq Rx Z-ant Signal Corr Demod value
 * @param rx_noise_raw_z  Ivaq Rx Z-ant Noise Raw Demod value
 * @param rx_noise_corr_z  Ivaq Rx Z-ant Noise Corr Demod value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_master_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t rx_time_signal_ms, uint8_t rx_saturation_flag_x, uint8_t rx_signal_det_x, float rx_signal_raw_x, float rx_signal_corr_x, float rx_noise_raw_x, float rx_noise_corr_x, uint8_t rx_saturation_flag_y, uint8_t rx_signal_det_y, float rx_signal_raw_y, float rx_signal_corr_y, float rx_noise_raw_y, float rx_noise_corr_y, uint8_t rx_saturation_flag_z, uint8_t rx_signal_det_z, float rx_signal_raw_z, float rx_signal_corr_z, float rx_noise_raw_z, float rx_noise_corr_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN];
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_raw_x);
    _mav_put_float(buf, 8, rx_signal_corr_x);
    _mav_put_float(buf, 12, rx_noise_raw_x);
    _mav_put_float(buf, 16, rx_noise_corr_x);
    _mav_put_float(buf, 20, rx_signal_raw_y);
    _mav_put_float(buf, 24, rx_signal_corr_y);
    _mav_put_float(buf, 28, rx_noise_raw_y);
    _mav_put_float(buf, 32, rx_noise_corr_y);
    _mav_put_float(buf, 36, rx_signal_raw_z);
    _mav_put_float(buf, 40, rx_signal_corr_z);
    _mav_put_float(buf, 44, rx_noise_raw_z);
    _mav_put_float(buf, 48, rx_noise_corr_z);
    _mav_put_uint8_t(buf, 52, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 53, rx_signal_det_x);
    _mav_put_uint8_t(buf, 54, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 55, rx_signal_det_y);
    _mav_put_uint8_t(buf, 56, rx_saturation_flag_z);
    _mav_put_uint8_t(buf, 57, rx_signal_det_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
#else
    mavlink_ivaq_rx_signal_master_t packet;
    packet.rx_time_signal_ms = rx_time_signal_ms;
    packet.rx_signal_raw_x = rx_signal_raw_x;
    packet.rx_signal_corr_x = rx_signal_corr_x;
    packet.rx_noise_raw_x = rx_noise_raw_x;
    packet.rx_noise_corr_x = rx_noise_corr_x;
    packet.rx_signal_raw_y = rx_signal_raw_y;
    packet.rx_signal_corr_y = rx_signal_corr_y;
    packet.rx_noise_raw_y = rx_noise_raw_y;
    packet.rx_noise_corr_y = rx_noise_corr_y;
    packet.rx_signal_raw_z = rx_signal_raw_z;
    packet.rx_signal_corr_z = rx_signal_corr_z;
    packet.rx_noise_raw_z = rx_noise_raw_z;
    packet.rx_noise_corr_z = rx_noise_corr_z;
    packet.rx_saturation_flag_x = rx_saturation_flag_x;
    packet.rx_signal_det_x = rx_signal_det_x;
    packet.rx_saturation_flag_y = rx_saturation_flag_y;
    packet.rx_signal_det_y = rx_signal_det_y;
    packet.rx_saturation_flag_z = rx_saturation_flag_z;
    packet.rx_signal_det_z = rx_signal_det_z;

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
 * @param rx_time_signal_ms  Ivaq Rx Signal Time tag
 * @param rx_saturation_flag_x  Ivaq Rx X-ant Saturation flag
 * @param rx_signal_det_x  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_raw_x  Ivaq Rx X-ant Signal Raw Demod value
 * @param rx_signal_corr_x  Ivaq Rx X-ant Signal Corr Demod value
 * @param rx_noise_raw_x  Ivaq Rx Z-ant Noise Raw Demod value
 * @param rx_noise_corr_x  Ivaq Rx Z-ant Noise Corr Demod value
 * @param rx_saturation_flag_y  Ivaq Rx Y-ant Saturation flag
 * @param rx_signal_det_y  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_raw_y  Ivaq Rx Y-ant Signal Raw Demod value
 * @param rx_signal_corr_y  Ivaq Rx Y-ant Signal Corr Demod value
 * @param rx_noise_raw_y  Ivaq Rx Z-ant Noise Raw Demod value
 * @param rx_noise_corr_y  Ivaq Rx Z-ant Noise Corr Demod value
 * @param rx_saturation_flag_z  Ivaq Rx Z-ant Saturation flag
 * @param rx_signal_det_z  Ivaq Rx Z-ant Signal Detection flag
 * @param rx_signal_raw_z  Ivaq Rx Z-ant Signal Raw Demod value
 * @param rx_signal_corr_z  Ivaq Rx Z-ant Signal Corr Demod value
 * @param rx_noise_raw_z  Ivaq Rx Z-ant Noise Raw Demod value
 * @param rx_noise_corr_z  Ivaq Rx Z-ant Noise Corr Demod value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_master_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t rx_time_signal_ms, uint8_t rx_saturation_flag_x, uint8_t rx_signal_det_x, float rx_signal_raw_x, float rx_signal_corr_x, float rx_noise_raw_x, float rx_noise_corr_x, uint8_t rx_saturation_flag_y, uint8_t rx_signal_det_y, float rx_signal_raw_y, float rx_signal_corr_y, float rx_noise_raw_y, float rx_noise_corr_y, uint8_t rx_saturation_flag_z, uint8_t rx_signal_det_z, float rx_signal_raw_z, float rx_signal_corr_z, float rx_noise_raw_z, float rx_noise_corr_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN];
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_raw_x);
    _mav_put_float(buf, 8, rx_signal_corr_x);
    _mav_put_float(buf, 12, rx_noise_raw_x);
    _mav_put_float(buf, 16, rx_noise_corr_x);
    _mav_put_float(buf, 20, rx_signal_raw_y);
    _mav_put_float(buf, 24, rx_signal_corr_y);
    _mav_put_float(buf, 28, rx_noise_raw_y);
    _mav_put_float(buf, 32, rx_noise_corr_y);
    _mav_put_float(buf, 36, rx_signal_raw_z);
    _mav_put_float(buf, 40, rx_signal_corr_z);
    _mav_put_float(buf, 44, rx_noise_raw_z);
    _mav_put_float(buf, 48, rx_noise_corr_z);
    _mav_put_uint8_t(buf, 52, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 53, rx_signal_det_x);
    _mav_put_uint8_t(buf, 54, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 55, rx_signal_det_y);
    _mav_put_uint8_t(buf, 56, rx_saturation_flag_z);
    _mav_put_uint8_t(buf, 57, rx_signal_det_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
#else
    mavlink_ivaq_rx_signal_master_t packet;
    packet.rx_time_signal_ms = rx_time_signal_ms;
    packet.rx_signal_raw_x = rx_signal_raw_x;
    packet.rx_signal_corr_x = rx_signal_corr_x;
    packet.rx_noise_raw_x = rx_noise_raw_x;
    packet.rx_noise_corr_x = rx_noise_corr_x;
    packet.rx_signal_raw_y = rx_signal_raw_y;
    packet.rx_signal_corr_y = rx_signal_corr_y;
    packet.rx_noise_raw_y = rx_noise_raw_y;
    packet.rx_noise_corr_y = rx_noise_corr_y;
    packet.rx_signal_raw_z = rx_signal_raw_z;
    packet.rx_signal_corr_z = rx_signal_corr_z;
    packet.rx_noise_raw_z = rx_noise_raw_z;
    packet.rx_noise_corr_z = rx_noise_corr_z;
    packet.rx_saturation_flag_x = rx_saturation_flag_x;
    packet.rx_signal_det_x = rx_signal_det_x;
    packet.rx_saturation_flag_y = rx_saturation_flag_y;
    packet.rx_signal_det_y = rx_signal_det_y;
    packet.rx_saturation_flag_z = rx_saturation_flag_z;
    packet.rx_signal_det_z = rx_signal_det_z;

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
 * @param rx_time_signal_ms  Ivaq Rx Signal Time tag
 * @param rx_saturation_flag_x  Ivaq Rx X-ant Saturation flag
 * @param rx_signal_det_x  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_raw_x  Ivaq Rx X-ant Signal Raw Demod value
 * @param rx_signal_corr_x  Ivaq Rx X-ant Signal Corr Demod value
 * @param rx_noise_raw_x  Ivaq Rx Z-ant Noise Raw Demod value
 * @param rx_noise_corr_x  Ivaq Rx Z-ant Noise Corr Demod value
 * @param rx_saturation_flag_y  Ivaq Rx Y-ant Saturation flag
 * @param rx_signal_det_y  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_raw_y  Ivaq Rx Y-ant Signal Raw Demod value
 * @param rx_signal_corr_y  Ivaq Rx Y-ant Signal Corr Demod value
 * @param rx_noise_raw_y  Ivaq Rx Z-ant Noise Raw Demod value
 * @param rx_noise_corr_y  Ivaq Rx Z-ant Noise Corr Demod value
 * @param rx_saturation_flag_z  Ivaq Rx Z-ant Saturation flag
 * @param rx_signal_det_z  Ivaq Rx Z-ant Signal Detection flag
 * @param rx_signal_raw_z  Ivaq Rx Z-ant Signal Raw Demod value
 * @param rx_signal_corr_z  Ivaq Rx Z-ant Signal Corr Demod value
 * @param rx_noise_raw_z  Ivaq Rx Z-ant Noise Raw Demod value
 * @param rx_noise_corr_z  Ivaq Rx Z-ant Noise Corr Demod value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_master_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t rx_time_signal_ms,uint8_t rx_saturation_flag_x,uint8_t rx_signal_det_x,float rx_signal_raw_x,float rx_signal_corr_x,float rx_noise_raw_x,float rx_noise_corr_x,uint8_t rx_saturation_flag_y,uint8_t rx_signal_det_y,float rx_signal_raw_y,float rx_signal_corr_y,float rx_noise_raw_y,float rx_noise_corr_y,uint8_t rx_saturation_flag_z,uint8_t rx_signal_det_z,float rx_signal_raw_z,float rx_signal_corr_z,float rx_noise_raw_z,float rx_noise_corr_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN];
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_raw_x);
    _mav_put_float(buf, 8, rx_signal_corr_x);
    _mav_put_float(buf, 12, rx_noise_raw_x);
    _mav_put_float(buf, 16, rx_noise_corr_x);
    _mav_put_float(buf, 20, rx_signal_raw_y);
    _mav_put_float(buf, 24, rx_signal_corr_y);
    _mav_put_float(buf, 28, rx_noise_raw_y);
    _mav_put_float(buf, 32, rx_noise_corr_y);
    _mav_put_float(buf, 36, rx_signal_raw_z);
    _mav_put_float(buf, 40, rx_signal_corr_z);
    _mav_put_float(buf, 44, rx_noise_raw_z);
    _mav_put_float(buf, 48, rx_noise_corr_z);
    _mav_put_uint8_t(buf, 52, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 53, rx_signal_det_x);
    _mav_put_uint8_t(buf, 54, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 55, rx_signal_det_y);
    _mav_put_uint8_t(buf, 56, rx_saturation_flag_z);
    _mav_put_uint8_t(buf, 57, rx_signal_det_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
#else
    mavlink_ivaq_rx_signal_master_t packet;
    packet.rx_time_signal_ms = rx_time_signal_ms;
    packet.rx_signal_raw_x = rx_signal_raw_x;
    packet.rx_signal_corr_x = rx_signal_corr_x;
    packet.rx_noise_raw_x = rx_noise_raw_x;
    packet.rx_noise_corr_x = rx_noise_corr_x;
    packet.rx_signal_raw_y = rx_signal_raw_y;
    packet.rx_signal_corr_y = rx_signal_corr_y;
    packet.rx_noise_raw_y = rx_noise_raw_y;
    packet.rx_noise_corr_y = rx_noise_corr_y;
    packet.rx_signal_raw_z = rx_signal_raw_z;
    packet.rx_signal_corr_z = rx_signal_corr_z;
    packet.rx_noise_raw_z = rx_noise_raw_z;
    packet.rx_noise_corr_z = rx_noise_corr_z;
    packet.rx_saturation_flag_x = rx_saturation_flag_x;
    packet.rx_signal_det_x = rx_signal_det_x;
    packet.rx_saturation_flag_y = rx_saturation_flag_y;
    packet.rx_signal_det_y = rx_signal_det_y;
    packet.rx_saturation_flag_z = rx_saturation_flag_z;
    packet.rx_signal_det_z = rx_signal_det_z;

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
    return mavlink_msg_ivaq_rx_signal_master_pack(system_id, component_id, msg, ivaq_rx_signal_master->rx_time_signal_ms, ivaq_rx_signal_master->rx_saturation_flag_x, ivaq_rx_signal_master->rx_signal_det_x, ivaq_rx_signal_master->rx_signal_raw_x, ivaq_rx_signal_master->rx_signal_corr_x, ivaq_rx_signal_master->rx_noise_raw_x, ivaq_rx_signal_master->rx_noise_corr_x, ivaq_rx_signal_master->rx_saturation_flag_y, ivaq_rx_signal_master->rx_signal_det_y, ivaq_rx_signal_master->rx_signal_raw_y, ivaq_rx_signal_master->rx_signal_corr_y, ivaq_rx_signal_master->rx_noise_raw_y, ivaq_rx_signal_master->rx_noise_corr_y, ivaq_rx_signal_master->rx_saturation_flag_z, ivaq_rx_signal_master->rx_signal_det_z, ivaq_rx_signal_master->rx_signal_raw_z, ivaq_rx_signal_master->rx_signal_corr_z, ivaq_rx_signal_master->rx_noise_raw_z, ivaq_rx_signal_master->rx_noise_corr_z);
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
    return mavlink_msg_ivaq_rx_signal_master_pack_chan(system_id, component_id, chan, msg, ivaq_rx_signal_master->rx_time_signal_ms, ivaq_rx_signal_master->rx_saturation_flag_x, ivaq_rx_signal_master->rx_signal_det_x, ivaq_rx_signal_master->rx_signal_raw_x, ivaq_rx_signal_master->rx_signal_corr_x, ivaq_rx_signal_master->rx_noise_raw_x, ivaq_rx_signal_master->rx_noise_corr_x, ivaq_rx_signal_master->rx_saturation_flag_y, ivaq_rx_signal_master->rx_signal_det_y, ivaq_rx_signal_master->rx_signal_raw_y, ivaq_rx_signal_master->rx_signal_corr_y, ivaq_rx_signal_master->rx_noise_raw_y, ivaq_rx_signal_master->rx_noise_corr_y, ivaq_rx_signal_master->rx_saturation_flag_z, ivaq_rx_signal_master->rx_signal_det_z, ivaq_rx_signal_master->rx_signal_raw_z, ivaq_rx_signal_master->rx_signal_corr_z, ivaq_rx_signal_master->rx_noise_raw_z, ivaq_rx_signal_master->rx_noise_corr_z);
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
    return mavlink_msg_ivaq_rx_signal_master_pack_status(system_id, component_id, _status, msg,  ivaq_rx_signal_master->rx_time_signal_ms, ivaq_rx_signal_master->rx_saturation_flag_x, ivaq_rx_signal_master->rx_signal_det_x, ivaq_rx_signal_master->rx_signal_raw_x, ivaq_rx_signal_master->rx_signal_corr_x, ivaq_rx_signal_master->rx_noise_raw_x, ivaq_rx_signal_master->rx_noise_corr_x, ivaq_rx_signal_master->rx_saturation_flag_y, ivaq_rx_signal_master->rx_signal_det_y, ivaq_rx_signal_master->rx_signal_raw_y, ivaq_rx_signal_master->rx_signal_corr_y, ivaq_rx_signal_master->rx_noise_raw_y, ivaq_rx_signal_master->rx_noise_corr_y, ivaq_rx_signal_master->rx_saturation_flag_z, ivaq_rx_signal_master->rx_signal_det_z, ivaq_rx_signal_master->rx_signal_raw_z, ivaq_rx_signal_master->rx_signal_corr_z, ivaq_rx_signal_master->rx_noise_raw_z, ivaq_rx_signal_master->rx_noise_corr_z);
}

/**
 * @brief Send a ivaq_rx_signal_master message
 * @param chan MAVLink channel to send the message
 *
 * @param rx_time_signal_ms  Ivaq Rx Signal Time tag
 * @param rx_saturation_flag_x  Ivaq Rx X-ant Saturation flag
 * @param rx_signal_det_x  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_raw_x  Ivaq Rx X-ant Signal Raw Demod value
 * @param rx_signal_corr_x  Ivaq Rx X-ant Signal Corr Demod value
 * @param rx_noise_raw_x  Ivaq Rx Z-ant Noise Raw Demod value
 * @param rx_noise_corr_x  Ivaq Rx Z-ant Noise Corr Demod value
 * @param rx_saturation_flag_y  Ivaq Rx Y-ant Saturation flag
 * @param rx_signal_det_y  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_raw_y  Ivaq Rx Y-ant Signal Raw Demod value
 * @param rx_signal_corr_y  Ivaq Rx Y-ant Signal Corr Demod value
 * @param rx_noise_raw_y  Ivaq Rx Z-ant Noise Raw Demod value
 * @param rx_noise_corr_y  Ivaq Rx Z-ant Noise Corr Demod value
 * @param rx_saturation_flag_z  Ivaq Rx Z-ant Saturation flag
 * @param rx_signal_det_z  Ivaq Rx Z-ant Signal Detection flag
 * @param rx_signal_raw_z  Ivaq Rx Z-ant Signal Raw Demod value
 * @param rx_signal_corr_z  Ivaq Rx Z-ant Signal Corr Demod value
 * @param rx_noise_raw_z  Ivaq Rx Z-ant Noise Raw Demod value
 * @param rx_noise_corr_z  Ivaq Rx Z-ant Noise Corr Demod value
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ivaq_rx_signal_master_send(mavlink_channel_t chan, uint32_t rx_time_signal_ms, uint8_t rx_saturation_flag_x, uint8_t rx_signal_det_x, float rx_signal_raw_x, float rx_signal_corr_x, float rx_noise_raw_x, float rx_noise_corr_x, uint8_t rx_saturation_flag_y, uint8_t rx_signal_det_y, float rx_signal_raw_y, float rx_signal_corr_y, float rx_noise_raw_y, float rx_noise_corr_y, uint8_t rx_saturation_flag_z, uint8_t rx_signal_det_z, float rx_signal_raw_z, float rx_signal_corr_z, float rx_noise_raw_z, float rx_noise_corr_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN];
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_raw_x);
    _mav_put_float(buf, 8, rx_signal_corr_x);
    _mav_put_float(buf, 12, rx_noise_raw_x);
    _mav_put_float(buf, 16, rx_noise_corr_x);
    _mav_put_float(buf, 20, rx_signal_raw_y);
    _mav_put_float(buf, 24, rx_signal_corr_y);
    _mav_put_float(buf, 28, rx_noise_raw_y);
    _mav_put_float(buf, 32, rx_noise_corr_y);
    _mav_put_float(buf, 36, rx_signal_raw_z);
    _mav_put_float(buf, 40, rx_signal_corr_z);
    _mav_put_float(buf, 44, rx_noise_raw_z);
    _mav_put_float(buf, 48, rx_noise_corr_z);
    _mav_put_uint8_t(buf, 52, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 53, rx_signal_det_x);
    _mav_put_uint8_t(buf, 54, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 55, rx_signal_det_y);
    _mav_put_uint8_t(buf, 56, rx_saturation_flag_z);
    _mav_put_uint8_t(buf, 57, rx_signal_det_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER, buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC);
#else
    mavlink_ivaq_rx_signal_master_t packet;
    packet.rx_time_signal_ms = rx_time_signal_ms;
    packet.rx_signal_raw_x = rx_signal_raw_x;
    packet.rx_signal_corr_x = rx_signal_corr_x;
    packet.rx_noise_raw_x = rx_noise_raw_x;
    packet.rx_noise_corr_x = rx_noise_corr_x;
    packet.rx_signal_raw_y = rx_signal_raw_y;
    packet.rx_signal_corr_y = rx_signal_corr_y;
    packet.rx_noise_raw_y = rx_noise_raw_y;
    packet.rx_noise_corr_y = rx_noise_corr_y;
    packet.rx_signal_raw_z = rx_signal_raw_z;
    packet.rx_signal_corr_z = rx_signal_corr_z;
    packet.rx_noise_raw_z = rx_noise_raw_z;
    packet.rx_noise_corr_z = rx_noise_corr_z;
    packet.rx_saturation_flag_x = rx_saturation_flag_x;
    packet.rx_signal_det_x = rx_signal_det_x;
    packet.rx_saturation_flag_y = rx_saturation_flag_y;
    packet.rx_signal_det_y = rx_signal_det_y;
    packet.rx_saturation_flag_z = rx_saturation_flag_z;
    packet.rx_signal_det_z = rx_signal_det_z;

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
    mavlink_msg_ivaq_rx_signal_master_send(chan, ivaq_rx_signal_master->rx_time_signal_ms, ivaq_rx_signal_master->rx_saturation_flag_x, ivaq_rx_signal_master->rx_signal_det_x, ivaq_rx_signal_master->rx_signal_raw_x, ivaq_rx_signal_master->rx_signal_corr_x, ivaq_rx_signal_master->rx_noise_raw_x, ivaq_rx_signal_master->rx_noise_corr_x, ivaq_rx_signal_master->rx_saturation_flag_y, ivaq_rx_signal_master->rx_signal_det_y, ivaq_rx_signal_master->rx_signal_raw_y, ivaq_rx_signal_master->rx_signal_corr_y, ivaq_rx_signal_master->rx_noise_raw_y, ivaq_rx_signal_master->rx_noise_corr_y, ivaq_rx_signal_master->rx_saturation_flag_z, ivaq_rx_signal_master->rx_signal_det_z, ivaq_rx_signal_master->rx_signal_raw_z, ivaq_rx_signal_master->rx_signal_corr_z, ivaq_rx_signal_master->rx_noise_raw_z, ivaq_rx_signal_master->rx_noise_corr_z);
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
static inline void mavlink_msg_ivaq_rx_signal_master_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t rx_time_signal_ms, uint8_t rx_saturation_flag_x, uint8_t rx_signal_det_x, float rx_signal_raw_x, float rx_signal_corr_x, float rx_noise_raw_x, float rx_noise_corr_x, uint8_t rx_saturation_flag_y, uint8_t rx_signal_det_y, float rx_signal_raw_y, float rx_signal_corr_y, float rx_noise_raw_y, float rx_noise_corr_y, uint8_t rx_saturation_flag_z, uint8_t rx_signal_det_z, float rx_signal_raw_z, float rx_signal_corr_z, float rx_noise_raw_z, float rx_noise_corr_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_raw_x);
    _mav_put_float(buf, 8, rx_signal_corr_x);
    _mav_put_float(buf, 12, rx_noise_raw_x);
    _mav_put_float(buf, 16, rx_noise_corr_x);
    _mav_put_float(buf, 20, rx_signal_raw_y);
    _mav_put_float(buf, 24, rx_signal_corr_y);
    _mav_put_float(buf, 28, rx_noise_raw_y);
    _mav_put_float(buf, 32, rx_noise_corr_y);
    _mav_put_float(buf, 36, rx_signal_raw_z);
    _mav_put_float(buf, 40, rx_signal_corr_z);
    _mav_put_float(buf, 44, rx_noise_raw_z);
    _mav_put_float(buf, 48, rx_noise_corr_z);
    _mav_put_uint8_t(buf, 52, rx_saturation_flag_x);
    _mav_put_uint8_t(buf, 53, rx_signal_det_x);
    _mav_put_uint8_t(buf, 54, rx_saturation_flag_y);
    _mav_put_uint8_t(buf, 55, rx_signal_det_y);
    _mav_put_uint8_t(buf, 56, rx_saturation_flag_z);
    _mav_put_uint8_t(buf, 57, rx_signal_det_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER, buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC);
#else
    mavlink_ivaq_rx_signal_master_t *packet = (mavlink_ivaq_rx_signal_master_t *)msgbuf;
    packet->rx_time_signal_ms = rx_time_signal_ms;
    packet->rx_signal_raw_x = rx_signal_raw_x;
    packet->rx_signal_corr_x = rx_signal_corr_x;
    packet->rx_noise_raw_x = rx_noise_raw_x;
    packet->rx_noise_corr_x = rx_noise_corr_x;
    packet->rx_signal_raw_y = rx_signal_raw_y;
    packet->rx_signal_corr_y = rx_signal_corr_y;
    packet->rx_noise_raw_y = rx_noise_raw_y;
    packet->rx_noise_corr_y = rx_noise_corr_y;
    packet->rx_signal_raw_z = rx_signal_raw_z;
    packet->rx_signal_corr_z = rx_signal_corr_z;
    packet->rx_noise_raw_z = rx_noise_raw_z;
    packet->rx_noise_corr_z = rx_noise_corr_z;
    packet->rx_saturation_flag_x = rx_saturation_flag_x;
    packet->rx_signal_det_x = rx_signal_det_x;
    packet->rx_saturation_flag_y = rx_saturation_flag_y;
    packet->rx_signal_det_y = rx_signal_det_y;
    packet->rx_saturation_flag_z = rx_saturation_flag_z;
    packet->rx_signal_det_z = rx_signal_det_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER, (const char *)packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC);
#endif
}
#endif

#endif

// MESSAGE IVAQ_RX_SIGNAL_MASTER UNPACKING


/**
 * @brief Get field rx_time_signal_ms from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Signal Time tag
 */
static inline uint32_t mavlink_msg_ivaq_rx_signal_master_get_rx_time_signal_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field rx_saturation_flag_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Saturation flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_saturation_flag_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  52);
}

/**
 * @brief Get field rx_signal_det_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Signal Detection flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  53);
}

/**
 * @brief Get field rx_signal_raw_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Signal Raw Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_raw_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field rx_signal_corr_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Signal Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_corr_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field rx_noise_raw_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Noise Raw Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_raw_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field rx_noise_corr_x from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Noise Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_corr_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field rx_saturation_flag_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Saturation flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_saturation_flag_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  54);
}

/**
 * @brief Get field rx_signal_det_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Signal Detection flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  55);
}

/**
 * @brief Get field rx_signal_raw_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Signal Raw Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_raw_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field rx_signal_corr_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Signal Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_corr_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field rx_noise_raw_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Noise Raw Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_raw_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field rx_noise_corr_y from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Noise Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_corr_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field rx_saturation_flag_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Saturation flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_saturation_flag_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  56);
}

/**
 * @brief Get field rx_signal_det_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Signal Detection flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  57);
}

/**
 * @brief Get field rx_signal_raw_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Signal Raw Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_raw_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field rx_signal_corr_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Signal Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_corr_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field rx_noise_raw_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Noise Raw Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_raw_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field rx_noise_corr_z from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Noise Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_noise_corr_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
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
    ivaq_rx_signal_master->rx_time_signal_ms = mavlink_msg_ivaq_rx_signal_master_get_rx_time_signal_ms(msg);
    ivaq_rx_signal_master->rx_signal_raw_x = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_raw_x(msg);
    ivaq_rx_signal_master->rx_signal_corr_x = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_corr_x(msg);
    ivaq_rx_signal_master->rx_noise_raw_x = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_raw_x(msg);
    ivaq_rx_signal_master->rx_noise_corr_x = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_corr_x(msg);
    ivaq_rx_signal_master->rx_signal_raw_y = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_raw_y(msg);
    ivaq_rx_signal_master->rx_signal_corr_y = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_corr_y(msg);
    ivaq_rx_signal_master->rx_noise_raw_y = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_raw_y(msg);
    ivaq_rx_signal_master->rx_noise_corr_y = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_corr_y(msg);
    ivaq_rx_signal_master->rx_signal_raw_z = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_raw_z(msg);
    ivaq_rx_signal_master->rx_signal_corr_z = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_corr_z(msg);
    ivaq_rx_signal_master->rx_noise_raw_z = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_raw_z(msg);
    ivaq_rx_signal_master->rx_noise_corr_z = mavlink_msg_ivaq_rx_signal_master_get_rx_noise_corr_z(msg);
    ivaq_rx_signal_master->rx_saturation_flag_x = mavlink_msg_ivaq_rx_signal_master_get_rx_saturation_flag_x(msg);
    ivaq_rx_signal_master->rx_signal_det_x = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_x(msg);
    ivaq_rx_signal_master->rx_saturation_flag_y = mavlink_msg_ivaq_rx_signal_master_get_rx_saturation_flag_y(msg);
    ivaq_rx_signal_master->rx_signal_det_y = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_y(msg);
    ivaq_rx_signal_master->rx_saturation_flag_z = mavlink_msg_ivaq_rx_signal_master_get_rx_saturation_flag_z(msg);
    ivaq_rx_signal_master->rx_signal_det_z = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_det_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN? msg->len : MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN;
        memset(ivaq_rx_signal_master, 0, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
    memcpy(ivaq_rx_signal_master, _MAV_PAYLOAD(msg), len);
#endif
}
