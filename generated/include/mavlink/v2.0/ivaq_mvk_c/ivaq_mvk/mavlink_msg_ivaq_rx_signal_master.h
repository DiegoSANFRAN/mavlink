#pragma once
// MESSAGE IVAQ_RX_SIGNAL_MASTER PACKING

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER 202


typedef struct __mavlink_ivaq_rx_signal_master_t {
 uint32_t rx_time_signal_ms; /*<  Ivaq Rx Signal Time tag*/
 float rx_signal_x_raw; /*<  Ivaq Rx X-ant Signal Raw Demod value*/
 float rx_signal_x_corr; /*<  Ivaq Rx X-ant Signal Corr Demod value*/
 float rx_signal_y_raw; /*<  Ivaq Rx Y-ant Signal Raw Demod value*/
 float rx_signal_y_corr; /*<  Ivaq Rx Y-ant Signal Corr Demod value*/
 float rx_signal_z_raw; /*<  Ivaq Rx Z-ant Signal Raw Demod value*/
 float rx_signal_z_corr; /*<  Ivaq Rx Z-ant Signal Corr Demod value*/
 uint8_t rx_signal_x_det; /*<  Ivaq Rx X-ant Signal Detection flag*/
 uint8_t rx_signal_y_det; /*<  Ivaq Rx Y-ant Signal Detection flag*/
 uint8_t rx_signal_z_det; /*<  Ivaq Rx Z-ant Signal Detection flag*/
} mavlink_ivaq_rx_signal_master_t;

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN 31
#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN 31
#define MAVLINK_MSG_ID_202_LEN 31
#define MAVLINK_MSG_ID_202_MIN_LEN 31

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC 109
#define MAVLINK_MSG_ID_202_CRC 109



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL_MASTER { \
    202, \
    "IVAQ_RX_SIGNAL_MASTER", \
    10, \
    {  { "rx_time_signal_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ivaq_rx_signal_master_t, rx_time_signal_ms) }, \
         { "rx_signal_x_det", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_x_det) }, \
         { "rx_signal_x_raw", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_x_raw) }, \
         { "rx_signal_x_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_x_corr) }, \
         { "rx_signal_y_det", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_y_det) }, \
         { "rx_signal_y_raw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_y_raw) }, \
         { "rx_signal_y_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_y_corr) }, \
         { "rx_signal_z_det", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_z_det) }, \
         { "rx_signal_z_raw", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_z_raw) }, \
         { "rx_signal_z_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_z_corr) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL_MASTER { \
    "IVAQ_RX_SIGNAL_MASTER", \
    10, \
    {  { "rx_time_signal_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ivaq_rx_signal_master_t, rx_time_signal_ms) }, \
         { "rx_signal_x_det", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_x_det) }, \
         { "rx_signal_x_raw", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_x_raw) }, \
         { "rx_signal_x_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_x_corr) }, \
         { "rx_signal_y_det", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_y_det) }, \
         { "rx_signal_y_raw", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_y_raw) }, \
         { "rx_signal_y_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_y_corr) }, \
         { "rx_signal_z_det", NULL, MAVLINK_TYPE_UINT8_T, 0, 30, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_z_det) }, \
         { "rx_signal_z_raw", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_z_raw) }, \
         { "rx_signal_z_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ivaq_rx_signal_master_t, rx_signal_z_corr) }, \
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
 * @param rx_signal_x_det  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_x_raw  Ivaq Rx X-ant Signal Raw Demod value
 * @param rx_signal_x_corr  Ivaq Rx X-ant Signal Corr Demod value
 * @param rx_signal_y_det  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_y_raw  Ivaq Rx Y-ant Signal Raw Demod value
 * @param rx_signal_y_corr  Ivaq Rx Y-ant Signal Corr Demod value
 * @param rx_signal_z_det  Ivaq Rx Z-ant Signal Detection flag
 * @param rx_signal_z_raw  Ivaq Rx Z-ant Signal Raw Demod value
 * @param rx_signal_z_corr  Ivaq Rx Z-ant Signal Corr Demod value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_master_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t rx_time_signal_ms, uint8_t rx_signal_x_det, float rx_signal_x_raw, float rx_signal_x_corr, uint8_t rx_signal_y_det, float rx_signal_y_raw, float rx_signal_y_corr, uint8_t rx_signal_z_det, float rx_signal_z_raw, float rx_signal_z_corr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN];
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_x_raw);
    _mav_put_float(buf, 8, rx_signal_x_corr);
    _mav_put_float(buf, 12, rx_signal_y_raw);
    _mav_put_float(buf, 16, rx_signal_y_corr);
    _mav_put_float(buf, 20, rx_signal_z_raw);
    _mav_put_float(buf, 24, rx_signal_z_corr);
    _mav_put_uint8_t(buf, 28, rx_signal_x_det);
    _mav_put_uint8_t(buf, 29, rx_signal_y_det);
    _mav_put_uint8_t(buf, 30, rx_signal_z_det);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
#else
    mavlink_ivaq_rx_signal_master_t packet;
    packet.rx_time_signal_ms = rx_time_signal_ms;
    packet.rx_signal_x_raw = rx_signal_x_raw;
    packet.rx_signal_x_corr = rx_signal_x_corr;
    packet.rx_signal_y_raw = rx_signal_y_raw;
    packet.rx_signal_y_corr = rx_signal_y_corr;
    packet.rx_signal_z_raw = rx_signal_z_raw;
    packet.rx_signal_z_corr = rx_signal_z_corr;
    packet.rx_signal_x_det = rx_signal_x_det;
    packet.rx_signal_y_det = rx_signal_y_det;
    packet.rx_signal_z_det = rx_signal_z_det;

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
 * @param rx_signal_x_det  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_x_raw  Ivaq Rx X-ant Signal Raw Demod value
 * @param rx_signal_x_corr  Ivaq Rx X-ant Signal Corr Demod value
 * @param rx_signal_y_det  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_y_raw  Ivaq Rx Y-ant Signal Raw Demod value
 * @param rx_signal_y_corr  Ivaq Rx Y-ant Signal Corr Demod value
 * @param rx_signal_z_det  Ivaq Rx Z-ant Signal Detection flag
 * @param rx_signal_z_raw  Ivaq Rx Z-ant Signal Raw Demod value
 * @param rx_signal_z_corr  Ivaq Rx Z-ant Signal Corr Demod value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_master_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t rx_time_signal_ms, uint8_t rx_signal_x_det, float rx_signal_x_raw, float rx_signal_x_corr, uint8_t rx_signal_y_det, float rx_signal_y_raw, float rx_signal_y_corr, uint8_t rx_signal_z_det, float rx_signal_z_raw, float rx_signal_z_corr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN];
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_x_raw);
    _mav_put_float(buf, 8, rx_signal_x_corr);
    _mav_put_float(buf, 12, rx_signal_y_raw);
    _mav_put_float(buf, 16, rx_signal_y_corr);
    _mav_put_float(buf, 20, rx_signal_z_raw);
    _mav_put_float(buf, 24, rx_signal_z_corr);
    _mav_put_uint8_t(buf, 28, rx_signal_x_det);
    _mav_put_uint8_t(buf, 29, rx_signal_y_det);
    _mav_put_uint8_t(buf, 30, rx_signal_z_det);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
#else
    mavlink_ivaq_rx_signal_master_t packet;
    packet.rx_time_signal_ms = rx_time_signal_ms;
    packet.rx_signal_x_raw = rx_signal_x_raw;
    packet.rx_signal_x_corr = rx_signal_x_corr;
    packet.rx_signal_y_raw = rx_signal_y_raw;
    packet.rx_signal_y_corr = rx_signal_y_corr;
    packet.rx_signal_z_raw = rx_signal_z_raw;
    packet.rx_signal_z_corr = rx_signal_z_corr;
    packet.rx_signal_x_det = rx_signal_x_det;
    packet.rx_signal_y_det = rx_signal_y_det;
    packet.rx_signal_z_det = rx_signal_z_det;

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
 * @param rx_signal_x_det  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_x_raw  Ivaq Rx X-ant Signal Raw Demod value
 * @param rx_signal_x_corr  Ivaq Rx X-ant Signal Corr Demod value
 * @param rx_signal_y_det  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_y_raw  Ivaq Rx Y-ant Signal Raw Demod value
 * @param rx_signal_y_corr  Ivaq Rx Y-ant Signal Corr Demod value
 * @param rx_signal_z_det  Ivaq Rx Z-ant Signal Detection flag
 * @param rx_signal_z_raw  Ivaq Rx Z-ant Signal Raw Demod value
 * @param rx_signal_z_corr  Ivaq Rx Z-ant Signal Corr Demod value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_master_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t rx_time_signal_ms,uint8_t rx_signal_x_det,float rx_signal_x_raw,float rx_signal_x_corr,uint8_t rx_signal_y_det,float rx_signal_y_raw,float rx_signal_y_corr,uint8_t rx_signal_z_det,float rx_signal_z_raw,float rx_signal_z_corr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN];
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_x_raw);
    _mav_put_float(buf, 8, rx_signal_x_corr);
    _mav_put_float(buf, 12, rx_signal_y_raw);
    _mav_put_float(buf, 16, rx_signal_y_corr);
    _mav_put_float(buf, 20, rx_signal_z_raw);
    _mav_put_float(buf, 24, rx_signal_z_corr);
    _mav_put_uint8_t(buf, 28, rx_signal_x_det);
    _mav_put_uint8_t(buf, 29, rx_signal_y_det);
    _mav_put_uint8_t(buf, 30, rx_signal_z_det);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
#else
    mavlink_ivaq_rx_signal_master_t packet;
    packet.rx_time_signal_ms = rx_time_signal_ms;
    packet.rx_signal_x_raw = rx_signal_x_raw;
    packet.rx_signal_x_corr = rx_signal_x_corr;
    packet.rx_signal_y_raw = rx_signal_y_raw;
    packet.rx_signal_y_corr = rx_signal_y_corr;
    packet.rx_signal_z_raw = rx_signal_z_raw;
    packet.rx_signal_z_corr = rx_signal_z_corr;
    packet.rx_signal_x_det = rx_signal_x_det;
    packet.rx_signal_y_det = rx_signal_y_det;
    packet.rx_signal_z_det = rx_signal_z_det;

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
    return mavlink_msg_ivaq_rx_signal_master_pack(system_id, component_id, msg, ivaq_rx_signal_master->rx_time_signal_ms, ivaq_rx_signal_master->rx_signal_x_det, ivaq_rx_signal_master->rx_signal_x_raw, ivaq_rx_signal_master->rx_signal_x_corr, ivaq_rx_signal_master->rx_signal_y_det, ivaq_rx_signal_master->rx_signal_y_raw, ivaq_rx_signal_master->rx_signal_y_corr, ivaq_rx_signal_master->rx_signal_z_det, ivaq_rx_signal_master->rx_signal_z_raw, ivaq_rx_signal_master->rx_signal_z_corr);
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
    return mavlink_msg_ivaq_rx_signal_master_pack_chan(system_id, component_id, chan, msg, ivaq_rx_signal_master->rx_time_signal_ms, ivaq_rx_signal_master->rx_signal_x_det, ivaq_rx_signal_master->rx_signal_x_raw, ivaq_rx_signal_master->rx_signal_x_corr, ivaq_rx_signal_master->rx_signal_y_det, ivaq_rx_signal_master->rx_signal_y_raw, ivaq_rx_signal_master->rx_signal_y_corr, ivaq_rx_signal_master->rx_signal_z_det, ivaq_rx_signal_master->rx_signal_z_raw, ivaq_rx_signal_master->rx_signal_z_corr);
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
    return mavlink_msg_ivaq_rx_signal_master_pack_status(system_id, component_id, _status, msg,  ivaq_rx_signal_master->rx_time_signal_ms, ivaq_rx_signal_master->rx_signal_x_det, ivaq_rx_signal_master->rx_signal_x_raw, ivaq_rx_signal_master->rx_signal_x_corr, ivaq_rx_signal_master->rx_signal_y_det, ivaq_rx_signal_master->rx_signal_y_raw, ivaq_rx_signal_master->rx_signal_y_corr, ivaq_rx_signal_master->rx_signal_z_det, ivaq_rx_signal_master->rx_signal_z_raw, ivaq_rx_signal_master->rx_signal_z_corr);
}

/**
 * @brief Send a ivaq_rx_signal_master message
 * @param chan MAVLink channel to send the message
 *
 * @param rx_time_signal_ms  Ivaq Rx Signal Time tag
 * @param rx_signal_x_det  Ivaq Rx X-ant Signal Detection flag
 * @param rx_signal_x_raw  Ivaq Rx X-ant Signal Raw Demod value
 * @param rx_signal_x_corr  Ivaq Rx X-ant Signal Corr Demod value
 * @param rx_signal_y_det  Ivaq Rx Y-ant Signal Detection flag
 * @param rx_signal_y_raw  Ivaq Rx Y-ant Signal Raw Demod value
 * @param rx_signal_y_corr  Ivaq Rx Y-ant Signal Corr Demod value
 * @param rx_signal_z_det  Ivaq Rx Z-ant Signal Detection flag
 * @param rx_signal_z_raw  Ivaq Rx Z-ant Signal Raw Demod value
 * @param rx_signal_z_corr  Ivaq Rx Z-ant Signal Corr Demod value
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ivaq_rx_signal_master_send(mavlink_channel_t chan, uint32_t rx_time_signal_ms, uint8_t rx_signal_x_det, float rx_signal_x_raw, float rx_signal_x_corr, uint8_t rx_signal_y_det, float rx_signal_y_raw, float rx_signal_y_corr, uint8_t rx_signal_z_det, float rx_signal_z_raw, float rx_signal_z_corr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN];
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_x_raw);
    _mav_put_float(buf, 8, rx_signal_x_corr);
    _mav_put_float(buf, 12, rx_signal_y_raw);
    _mav_put_float(buf, 16, rx_signal_y_corr);
    _mav_put_float(buf, 20, rx_signal_z_raw);
    _mav_put_float(buf, 24, rx_signal_z_corr);
    _mav_put_uint8_t(buf, 28, rx_signal_x_det);
    _mav_put_uint8_t(buf, 29, rx_signal_y_det);
    _mav_put_uint8_t(buf, 30, rx_signal_z_det);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER, buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC);
#else
    mavlink_ivaq_rx_signal_master_t packet;
    packet.rx_time_signal_ms = rx_time_signal_ms;
    packet.rx_signal_x_raw = rx_signal_x_raw;
    packet.rx_signal_x_corr = rx_signal_x_corr;
    packet.rx_signal_y_raw = rx_signal_y_raw;
    packet.rx_signal_y_corr = rx_signal_y_corr;
    packet.rx_signal_z_raw = rx_signal_z_raw;
    packet.rx_signal_z_corr = rx_signal_z_corr;
    packet.rx_signal_x_det = rx_signal_x_det;
    packet.rx_signal_y_det = rx_signal_y_det;
    packet.rx_signal_z_det = rx_signal_z_det;

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
    mavlink_msg_ivaq_rx_signal_master_send(chan, ivaq_rx_signal_master->rx_time_signal_ms, ivaq_rx_signal_master->rx_signal_x_det, ivaq_rx_signal_master->rx_signal_x_raw, ivaq_rx_signal_master->rx_signal_x_corr, ivaq_rx_signal_master->rx_signal_y_det, ivaq_rx_signal_master->rx_signal_y_raw, ivaq_rx_signal_master->rx_signal_y_corr, ivaq_rx_signal_master->rx_signal_z_det, ivaq_rx_signal_master->rx_signal_z_raw, ivaq_rx_signal_master->rx_signal_z_corr);
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
static inline void mavlink_msg_ivaq_rx_signal_master_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t rx_time_signal_ms, uint8_t rx_signal_x_det, float rx_signal_x_raw, float rx_signal_x_corr, uint8_t rx_signal_y_det, float rx_signal_y_raw, float rx_signal_y_corr, uint8_t rx_signal_z_det, float rx_signal_z_raw, float rx_signal_z_corr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_x_raw);
    _mav_put_float(buf, 8, rx_signal_x_corr);
    _mav_put_float(buf, 12, rx_signal_y_raw);
    _mav_put_float(buf, 16, rx_signal_y_corr);
    _mav_put_float(buf, 20, rx_signal_z_raw);
    _mav_put_float(buf, 24, rx_signal_z_corr);
    _mav_put_uint8_t(buf, 28, rx_signal_x_det);
    _mav_put_uint8_t(buf, 29, rx_signal_y_det);
    _mav_put_uint8_t(buf, 30, rx_signal_z_det);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER, buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_CRC);
#else
    mavlink_ivaq_rx_signal_master_t *packet = (mavlink_ivaq_rx_signal_master_t *)msgbuf;
    packet->rx_time_signal_ms = rx_time_signal_ms;
    packet->rx_signal_x_raw = rx_signal_x_raw;
    packet->rx_signal_x_corr = rx_signal_x_corr;
    packet->rx_signal_y_raw = rx_signal_y_raw;
    packet->rx_signal_y_corr = rx_signal_y_corr;
    packet->rx_signal_z_raw = rx_signal_z_raw;
    packet->rx_signal_z_corr = rx_signal_z_corr;
    packet->rx_signal_x_det = rx_signal_x_det;
    packet->rx_signal_y_det = rx_signal_y_det;
    packet->rx_signal_z_det = rx_signal_z_det;

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
 * @brief Get field rx_signal_x_det from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Signal Detection flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_x_det(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field rx_signal_x_raw from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Signal Raw Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_x_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field rx_signal_x_corr from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx X-ant Signal Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_x_corr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field rx_signal_y_det from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Signal Detection flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_y_det(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Get field rx_signal_y_raw from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Signal Raw Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_y_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field rx_signal_y_corr from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Y-ant Signal Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_y_corr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field rx_signal_z_det from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Signal Detection flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_master_get_rx_signal_z_det(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  30);
}

/**
 * @brief Get field rx_signal_z_raw from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Signal Raw Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_z_raw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field rx_signal_z_corr from ivaq_rx_signal_master message
 *
 * @return  Ivaq Rx Z-ant Signal Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_master_get_rx_signal_z_corr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
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
    ivaq_rx_signal_master->rx_signal_x_raw = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_x_raw(msg);
    ivaq_rx_signal_master->rx_signal_x_corr = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_x_corr(msg);
    ivaq_rx_signal_master->rx_signal_y_raw = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_y_raw(msg);
    ivaq_rx_signal_master->rx_signal_y_corr = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_y_corr(msg);
    ivaq_rx_signal_master->rx_signal_z_raw = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_z_raw(msg);
    ivaq_rx_signal_master->rx_signal_z_corr = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_z_corr(msg);
    ivaq_rx_signal_master->rx_signal_x_det = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_x_det(msg);
    ivaq_rx_signal_master->rx_signal_y_det = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_y_det(msg);
    ivaq_rx_signal_master->rx_signal_z_det = mavlink_msg_ivaq_rx_signal_master_get_rx_signal_z_det(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN? msg->len : MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN;
        memset(ivaq_rx_signal_master, 0, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_LEN);
    memcpy(ivaq_rx_signal_master, _MAV_PAYLOAD(msg), len);
#endif
}
