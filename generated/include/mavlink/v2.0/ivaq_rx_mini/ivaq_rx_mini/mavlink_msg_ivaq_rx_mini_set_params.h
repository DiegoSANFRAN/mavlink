#pragma once
// MESSAGE IVAQ_RX_MINI_SET_PARAMS PACKING

#define MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS 61001


typedef struct __mavlink_ivaq_rx_mini_set_params_t {
 uint8_t rx_set_update; /*<  Request receiver firmware update mode.*/
 uint8_t rx_set_reset; /*<  Request receiver reset.*/
 uint8_t rx_set_capture; /*<  Requested acquisition/transfer action.*/
} mavlink_ivaq_rx_mini_set_params_t;

#define MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN 3
#define MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_MIN_LEN 3
#define MAVLINK_MSG_ID_61001_LEN 3
#define MAVLINK_MSG_ID_61001_MIN_LEN 3

#define MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_CRC 24
#define MAVLINK_MSG_ID_61001_CRC 24



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_MINI_SET_PARAMS { \
    61001, \
    "IVAQ_RX_MINI_SET_PARAMS", \
    3, \
    {  { "rx_set_update", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ivaq_rx_mini_set_params_t, rx_set_update) }, \
         { "rx_set_reset", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ivaq_rx_mini_set_params_t, rx_set_reset) }, \
         { "rx_set_capture", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ivaq_rx_mini_set_params_t, rx_set_capture) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_MINI_SET_PARAMS { \
    "IVAQ_RX_MINI_SET_PARAMS", \
    3, \
    {  { "rx_set_update", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ivaq_rx_mini_set_params_t, rx_set_update) }, \
         { "rx_set_reset", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ivaq_rx_mini_set_params_t, rx_set_reset) }, \
         { "rx_set_capture", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ivaq_rx_mini_set_params_t, rx_set_capture) }, \
         } \
}
#endif

/**
 * @brief Pack a ivaq_rx_mini_set_params message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_set_update  Request receiver firmware update mode.
 * @param rx_set_reset  Request receiver reset.
 * @param rx_set_capture  Requested acquisition/transfer action.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_set_params_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t rx_set_update, uint8_t rx_set_reset, uint8_t rx_set_capture)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN];
    _mav_put_uint8_t(buf, 0, rx_set_update);
    _mav_put_uint8_t(buf, 1, rx_set_reset);
    _mav_put_uint8_t(buf, 2, rx_set_capture);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN);
#else
    mavlink_ivaq_rx_mini_set_params_t packet;
    packet.rx_set_update = rx_set_update;
    packet.rx_set_reset = rx_set_reset;
    packet.rx_set_capture = rx_set_capture;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_CRC);
}

/**
 * @brief Pack a ivaq_rx_mini_set_params message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_set_update  Request receiver firmware update mode.
 * @param rx_set_reset  Request receiver reset.
 * @param rx_set_capture  Requested acquisition/transfer action.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_set_params_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t rx_set_update, uint8_t rx_set_reset, uint8_t rx_set_capture)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN];
    _mav_put_uint8_t(buf, 0, rx_set_update);
    _mav_put_uint8_t(buf, 1, rx_set_reset);
    _mav_put_uint8_t(buf, 2, rx_set_capture);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN);
#else
    mavlink_ivaq_rx_mini_set_params_t packet;
    packet.rx_set_update = rx_set_update;
    packet.rx_set_reset = rx_set_reset;
    packet.rx_set_capture = rx_set_capture;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN);
#endif
}

/**
 * @brief Pack a ivaq_rx_mini_set_params message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rx_set_update  Request receiver firmware update mode.
 * @param rx_set_reset  Request receiver reset.
 * @param rx_set_capture  Requested acquisition/transfer action.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_set_params_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t rx_set_update,uint8_t rx_set_reset,uint8_t rx_set_capture)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN];
    _mav_put_uint8_t(buf, 0, rx_set_update);
    _mav_put_uint8_t(buf, 1, rx_set_reset);
    _mav_put_uint8_t(buf, 2, rx_set_capture);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN);
#else
    mavlink_ivaq_rx_mini_set_params_t packet;
    packet.rx_set_update = rx_set_update;
    packet.rx_set_reset = rx_set_reset;
    packet.rx_set_capture = rx_set_capture;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_CRC);
}

/**
 * @brief Encode a ivaq_rx_mini_set_params struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_mini_set_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_set_params_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ivaq_rx_mini_set_params_t* ivaq_rx_mini_set_params)
{
    return mavlink_msg_ivaq_rx_mini_set_params_pack(system_id, component_id, msg, ivaq_rx_mini_set_params->rx_set_update, ivaq_rx_mini_set_params->rx_set_reset, ivaq_rx_mini_set_params->rx_set_capture);
}

/**
 * @brief Encode a ivaq_rx_mini_set_params struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_mini_set_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_set_params_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ivaq_rx_mini_set_params_t* ivaq_rx_mini_set_params)
{
    return mavlink_msg_ivaq_rx_mini_set_params_pack_chan(system_id, component_id, chan, msg, ivaq_rx_mini_set_params->rx_set_update, ivaq_rx_mini_set_params->rx_set_reset, ivaq_rx_mini_set_params->rx_set_capture);
}

/**
 * @brief Encode a ivaq_rx_mini_set_params struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_mini_set_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_set_params_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ivaq_rx_mini_set_params_t* ivaq_rx_mini_set_params)
{
    return mavlink_msg_ivaq_rx_mini_set_params_pack_status(system_id, component_id, _status, msg,  ivaq_rx_mini_set_params->rx_set_update, ivaq_rx_mini_set_params->rx_set_reset, ivaq_rx_mini_set_params->rx_set_capture);
}

/**
 * @brief Send a ivaq_rx_mini_set_params message
 * @param chan MAVLink channel to send the message
 *
 * @param rx_set_update  Request receiver firmware update mode.
 * @param rx_set_reset  Request receiver reset.
 * @param rx_set_capture  Requested acquisition/transfer action.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ivaq_rx_mini_set_params_send(mavlink_channel_t chan, uint8_t rx_set_update, uint8_t rx_set_reset, uint8_t rx_set_capture)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN];
    _mav_put_uint8_t(buf, 0, rx_set_update);
    _mav_put_uint8_t(buf, 1, rx_set_reset);
    _mav_put_uint8_t(buf, 2, rx_set_capture);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS, buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_CRC);
#else
    mavlink_ivaq_rx_mini_set_params_t packet;
    packet.rx_set_update = rx_set_update;
    packet.rx_set_reset = rx_set_reset;
    packet.rx_set_capture = rx_set_capture;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS, (const char *)&packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_CRC);
#endif
}

/**
 * @brief Send a ivaq_rx_mini_set_params message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ivaq_rx_mini_set_params_send_struct(mavlink_channel_t chan, const mavlink_ivaq_rx_mini_set_params_t* ivaq_rx_mini_set_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ivaq_rx_mini_set_params_send(chan, ivaq_rx_mini_set_params->rx_set_update, ivaq_rx_mini_set_params->rx_set_reset, ivaq_rx_mini_set_params->rx_set_capture);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS, (const char *)ivaq_rx_mini_set_params, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_CRC);
#endif
}

#if MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ivaq_rx_mini_set_params_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t rx_set_update, uint8_t rx_set_reset, uint8_t rx_set_capture)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, rx_set_update);
    _mav_put_uint8_t(buf, 1, rx_set_reset);
    _mav_put_uint8_t(buf, 2, rx_set_capture);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS, buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_CRC);
#else
    mavlink_ivaq_rx_mini_set_params_t *packet = (mavlink_ivaq_rx_mini_set_params_t *)msgbuf;
    packet->rx_set_update = rx_set_update;
    packet->rx_set_reset = rx_set_reset;
    packet->rx_set_capture = rx_set_capture;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS, (const char *)packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_CRC);
#endif
}
#endif

#endif

// MESSAGE IVAQ_RX_MINI_SET_PARAMS UNPACKING


/**
 * @brief Get field rx_set_update from ivaq_rx_mini_set_params message
 *
 * @return  Request receiver firmware update mode.
 */
static inline uint8_t mavlink_msg_ivaq_rx_mini_set_params_get_rx_set_update(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field rx_set_reset from ivaq_rx_mini_set_params message
 *
 * @return  Request receiver reset.
 */
static inline uint8_t mavlink_msg_ivaq_rx_mini_set_params_get_rx_set_reset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field rx_set_capture from ivaq_rx_mini_set_params message
 *
 * @return  Requested acquisition/transfer action.
 */
static inline uint8_t mavlink_msg_ivaq_rx_mini_set_params_get_rx_set_capture(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a ivaq_rx_mini_set_params message into a struct
 *
 * @param msg The message to decode
 * @param ivaq_rx_mini_set_params C-struct to decode the message contents into
 */
static inline void mavlink_msg_ivaq_rx_mini_set_params_decode(const mavlink_message_t* msg, mavlink_ivaq_rx_mini_set_params_t* ivaq_rx_mini_set_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ivaq_rx_mini_set_params->rx_set_update = mavlink_msg_ivaq_rx_mini_set_params_get_rx_set_update(msg);
    ivaq_rx_mini_set_params->rx_set_reset = mavlink_msg_ivaq_rx_mini_set_params_get_rx_set_reset(msg);
    ivaq_rx_mini_set_params->rx_set_capture = mavlink_msg_ivaq_rx_mini_set_params_get_rx_set_capture(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN? msg->len : MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN;
        memset(ivaq_rx_mini_set_params, 0, MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_LEN);
    memcpy(ivaq_rx_mini_set_params, _MAV_PAYLOAD(msg), len);
#endif
}
