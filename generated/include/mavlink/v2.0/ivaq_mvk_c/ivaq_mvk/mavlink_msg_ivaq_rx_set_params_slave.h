#pragma once
// MESSAGE IVAQ_RX_SET_PARAMS_SLAVE PACKING

#define MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE 203


typedef struct __mavlink_ivaq_rx_set_params_slave_t {
 uint8_t rx_set_chg_request; /*<  Ivaq Rx Set Change Request*/
 uint8_t rx_set_reset; /*<  Ivaq Rx Set Reset*/
 uint8_t rx_set_anlg_en; /*<  Ivaq Rx Set Anlg Part Status*/
 uint8_t rx_set_ant_states; /*<  Ivaq Rx Set Antenna State*/
 uint8_t rx_set_stg_states; /*<  Ivaq Rx Set Stage States*/
 uint8_t rx_set_save_opt; /*<  Ivaq Rx Set Save State*/
} mavlink_ivaq_rx_set_params_slave_t;

#define MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN 6
#define MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_MIN_LEN 6
#define MAVLINK_MSG_ID_203_LEN 6
#define MAVLINK_MSG_ID_203_MIN_LEN 6

#define MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_CRC 88
#define MAVLINK_MSG_ID_203_CRC 88



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_SET_PARAMS_SLAVE { \
    203, \
    "IVAQ_RX_SET_PARAMS_SLAVE", \
    6, \
    {  { "rx_set_chg_request", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ivaq_rx_set_params_slave_t, rx_set_chg_request) }, \
         { "rx_set_reset", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ivaq_rx_set_params_slave_t, rx_set_reset) }, \
         { "rx_set_anlg_en", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ivaq_rx_set_params_slave_t, rx_set_anlg_en) }, \
         { "rx_set_ant_states", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_ivaq_rx_set_params_slave_t, rx_set_ant_states) }, \
         { "rx_set_stg_states", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ivaq_rx_set_params_slave_t, rx_set_stg_states) }, \
         { "rx_set_save_opt", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_ivaq_rx_set_params_slave_t, rx_set_save_opt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_SET_PARAMS_SLAVE { \
    "IVAQ_RX_SET_PARAMS_SLAVE", \
    6, \
    {  { "rx_set_chg_request", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ivaq_rx_set_params_slave_t, rx_set_chg_request) }, \
         { "rx_set_reset", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ivaq_rx_set_params_slave_t, rx_set_reset) }, \
         { "rx_set_anlg_en", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ivaq_rx_set_params_slave_t, rx_set_anlg_en) }, \
         { "rx_set_ant_states", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_ivaq_rx_set_params_slave_t, rx_set_ant_states) }, \
         { "rx_set_stg_states", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ivaq_rx_set_params_slave_t, rx_set_stg_states) }, \
         { "rx_set_save_opt", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_ivaq_rx_set_params_slave_t, rx_set_save_opt) }, \
         } \
}
#endif

/**
 * @brief Pack a ivaq_rx_set_params_slave message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_set_chg_request  Ivaq Rx Set Change Request
 * @param rx_set_reset  Ivaq Rx Set Reset
 * @param rx_set_anlg_en  Ivaq Rx Set Anlg Part Status
 * @param rx_set_ant_states  Ivaq Rx Set Antenna State
 * @param rx_set_stg_states  Ivaq Rx Set Stage States
 * @param rx_set_save_opt  Ivaq Rx Set Save State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_set_params_slave_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t rx_set_chg_request, uint8_t rx_set_reset, uint8_t rx_set_anlg_en, uint8_t rx_set_ant_states, uint8_t rx_set_stg_states, uint8_t rx_set_save_opt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN];
    _mav_put_uint8_t(buf, 0, rx_set_chg_request);
    _mav_put_uint8_t(buf, 1, rx_set_reset);
    _mav_put_uint8_t(buf, 2, rx_set_anlg_en);
    _mav_put_uint8_t(buf, 3, rx_set_ant_states);
    _mav_put_uint8_t(buf, 4, rx_set_stg_states);
    _mav_put_uint8_t(buf, 5, rx_set_save_opt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN);
#else
    mavlink_ivaq_rx_set_params_slave_t packet;
    packet.rx_set_chg_request = rx_set_chg_request;
    packet.rx_set_reset = rx_set_reset;
    packet.rx_set_anlg_en = rx_set_anlg_en;
    packet.rx_set_ant_states = rx_set_ant_states;
    packet.rx_set_stg_states = rx_set_stg_states;
    packet.rx_set_save_opt = rx_set_save_opt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_CRC);
}

/**
 * @brief Pack a ivaq_rx_set_params_slave message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_set_chg_request  Ivaq Rx Set Change Request
 * @param rx_set_reset  Ivaq Rx Set Reset
 * @param rx_set_anlg_en  Ivaq Rx Set Anlg Part Status
 * @param rx_set_ant_states  Ivaq Rx Set Antenna State
 * @param rx_set_stg_states  Ivaq Rx Set Stage States
 * @param rx_set_save_opt  Ivaq Rx Set Save State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_set_params_slave_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t rx_set_chg_request, uint8_t rx_set_reset, uint8_t rx_set_anlg_en, uint8_t rx_set_ant_states, uint8_t rx_set_stg_states, uint8_t rx_set_save_opt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN];
    _mav_put_uint8_t(buf, 0, rx_set_chg_request);
    _mav_put_uint8_t(buf, 1, rx_set_reset);
    _mav_put_uint8_t(buf, 2, rx_set_anlg_en);
    _mav_put_uint8_t(buf, 3, rx_set_ant_states);
    _mav_put_uint8_t(buf, 4, rx_set_stg_states);
    _mav_put_uint8_t(buf, 5, rx_set_save_opt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN);
#else
    mavlink_ivaq_rx_set_params_slave_t packet;
    packet.rx_set_chg_request = rx_set_chg_request;
    packet.rx_set_reset = rx_set_reset;
    packet.rx_set_anlg_en = rx_set_anlg_en;
    packet.rx_set_ant_states = rx_set_ant_states;
    packet.rx_set_stg_states = rx_set_stg_states;
    packet.rx_set_save_opt = rx_set_save_opt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN);
#endif
}

/**
 * @brief Pack a ivaq_rx_set_params_slave message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rx_set_chg_request  Ivaq Rx Set Change Request
 * @param rx_set_reset  Ivaq Rx Set Reset
 * @param rx_set_anlg_en  Ivaq Rx Set Anlg Part Status
 * @param rx_set_ant_states  Ivaq Rx Set Antenna State
 * @param rx_set_stg_states  Ivaq Rx Set Stage States
 * @param rx_set_save_opt  Ivaq Rx Set Save State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_set_params_slave_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t rx_set_chg_request,uint8_t rx_set_reset,uint8_t rx_set_anlg_en,uint8_t rx_set_ant_states,uint8_t rx_set_stg_states,uint8_t rx_set_save_opt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN];
    _mav_put_uint8_t(buf, 0, rx_set_chg_request);
    _mav_put_uint8_t(buf, 1, rx_set_reset);
    _mav_put_uint8_t(buf, 2, rx_set_anlg_en);
    _mav_put_uint8_t(buf, 3, rx_set_ant_states);
    _mav_put_uint8_t(buf, 4, rx_set_stg_states);
    _mav_put_uint8_t(buf, 5, rx_set_save_opt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN);
#else
    mavlink_ivaq_rx_set_params_slave_t packet;
    packet.rx_set_chg_request = rx_set_chg_request;
    packet.rx_set_reset = rx_set_reset;
    packet.rx_set_anlg_en = rx_set_anlg_en;
    packet.rx_set_ant_states = rx_set_ant_states;
    packet.rx_set_stg_states = rx_set_stg_states;
    packet.rx_set_save_opt = rx_set_save_opt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_CRC);
}

/**
 * @brief Encode a ivaq_rx_set_params_slave struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_set_params_slave C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_set_params_slave_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ivaq_rx_set_params_slave_t* ivaq_rx_set_params_slave)
{
    return mavlink_msg_ivaq_rx_set_params_slave_pack(system_id, component_id, msg, ivaq_rx_set_params_slave->rx_set_chg_request, ivaq_rx_set_params_slave->rx_set_reset, ivaq_rx_set_params_slave->rx_set_anlg_en, ivaq_rx_set_params_slave->rx_set_ant_states, ivaq_rx_set_params_slave->rx_set_stg_states, ivaq_rx_set_params_slave->rx_set_save_opt);
}

/**
 * @brief Encode a ivaq_rx_set_params_slave struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_set_params_slave C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_set_params_slave_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ivaq_rx_set_params_slave_t* ivaq_rx_set_params_slave)
{
    return mavlink_msg_ivaq_rx_set_params_slave_pack_chan(system_id, component_id, chan, msg, ivaq_rx_set_params_slave->rx_set_chg_request, ivaq_rx_set_params_slave->rx_set_reset, ivaq_rx_set_params_slave->rx_set_anlg_en, ivaq_rx_set_params_slave->rx_set_ant_states, ivaq_rx_set_params_slave->rx_set_stg_states, ivaq_rx_set_params_slave->rx_set_save_opt);
}

/**
 * @brief Encode a ivaq_rx_set_params_slave struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_set_params_slave C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_set_params_slave_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ivaq_rx_set_params_slave_t* ivaq_rx_set_params_slave)
{
    return mavlink_msg_ivaq_rx_set_params_slave_pack_status(system_id, component_id, _status, msg,  ivaq_rx_set_params_slave->rx_set_chg_request, ivaq_rx_set_params_slave->rx_set_reset, ivaq_rx_set_params_slave->rx_set_anlg_en, ivaq_rx_set_params_slave->rx_set_ant_states, ivaq_rx_set_params_slave->rx_set_stg_states, ivaq_rx_set_params_slave->rx_set_save_opt);
}

/**
 * @brief Send a ivaq_rx_set_params_slave message
 * @param chan MAVLink channel to send the message
 *
 * @param rx_set_chg_request  Ivaq Rx Set Change Request
 * @param rx_set_reset  Ivaq Rx Set Reset
 * @param rx_set_anlg_en  Ivaq Rx Set Anlg Part Status
 * @param rx_set_ant_states  Ivaq Rx Set Antenna State
 * @param rx_set_stg_states  Ivaq Rx Set Stage States
 * @param rx_set_save_opt  Ivaq Rx Set Save State
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ivaq_rx_set_params_slave_send(mavlink_channel_t chan, uint8_t rx_set_chg_request, uint8_t rx_set_reset, uint8_t rx_set_anlg_en, uint8_t rx_set_ant_states, uint8_t rx_set_stg_states, uint8_t rx_set_save_opt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN];
    _mav_put_uint8_t(buf, 0, rx_set_chg_request);
    _mav_put_uint8_t(buf, 1, rx_set_reset);
    _mav_put_uint8_t(buf, 2, rx_set_anlg_en);
    _mav_put_uint8_t(buf, 3, rx_set_ant_states);
    _mav_put_uint8_t(buf, 4, rx_set_stg_states);
    _mav_put_uint8_t(buf, 5, rx_set_save_opt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE, buf, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_CRC);
#else
    mavlink_ivaq_rx_set_params_slave_t packet;
    packet.rx_set_chg_request = rx_set_chg_request;
    packet.rx_set_reset = rx_set_reset;
    packet.rx_set_anlg_en = rx_set_anlg_en;
    packet.rx_set_ant_states = rx_set_ant_states;
    packet.rx_set_stg_states = rx_set_stg_states;
    packet.rx_set_save_opt = rx_set_save_opt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE, (const char *)&packet, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_CRC);
#endif
}

/**
 * @brief Send a ivaq_rx_set_params_slave message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ivaq_rx_set_params_slave_send_struct(mavlink_channel_t chan, const mavlink_ivaq_rx_set_params_slave_t* ivaq_rx_set_params_slave)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ivaq_rx_set_params_slave_send(chan, ivaq_rx_set_params_slave->rx_set_chg_request, ivaq_rx_set_params_slave->rx_set_reset, ivaq_rx_set_params_slave->rx_set_anlg_en, ivaq_rx_set_params_slave->rx_set_ant_states, ivaq_rx_set_params_slave->rx_set_stg_states, ivaq_rx_set_params_slave->rx_set_save_opt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE, (const char *)ivaq_rx_set_params_slave, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_CRC);
#endif
}

#if MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ivaq_rx_set_params_slave_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t rx_set_chg_request, uint8_t rx_set_reset, uint8_t rx_set_anlg_en, uint8_t rx_set_ant_states, uint8_t rx_set_stg_states, uint8_t rx_set_save_opt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, rx_set_chg_request);
    _mav_put_uint8_t(buf, 1, rx_set_reset);
    _mav_put_uint8_t(buf, 2, rx_set_anlg_en);
    _mav_put_uint8_t(buf, 3, rx_set_ant_states);
    _mav_put_uint8_t(buf, 4, rx_set_stg_states);
    _mav_put_uint8_t(buf, 5, rx_set_save_opt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE, buf, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_CRC);
#else
    mavlink_ivaq_rx_set_params_slave_t *packet = (mavlink_ivaq_rx_set_params_slave_t *)msgbuf;
    packet->rx_set_chg_request = rx_set_chg_request;
    packet->rx_set_reset = rx_set_reset;
    packet->rx_set_anlg_en = rx_set_anlg_en;
    packet->rx_set_ant_states = rx_set_ant_states;
    packet->rx_set_stg_states = rx_set_stg_states;
    packet->rx_set_save_opt = rx_set_save_opt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE, (const char *)packet, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_CRC);
#endif
}
#endif

#endif

// MESSAGE IVAQ_RX_SET_PARAMS_SLAVE UNPACKING


/**
 * @brief Get field rx_set_chg_request from ivaq_rx_set_params_slave message
 *
 * @return  Ivaq Rx Set Change Request
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_slave_get_rx_set_chg_request(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field rx_set_reset from ivaq_rx_set_params_slave message
 *
 * @return  Ivaq Rx Set Reset
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_slave_get_rx_set_reset(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field rx_set_anlg_en from ivaq_rx_set_params_slave message
 *
 * @return  Ivaq Rx Set Anlg Part Status
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_slave_get_rx_set_anlg_en(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field rx_set_ant_states from ivaq_rx_set_params_slave message
 *
 * @return  Ivaq Rx Set Antenna State
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_slave_get_rx_set_ant_states(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field rx_set_stg_states from ivaq_rx_set_params_slave message
 *
 * @return  Ivaq Rx Set Stage States
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_slave_get_rx_set_stg_states(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field rx_set_save_opt from ivaq_rx_set_params_slave message
 *
 * @return  Ivaq Rx Set Save State
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_slave_get_rx_set_save_opt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Decode a ivaq_rx_set_params_slave message into a struct
 *
 * @param msg The message to decode
 * @param ivaq_rx_set_params_slave C-struct to decode the message contents into
 */
static inline void mavlink_msg_ivaq_rx_set_params_slave_decode(const mavlink_message_t* msg, mavlink_ivaq_rx_set_params_slave_t* ivaq_rx_set_params_slave)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ivaq_rx_set_params_slave->rx_set_chg_request = mavlink_msg_ivaq_rx_set_params_slave_get_rx_set_chg_request(msg);
    ivaq_rx_set_params_slave->rx_set_reset = mavlink_msg_ivaq_rx_set_params_slave_get_rx_set_reset(msg);
    ivaq_rx_set_params_slave->rx_set_anlg_en = mavlink_msg_ivaq_rx_set_params_slave_get_rx_set_anlg_en(msg);
    ivaq_rx_set_params_slave->rx_set_ant_states = mavlink_msg_ivaq_rx_set_params_slave_get_rx_set_ant_states(msg);
    ivaq_rx_set_params_slave->rx_set_stg_states = mavlink_msg_ivaq_rx_set_params_slave_get_rx_set_stg_states(msg);
    ivaq_rx_set_params_slave->rx_set_save_opt = mavlink_msg_ivaq_rx_set_params_slave_get_rx_set_save_opt(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN? msg->len : MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN;
        memset(ivaq_rx_set_params_slave, 0, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_LEN);
    memcpy(ivaq_rx_set_params_slave, _MAV_PAYLOAD(msg), len);
#endif
}
