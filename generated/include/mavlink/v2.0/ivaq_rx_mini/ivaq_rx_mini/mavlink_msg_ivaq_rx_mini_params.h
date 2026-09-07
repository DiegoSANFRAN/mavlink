#pragma once
// MESSAGE IVAQ_RX_MINI_PARAMS PACKING

#define MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS 61000


typedef struct __mavlink_ivaq_rx_mini_params_t {
 uint8_t rx_status; /*<  Ivaq Rx mini Status*/
 uint8_t rx_card_det; /*<  Ivaq Rx mini SD Card State*/
 uint8_t rx_capture_state; /*<  Current acquisition/transfer state.*/
} mavlink_ivaq_rx_mini_params_t;

#define MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN 3
#define MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_MIN_LEN 3
#define MAVLINK_MSG_ID_61000_LEN 3
#define MAVLINK_MSG_ID_61000_MIN_LEN 3

#define MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_CRC 107
#define MAVLINK_MSG_ID_61000_CRC 107



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_MINI_PARAMS { \
    61000, \
    "IVAQ_RX_MINI_PARAMS", \
    3, \
    {  { "rx_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ivaq_rx_mini_params_t, rx_status) }, \
         { "rx_card_det", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ivaq_rx_mini_params_t, rx_card_det) }, \
         { "rx_capture_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ivaq_rx_mini_params_t, rx_capture_state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_MINI_PARAMS { \
    "IVAQ_RX_MINI_PARAMS", \
    3, \
    {  { "rx_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ivaq_rx_mini_params_t, rx_status) }, \
         { "rx_card_det", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ivaq_rx_mini_params_t, rx_card_det) }, \
         { "rx_capture_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ivaq_rx_mini_params_t, rx_capture_state) }, \
         } \
}
#endif

/**
 * @brief Pack a ivaq_rx_mini_params message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_status  Ivaq Rx mini Status
 * @param rx_card_det  Ivaq Rx mini SD Card State
 * @param rx_capture_state  Current acquisition/transfer state.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_params_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t rx_status, uint8_t rx_card_det, uint8_t rx_capture_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN];
    _mav_put_uint8_t(buf, 0, rx_status);
    _mav_put_uint8_t(buf, 1, rx_card_det);
    _mav_put_uint8_t(buf, 2, rx_capture_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN);
#else
    mavlink_ivaq_rx_mini_params_t packet;
    packet.rx_status = rx_status;
    packet.rx_card_det = rx_card_det;
    packet.rx_capture_state = rx_capture_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_CRC);
}

/**
 * @brief Pack a ivaq_rx_mini_params message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_status  Ivaq Rx mini Status
 * @param rx_card_det  Ivaq Rx mini SD Card State
 * @param rx_capture_state  Current acquisition/transfer state.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_params_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t rx_status, uint8_t rx_card_det, uint8_t rx_capture_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN];
    _mav_put_uint8_t(buf, 0, rx_status);
    _mav_put_uint8_t(buf, 1, rx_card_det);
    _mav_put_uint8_t(buf, 2, rx_capture_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN);
#else
    mavlink_ivaq_rx_mini_params_t packet;
    packet.rx_status = rx_status;
    packet.rx_card_det = rx_card_det;
    packet.rx_capture_state = rx_capture_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN);
#endif
}

/**
 * @brief Pack a ivaq_rx_mini_params message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rx_status  Ivaq Rx mini Status
 * @param rx_card_det  Ivaq Rx mini SD Card State
 * @param rx_capture_state  Current acquisition/transfer state.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_params_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t rx_status,uint8_t rx_card_det,uint8_t rx_capture_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN];
    _mav_put_uint8_t(buf, 0, rx_status);
    _mav_put_uint8_t(buf, 1, rx_card_det);
    _mav_put_uint8_t(buf, 2, rx_capture_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN);
#else
    mavlink_ivaq_rx_mini_params_t packet;
    packet.rx_status = rx_status;
    packet.rx_card_det = rx_card_det;
    packet.rx_capture_state = rx_capture_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_CRC);
}

/**
 * @brief Encode a ivaq_rx_mini_params struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_mini_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_params_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ivaq_rx_mini_params_t* ivaq_rx_mini_params)
{
    return mavlink_msg_ivaq_rx_mini_params_pack(system_id, component_id, msg, ivaq_rx_mini_params->rx_status, ivaq_rx_mini_params->rx_card_det, ivaq_rx_mini_params->rx_capture_state);
}

/**
 * @brief Encode a ivaq_rx_mini_params struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_mini_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_params_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ivaq_rx_mini_params_t* ivaq_rx_mini_params)
{
    return mavlink_msg_ivaq_rx_mini_params_pack_chan(system_id, component_id, chan, msg, ivaq_rx_mini_params->rx_status, ivaq_rx_mini_params->rx_card_det, ivaq_rx_mini_params->rx_capture_state);
}

/**
 * @brief Encode a ivaq_rx_mini_params struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_mini_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_mini_params_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ivaq_rx_mini_params_t* ivaq_rx_mini_params)
{
    return mavlink_msg_ivaq_rx_mini_params_pack_status(system_id, component_id, _status, msg,  ivaq_rx_mini_params->rx_status, ivaq_rx_mini_params->rx_card_det, ivaq_rx_mini_params->rx_capture_state);
}

/**
 * @brief Send a ivaq_rx_mini_params message
 * @param chan MAVLink channel to send the message
 *
 * @param rx_status  Ivaq Rx mini Status
 * @param rx_card_det  Ivaq Rx mini SD Card State
 * @param rx_capture_state  Current acquisition/transfer state.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ivaq_rx_mini_params_send(mavlink_channel_t chan, uint8_t rx_status, uint8_t rx_card_det, uint8_t rx_capture_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN];
    _mav_put_uint8_t(buf, 0, rx_status);
    _mav_put_uint8_t(buf, 1, rx_card_det);
    _mav_put_uint8_t(buf, 2, rx_capture_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS, buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_CRC);
#else
    mavlink_ivaq_rx_mini_params_t packet;
    packet.rx_status = rx_status;
    packet.rx_card_det = rx_card_det;
    packet.rx_capture_state = rx_capture_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS, (const char *)&packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_CRC);
#endif
}

/**
 * @brief Send a ivaq_rx_mini_params message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ivaq_rx_mini_params_send_struct(mavlink_channel_t chan, const mavlink_ivaq_rx_mini_params_t* ivaq_rx_mini_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ivaq_rx_mini_params_send(chan, ivaq_rx_mini_params->rx_status, ivaq_rx_mini_params->rx_card_det, ivaq_rx_mini_params->rx_capture_state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS, (const char *)ivaq_rx_mini_params, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_CRC);
#endif
}

#if MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ivaq_rx_mini_params_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t rx_status, uint8_t rx_card_det, uint8_t rx_capture_state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, rx_status);
    _mav_put_uint8_t(buf, 1, rx_card_det);
    _mav_put_uint8_t(buf, 2, rx_capture_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS, buf, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_CRC);
#else
    mavlink_ivaq_rx_mini_params_t *packet = (mavlink_ivaq_rx_mini_params_t *)msgbuf;
    packet->rx_status = rx_status;
    packet->rx_card_det = rx_card_det;
    packet->rx_capture_state = rx_capture_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS, (const char *)packet, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_CRC);
#endif
}
#endif

#endif

// MESSAGE IVAQ_RX_MINI_PARAMS UNPACKING


/**
 * @brief Get field rx_status from ivaq_rx_mini_params message
 *
 * @return  Ivaq Rx mini Status
 */
static inline uint8_t mavlink_msg_ivaq_rx_mini_params_get_rx_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field rx_card_det from ivaq_rx_mini_params message
 *
 * @return  Ivaq Rx mini SD Card State
 */
static inline uint8_t mavlink_msg_ivaq_rx_mini_params_get_rx_card_det(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field rx_capture_state from ivaq_rx_mini_params message
 *
 * @return  Current acquisition/transfer state.
 */
static inline uint8_t mavlink_msg_ivaq_rx_mini_params_get_rx_capture_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Decode a ivaq_rx_mini_params message into a struct
 *
 * @param msg The message to decode
 * @param ivaq_rx_mini_params C-struct to decode the message contents into
 */
static inline void mavlink_msg_ivaq_rx_mini_params_decode(const mavlink_message_t* msg, mavlink_ivaq_rx_mini_params_t* ivaq_rx_mini_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ivaq_rx_mini_params->rx_status = mavlink_msg_ivaq_rx_mini_params_get_rx_status(msg);
    ivaq_rx_mini_params->rx_card_det = mavlink_msg_ivaq_rx_mini_params_get_rx_card_det(msg);
    ivaq_rx_mini_params->rx_capture_state = mavlink_msg_ivaq_rx_mini_params_get_rx_capture_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN? msg->len : MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN;
        memset(ivaq_rx_mini_params, 0, MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_LEN);
    memcpy(ivaq_rx_mini_params, _MAV_PAYLOAD(msg), len);
#endif
}
