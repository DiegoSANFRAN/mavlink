#pragma once
// MESSAGE IVAQ_RX_PARAMS PACKING

#define MAVLINK_MSG_ID_IVAQ_RX_PARAMS 200


typedef struct __mavlink_ivaq_rx_params_t {
 float rx_battery_voltage; /*<  Ivaq Rx Battery Voltage*/
 uint8_t rx_status; /*<  Ivaq Rx Status*/
 uint8_t rx_stg_states; /*<  Ivaq Rx Stage States*/
 uint8_t rx_save_opt; /*<  Ivaq Rx Save State*/
 uint8_t rx_saturation_flag; /*<  Ivaq Rx Saturation flag*/
} mavlink_ivaq_rx_params_t;

#define MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN 8
#define MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MIN_LEN 8
#define MAVLINK_MSG_ID_200_LEN 8
#define MAVLINK_MSG_ID_200_MIN_LEN 8

#define MAVLINK_MSG_ID_IVAQ_RX_PARAMS_CRC 244
#define MAVLINK_MSG_ID_200_CRC 244



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_PARAMS { \
    200, \
    "IVAQ_RX_PARAMS", \
    5, \
    {  { "rx_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ivaq_rx_params_t, rx_status) }, \
         { "rx_battery_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ivaq_rx_params_t, rx_battery_voltage) }, \
         { "rx_stg_states", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_ivaq_rx_params_t, rx_stg_states) }, \
         { "rx_save_opt", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_ivaq_rx_params_t, rx_save_opt) }, \
         { "rx_saturation_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_ivaq_rx_params_t, rx_saturation_flag) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_PARAMS { \
    "IVAQ_RX_PARAMS", \
    5, \
    {  { "rx_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ivaq_rx_params_t, rx_status) }, \
         { "rx_battery_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ivaq_rx_params_t, rx_battery_voltage) }, \
         { "rx_stg_states", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_ivaq_rx_params_t, rx_stg_states) }, \
         { "rx_save_opt", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_ivaq_rx_params_t, rx_save_opt) }, \
         { "rx_saturation_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_ivaq_rx_params_t, rx_saturation_flag) }, \
         } \
}
#endif

/**
 * @brief Pack a ivaq_rx_params message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_status  Ivaq Rx Status
 * @param rx_battery_voltage  Ivaq Rx Battery Voltage
 * @param rx_stg_states  Ivaq Rx Stage States
 * @param rx_save_opt  Ivaq Rx Save State
 * @param rx_saturation_flag  Ivaq Rx Saturation flag
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t rx_status, float rx_battery_voltage, uint8_t rx_stg_states, uint8_t rx_save_opt, uint8_t rx_saturation_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN];
    _mav_put_float(buf, 0, rx_battery_voltage);
    _mav_put_uint8_t(buf, 4, rx_status);
    _mav_put_uint8_t(buf, 5, rx_stg_states);
    _mav_put_uint8_t(buf, 6, rx_save_opt);
    _mav_put_uint8_t(buf, 7, rx_saturation_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN);
#else
    mavlink_ivaq_rx_params_t packet;
    packet.rx_battery_voltage = rx_battery_voltage;
    packet.rx_status = rx_status;
    packet.rx_stg_states = rx_stg_states;
    packet.rx_save_opt = rx_save_opt;
    packet.rx_saturation_flag = rx_saturation_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_PARAMS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_CRC);
}

/**
 * @brief Pack a ivaq_rx_params message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_status  Ivaq Rx Status
 * @param rx_battery_voltage  Ivaq Rx Battery Voltage
 * @param rx_stg_states  Ivaq Rx Stage States
 * @param rx_save_opt  Ivaq Rx Save State
 * @param rx_saturation_flag  Ivaq Rx Saturation flag
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t rx_status, float rx_battery_voltage, uint8_t rx_stg_states, uint8_t rx_save_opt, uint8_t rx_saturation_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN];
    _mav_put_float(buf, 0, rx_battery_voltage);
    _mav_put_uint8_t(buf, 4, rx_status);
    _mav_put_uint8_t(buf, 5, rx_stg_states);
    _mav_put_uint8_t(buf, 6, rx_save_opt);
    _mav_put_uint8_t(buf, 7, rx_saturation_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN);
#else
    mavlink_ivaq_rx_params_t packet;
    packet.rx_battery_voltage = rx_battery_voltage;
    packet.rx_status = rx_status;
    packet.rx_stg_states = rx_stg_states;
    packet.rx_save_opt = rx_save_opt;
    packet.rx_saturation_flag = rx_saturation_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_PARAMS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN);
#endif
}

/**
 * @brief Pack a ivaq_rx_params message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rx_status  Ivaq Rx Status
 * @param rx_battery_voltage  Ivaq Rx Battery Voltage
 * @param rx_stg_states  Ivaq Rx Stage States
 * @param rx_save_opt  Ivaq Rx Save State
 * @param rx_saturation_flag  Ivaq Rx Saturation flag
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t rx_status,float rx_battery_voltage,uint8_t rx_stg_states,uint8_t rx_save_opt,uint8_t rx_saturation_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN];
    _mav_put_float(buf, 0, rx_battery_voltage);
    _mav_put_uint8_t(buf, 4, rx_status);
    _mav_put_uint8_t(buf, 5, rx_stg_states);
    _mav_put_uint8_t(buf, 6, rx_save_opt);
    _mav_put_uint8_t(buf, 7, rx_saturation_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN);
#else
    mavlink_ivaq_rx_params_t packet;
    packet.rx_battery_voltage = rx_battery_voltage;
    packet.rx_status = rx_status;
    packet.rx_stg_states = rx_stg_states;
    packet.rx_save_opt = rx_save_opt;
    packet.rx_saturation_flag = rx_saturation_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_PARAMS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_CRC);
}

/**
 * @brief Encode a ivaq_rx_params struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ivaq_rx_params_t* ivaq_rx_params)
{
    return mavlink_msg_ivaq_rx_params_pack(system_id, component_id, msg, ivaq_rx_params->rx_status, ivaq_rx_params->rx_battery_voltage, ivaq_rx_params->rx_stg_states, ivaq_rx_params->rx_save_opt, ivaq_rx_params->rx_saturation_flag);
}

/**
 * @brief Encode a ivaq_rx_params struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ivaq_rx_params_t* ivaq_rx_params)
{
    return mavlink_msg_ivaq_rx_params_pack_chan(system_id, component_id, chan, msg, ivaq_rx_params->rx_status, ivaq_rx_params->rx_battery_voltage, ivaq_rx_params->rx_stg_states, ivaq_rx_params->rx_save_opt, ivaq_rx_params->rx_saturation_flag);
}

/**
 * @brief Encode a ivaq_rx_params struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_params C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ivaq_rx_params_t* ivaq_rx_params)
{
    return mavlink_msg_ivaq_rx_params_pack_status(system_id, component_id, _status, msg,  ivaq_rx_params->rx_status, ivaq_rx_params->rx_battery_voltage, ivaq_rx_params->rx_stg_states, ivaq_rx_params->rx_save_opt, ivaq_rx_params->rx_saturation_flag);
}

/**
 * @brief Send a ivaq_rx_params message
 * @param chan MAVLink channel to send the message
 *
 * @param rx_status  Ivaq Rx Status
 * @param rx_battery_voltage  Ivaq Rx Battery Voltage
 * @param rx_stg_states  Ivaq Rx Stage States
 * @param rx_save_opt  Ivaq Rx Save State
 * @param rx_saturation_flag  Ivaq Rx Saturation flag
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ivaq_rx_params_send(mavlink_channel_t chan, uint8_t rx_status, float rx_battery_voltage, uint8_t rx_stg_states, uint8_t rx_save_opt, uint8_t rx_saturation_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN];
    _mav_put_float(buf, 0, rx_battery_voltage);
    _mav_put_uint8_t(buf, 4, rx_status);
    _mav_put_uint8_t(buf, 5, rx_stg_states);
    _mav_put_uint8_t(buf, 6, rx_save_opt);
    _mav_put_uint8_t(buf, 7, rx_saturation_flag);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS, buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_CRC);
#else
    mavlink_ivaq_rx_params_t packet;
    packet.rx_battery_voltage = rx_battery_voltage;
    packet.rx_status = rx_status;
    packet.rx_stg_states = rx_stg_states;
    packet.rx_save_opt = rx_save_opt;
    packet.rx_saturation_flag = rx_saturation_flag;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS, (const char *)&packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_CRC);
#endif
}

/**
 * @brief Send a ivaq_rx_params message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ivaq_rx_params_send_struct(mavlink_channel_t chan, const mavlink_ivaq_rx_params_t* ivaq_rx_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ivaq_rx_params_send(chan, ivaq_rx_params->rx_status, ivaq_rx_params->rx_battery_voltage, ivaq_rx_params->rx_stg_states, ivaq_rx_params->rx_save_opt, ivaq_rx_params->rx_saturation_flag);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS, (const char *)ivaq_rx_params, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_CRC);
#endif
}

#if MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ivaq_rx_params_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t rx_status, float rx_battery_voltage, uint8_t rx_stg_states, uint8_t rx_save_opt, uint8_t rx_saturation_flag)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, rx_battery_voltage);
    _mav_put_uint8_t(buf, 4, rx_status);
    _mav_put_uint8_t(buf, 5, rx_stg_states);
    _mav_put_uint8_t(buf, 6, rx_save_opt);
    _mav_put_uint8_t(buf, 7, rx_saturation_flag);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS, buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_CRC);
#else
    mavlink_ivaq_rx_params_t *packet = (mavlink_ivaq_rx_params_t *)msgbuf;
    packet->rx_battery_voltage = rx_battery_voltage;
    packet->rx_status = rx_status;
    packet->rx_stg_states = rx_stg_states;
    packet->rx_save_opt = rx_save_opt;
    packet->rx_saturation_flag = rx_saturation_flag;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS, (const char *)packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_CRC);
#endif
}
#endif

#endif

// MESSAGE IVAQ_RX_PARAMS UNPACKING


/**
 * @brief Get field rx_status from ivaq_rx_params message
 *
 * @return  Ivaq Rx Status
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_get_rx_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field rx_battery_voltage from ivaq_rx_params message
 *
 * @return  Ivaq Rx Battery Voltage
 */
static inline float mavlink_msg_ivaq_rx_params_get_rx_battery_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field rx_stg_states from ivaq_rx_params message
 *
 * @return  Ivaq Rx Stage States
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_get_rx_stg_states(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field rx_save_opt from ivaq_rx_params message
 *
 * @return  Ivaq Rx Save State
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_get_rx_save_opt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field rx_saturation_flag from ivaq_rx_params message
 *
 * @return  Ivaq Rx Saturation flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_get_rx_saturation_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Decode a ivaq_rx_params message into a struct
 *
 * @param msg The message to decode
 * @param ivaq_rx_params C-struct to decode the message contents into
 */
static inline void mavlink_msg_ivaq_rx_params_decode(const mavlink_message_t* msg, mavlink_ivaq_rx_params_t* ivaq_rx_params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ivaq_rx_params->rx_battery_voltage = mavlink_msg_ivaq_rx_params_get_rx_battery_voltage(msg);
    ivaq_rx_params->rx_status = mavlink_msg_ivaq_rx_params_get_rx_status(msg);
    ivaq_rx_params->rx_stg_states = mavlink_msg_ivaq_rx_params_get_rx_stg_states(msg);
    ivaq_rx_params->rx_save_opt = mavlink_msg_ivaq_rx_params_get_rx_save_opt(msg);
    ivaq_rx_params->rx_saturation_flag = mavlink_msg_ivaq_rx_params_get_rx_saturation_flag(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN? msg->len : MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN;
        memset(ivaq_rx_params, 0, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_LEN);
    memcpy(ivaq_rx_params, _MAV_PAYLOAD(msg), len);
#endif
}
