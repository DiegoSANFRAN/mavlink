#pragma once
// MESSAGE IVAQ_RX_SIGNAL PACKING

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL 201


typedef struct __mavlink_ivaq_rx_signal_t {
 uint32_t rx_time_signal_ms; /*<  Ivaq Rx Signal Time tag*/
 float rx_signal_max; /*<  Ivaq Rx Signal value*/
 uint8_t rx_signal_det; /*<  Ivaq Rx Signal Detection flag*/
} mavlink_ivaq_rx_signal_t;

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN 9
#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MIN_LEN 9
#define MAVLINK_MSG_ID_201_LEN 9
#define MAVLINK_MSG_ID_201_MIN_LEN 9

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_CRC 209
#define MAVLINK_MSG_ID_201_CRC 209



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL { \
    201, \
    "IVAQ_RX_SIGNAL", \
    3, \
    {  { "rx_time_signal_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ivaq_rx_signal_t, rx_time_signal_ms) }, \
         { "rx_signal_det", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_ivaq_rx_signal_t, rx_signal_det) }, \
         { "rx_signal_max", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ivaq_rx_signal_t, rx_signal_max) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL { \
    "IVAQ_RX_SIGNAL", \
    3, \
    {  { "rx_time_signal_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ivaq_rx_signal_t, rx_time_signal_ms) }, \
         { "rx_signal_det", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_ivaq_rx_signal_t, rx_signal_det) }, \
         { "rx_signal_max", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ivaq_rx_signal_t, rx_signal_max) }, \
         } \
}
#endif

/**
 * @brief Pack a ivaq_rx_signal message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_time_signal_ms  Ivaq Rx Signal Time tag
 * @param rx_signal_det  Ivaq Rx Signal Detection flag
 * @param rx_signal_max  Ivaq Rx Signal value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t rx_time_signal_ms, uint8_t rx_signal_det, float rx_signal_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN];
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_max);
    _mav_put_uint8_t(buf, 8, rx_signal_det);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN);
#else
    mavlink_ivaq_rx_signal_t packet;
    packet.rx_time_signal_ms = rx_time_signal_ms;
    packet.rx_signal_max = rx_signal_max;
    packet.rx_signal_det = rx_signal_det;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SIGNAL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_CRC);
}

/**
 * @brief Pack a ivaq_rx_signal message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_time_signal_ms  Ivaq Rx Signal Time tag
 * @param rx_signal_det  Ivaq Rx Signal Detection flag
 * @param rx_signal_max  Ivaq Rx Signal value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint32_t rx_time_signal_ms, uint8_t rx_signal_det, float rx_signal_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN];
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_max);
    _mav_put_uint8_t(buf, 8, rx_signal_det);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN);
#else
    mavlink_ivaq_rx_signal_t packet;
    packet.rx_time_signal_ms = rx_time_signal_ms;
    packet.rx_signal_max = rx_signal_max;
    packet.rx_signal_det = rx_signal_det;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SIGNAL;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN);
#endif
}

/**
 * @brief Pack a ivaq_rx_signal message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rx_time_signal_ms  Ivaq Rx Signal Time tag
 * @param rx_signal_det  Ivaq Rx Signal Detection flag
 * @param rx_signal_max  Ivaq Rx Signal value
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t rx_time_signal_ms,uint8_t rx_signal_det,float rx_signal_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN];
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_max);
    _mav_put_uint8_t(buf, 8, rx_signal_det);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN);
#else
    mavlink_ivaq_rx_signal_t packet;
    packet.rx_time_signal_ms = rx_time_signal_ms;
    packet.rx_signal_max = rx_signal_max;
    packet.rx_signal_det = rx_signal_det;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SIGNAL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_CRC);
}

/**
 * @brief Encode a ivaq_rx_signal struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_signal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ivaq_rx_signal_t* ivaq_rx_signal)
{
    return mavlink_msg_ivaq_rx_signal_pack(system_id, component_id, msg, ivaq_rx_signal->rx_time_signal_ms, ivaq_rx_signal->rx_signal_det, ivaq_rx_signal->rx_signal_max);
}

/**
 * @brief Encode a ivaq_rx_signal struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_signal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ivaq_rx_signal_t* ivaq_rx_signal)
{
    return mavlink_msg_ivaq_rx_signal_pack_chan(system_id, component_id, chan, msg, ivaq_rx_signal->rx_time_signal_ms, ivaq_rx_signal->rx_signal_det, ivaq_rx_signal->rx_signal_max);
}

/**
 * @brief Encode a ivaq_rx_signal struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_signal C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ivaq_rx_signal_t* ivaq_rx_signal)
{
    return mavlink_msg_ivaq_rx_signal_pack_status(system_id, component_id, _status, msg,  ivaq_rx_signal->rx_time_signal_ms, ivaq_rx_signal->rx_signal_det, ivaq_rx_signal->rx_signal_max);
}

/**
 * @brief Send a ivaq_rx_signal message
 * @param chan MAVLink channel to send the message
 *
 * @param rx_time_signal_ms  Ivaq Rx Signal Time tag
 * @param rx_signal_det  Ivaq Rx Signal Detection flag
 * @param rx_signal_max  Ivaq Rx Signal value
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ivaq_rx_signal_send(mavlink_channel_t chan, uint32_t rx_time_signal_ms, uint8_t rx_signal_det, float rx_signal_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN];
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_max);
    _mav_put_uint8_t(buf, 8, rx_signal_det);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL, buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_CRC);
#else
    mavlink_ivaq_rx_signal_t packet;
    packet.rx_time_signal_ms = rx_time_signal_ms;
    packet.rx_signal_max = rx_signal_max;
    packet.rx_signal_det = rx_signal_det;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL, (const char *)&packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_CRC);
#endif
}

/**
 * @brief Send a ivaq_rx_signal message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ivaq_rx_signal_send_struct(mavlink_channel_t chan, const mavlink_ivaq_rx_signal_t* ivaq_rx_signal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ivaq_rx_signal_send(chan, ivaq_rx_signal->rx_time_signal_ms, ivaq_rx_signal->rx_signal_det, ivaq_rx_signal->rx_signal_max);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL, (const char *)ivaq_rx_signal, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_CRC);
#endif
}

#if MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ivaq_rx_signal_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t rx_time_signal_ms, uint8_t rx_signal_det, float rx_signal_max)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, rx_time_signal_ms);
    _mav_put_float(buf, 4, rx_signal_max);
    _mav_put_uint8_t(buf, 8, rx_signal_det);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL, buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_CRC);
#else
    mavlink_ivaq_rx_signal_t *packet = (mavlink_ivaq_rx_signal_t *)msgbuf;
    packet->rx_time_signal_ms = rx_time_signal_ms;
    packet->rx_signal_max = rx_signal_max;
    packet->rx_signal_det = rx_signal_det;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL, (const char *)packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_CRC);
#endif
}
#endif

#endif

// MESSAGE IVAQ_RX_SIGNAL UNPACKING


/**
 * @brief Get field rx_time_signal_ms from ivaq_rx_signal message
 *
 * @return  Ivaq Rx Signal Time tag
 */
static inline uint32_t mavlink_msg_ivaq_rx_signal_get_rx_time_signal_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field rx_signal_det from ivaq_rx_signal message
 *
 * @return  Ivaq Rx Signal Detection flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_get_rx_signal_det(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field rx_signal_max from ivaq_rx_signal message
 *
 * @return  Ivaq Rx Signal value
 */
static inline float mavlink_msg_ivaq_rx_signal_get_rx_signal_max(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Decode a ivaq_rx_signal message into a struct
 *
 * @param msg The message to decode
 * @param ivaq_rx_signal C-struct to decode the message contents into
 */
static inline void mavlink_msg_ivaq_rx_signal_decode(const mavlink_message_t* msg, mavlink_ivaq_rx_signal_t* ivaq_rx_signal)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ivaq_rx_signal->rx_time_signal_ms = mavlink_msg_ivaq_rx_signal_get_rx_time_signal_ms(msg);
    ivaq_rx_signal->rx_signal_max = mavlink_msg_ivaq_rx_signal_get_rx_signal_max(msg);
    ivaq_rx_signal->rx_signal_det = mavlink_msg_ivaq_rx_signal_get_rx_signal_det(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN? msg->len : MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN;
        memset(ivaq_rx_signal, 0, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_LEN);
    memcpy(ivaq_rx_signal, _MAV_PAYLOAD(msg), len);
#endif
}
