#pragma once
// MESSAGE IVAQ_RX_PARAMS_SLAVE PACKING

#define MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE 201


typedef struct __mavlink_ivaq_rx_params_slave_t {
 float rx_battery_voltage; /*<  Ivaq Rx Battery Voltage*/
 uint8_t rx_mode; /*<  Ivaq Rx Status*/
 uint8_t rx_status; /*<  Ivaq Rx Status*/
 uint8_t rx_anlg_en; /*<  Ivaq Rx Anlg Part Status*/
 uint8_t rx_ant_states; /*<  Ivaq Rx Antenna States*/
 uint8_t rx_stg_states; /*<  Ivaq Rx Stage States*/
 uint8_t rx_card_det; /*<  Ivaq Rx SD Card State*/
 uint8_t rx_save_opt; /*<  Ivaq Rx Save State*/
} mavlink_ivaq_rx_params_slave_t;

#define MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN 11
#define MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_MIN_LEN 11
#define MAVLINK_MSG_ID_201_LEN 11
#define MAVLINK_MSG_ID_201_MIN_LEN 11

#define MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_CRC 161
#define MAVLINK_MSG_ID_201_CRC 161



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_PARAMS_SLAVE { \
    201, \
    "IVAQ_RX_PARAMS_SLAVE", \
    8, \
    {  { "rx_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ivaq_rx_params_slave_t, rx_mode) }, \
         { "rx_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_ivaq_rx_params_slave_t, rx_status) }, \
         { "rx_anlg_en", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_ivaq_rx_params_slave_t, rx_anlg_en) }, \
         { "rx_battery_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ivaq_rx_params_slave_t, rx_battery_voltage) }, \
         { "rx_ant_states", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_ivaq_rx_params_slave_t, rx_ant_states) }, \
         { "rx_stg_states", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_ivaq_rx_params_slave_t, rx_stg_states) }, \
         { "rx_card_det", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_ivaq_rx_params_slave_t, rx_card_det) }, \
         { "rx_save_opt", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_ivaq_rx_params_slave_t, rx_save_opt) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_PARAMS_SLAVE { \
    "IVAQ_RX_PARAMS_SLAVE", \
    8, \
    {  { "rx_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ivaq_rx_params_slave_t, rx_mode) }, \
         { "rx_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_ivaq_rx_params_slave_t, rx_status) }, \
         { "rx_anlg_en", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_ivaq_rx_params_slave_t, rx_anlg_en) }, \
         { "rx_battery_voltage", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ivaq_rx_params_slave_t, rx_battery_voltage) }, \
         { "rx_ant_states", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_ivaq_rx_params_slave_t, rx_ant_states) }, \
         { "rx_stg_states", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_ivaq_rx_params_slave_t, rx_stg_states) }, \
         { "rx_card_det", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_ivaq_rx_params_slave_t, rx_card_det) }, \
         { "rx_save_opt", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_ivaq_rx_params_slave_t, rx_save_opt) }, \
         } \
}
#endif

/**
 * @brief Pack a ivaq_rx_params_slave message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_mode  Ivaq Rx Status
 * @param rx_status  Ivaq Rx Status
 * @param rx_anlg_en  Ivaq Rx Anlg Part Status
 * @param rx_battery_voltage  Ivaq Rx Battery Voltage
 * @param rx_ant_states  Ivaq Rx Antenna States
 * @param rx_stg_states  Ivaq Rx Stage States
 * @param rx_card_det  Ivaq Rx SD Card State
 * @param rx_save_opt  Ivaq Rx Save State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_slave_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t rx_mode, uint8_t rx_status, uint8_t rx_anlg_en, float rx_battery_voltage, uint8_t rx_ant_states, uint8_t rx_stg_states, uint8_t rx_card_det, uint8_t rx_save_opt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN];
    _mav_put_float(buf, 0, rx_battery_voltage);
    _mav_put_uint8_t(buf, 4, rx_mode);
    _mav_put_uint8_t(buf, 5, rx_status);
    _mav_put_uint8_t(buf, 6, rx_anlg_en);
    _mav_put_uint8_t(buf, 7, rx_ant_states);
    _mav_put_uint8_t(buf, 8, rx_stg_states);
    _mav_put_uint8_t(buf, 9, rx_card_det);
    _mav_put_uint8_t(buf, 10, rx_save_opt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN);
#else
    mavlink_ivaq_rx_params_slave_t packet;
    packet.rx_battery_voltage = rx_battery_voltage;
    packet.rx_mode = rx_mode;
    packet.rx_status = rx_status;
    packet.rx_anlg_en = rx_anlg_en;
    packet.rx_ant_states = rx_ant_states;
    packet.rx_stg_states = rx_stg_states;
    packet.rx_card_det = rx_card_det;
    packet.rx_save_opt = rx_save_opt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_CRC);
}

/**
 * @brief Pack a ivaq_rx_params_slave message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_mode  Ivaq Rx Status
 * @param rx_status  Ivaq Rx Status
 * @param rx_anlg_en  Ivaq Rx Anlg Part Status
 * @param rx_battery_voltage  Ivaq Rx Battery Voltage
 * @param rx_ant_states  Ivaq Rx Antenna States
 * @param rx_stg_states  Ivaq Rx Stage States
 * @param rx_card_det  Ivaq Rx SD Card State
 * @param rx_save_opt  Ivaq Rx Save State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_slave_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t rx_mode, uint8_t rx_status, uint8_t rx_anlg_en, float rx_battery_voltage, uint8_t rx_ant_states, uint8_t rx_stg_states, uint8_t rx_card_det, uint8_t rx_save_opt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN];
    _mav_put_float(buf, 0, rx_battery_voltage);
    _mav_put_uint8_t(buf, 4, rx_mode);
    _mav_put_uint8_t(buf, 5, rx_status);
    _mav_put_uint8_t(buf, 6, rx_anlg_en);
    _mav_put_uint8_t(buf, 7, rx_ant_states);
    _mav_put_uint8_t(buf, 8, rx_stg_states);
    _mav_put_uint8_t(buf, 9, rx_card_det);
    _mav_put_uint8_t(buf, 10, rx_save_opt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN);
#else
    mavlink_ivaq_rx_params_slave_t packet;
    packet.rx_battery_voltage = rx_battery_voltage;
    packet.rx_mode = rx_mode;
    packet.rx_status = rx_status;
    packet.rx_anlg_en = rx_anlg_en;
    packet.rx_ant_states = rx_ant_states;
    packet.rx_stg_states = rx_stg_states;
    packet.rx_card_det = rx_card_det;
    packet.rx_save_opt = rx_save_opt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN);
#endif
}

/**
 * @brief Pack a ivaq_rx_params_slave message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rx_mode  Ivaq Rx Status
 * @param rx_status  Ivaq Rx Status
 * @param rx_anlg_en  Ivaq Rx Anlg Part Status
 * @param rx_battery_voltage  Ivaq Rx Battery Voltage
 * @param rx_ant_states  Ivaq Rx Antenna States
 * @param rx_stg_states  Ivaq Rx Stage States
 * @param rx_card_det  Ivaq Rx SD Card State
 * @param rx_save_opt  Ivaq Rx Save State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_slave_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t rx_mode,uint8_t rx_status,uint8_t rx_anlg_en,float rx_battery_voltage,uint8_t rx_ant_states,uint8_t rx_stg_states,uint8_t rx_card_det,uint8_t rx_save_opt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN];
    _mav_put_float(buf, 0, rx_battery_voltage);
    _mav_put_uint8_t(buf, 4, rx_mode);
    _mav_put_uint8_t(buf, 5, rx_status);
    _mav_put_uint8_t(buf, 6, rx_anlg_en);
    _mav_put_uint8_t(buf, 7, rx_ant_states);
    _mav_put_uint8_t(buf, 8, rx_stg_states);
    _mav_put_uint8_t(buf, 9, rx_card_det);
    _mav_put_uint8_t(buf, 10, rx_save_opt);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN);
#else
    mavlink_ivaq_rx_params_slave_t packet;
    packet.rx_battery_voltage = rx_battery_voltage;
    packet.rx_mode = rx_mode;
    packet.rx_status = rx_status;
    packet.rx_anlg_en = rx_anlg_en;
    packet.rx_ant_states = rx_ant_states;
    packet.rx_stg_states = rx_stg_states;
    packet.rx_card_det = rx_card_det;
    packet.rx_save_opt = rx_save_opt;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_CRC);
}

/**
 * @brief Encode a ivaq_rx_params_slave struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_params_slave C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_slave_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ivaq_rx_params_slave_t* ivaq_rx_params_slave)
{
    return mavlink_msg_ivaq_rx_params_slave_pack(system_id, component_id, msg, ivaq_rx_params_slave->rx_mode, ivaq_rx_params_slave->rx_status, ivaq_rx_params_slave->rx_anlg_en, ivaq_rx_params_slave->rx_battery_voltage, ivaq_rx_params_slave->rx_ant_states, ivaq_rx_params_slave->rx_stg_states, ivaq_rx_params_slave->rx_card_det, ivaq_rx_params_slave->rx_save_opt);
}

/**
 * @brief Encode a ivaq_rx_params_slave struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_params_slave C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_slave_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ivaq_rx_params_slave_t* ivaq_rx_params_slave)
{
    return mavlink_msg_ivaq_rx_params_slave_pack_chan(system_id, component_id, chan, msg, ivaq_rx_params_slave->rx_mode, ivaq_rx_params_slave->rx_status, ivaq_rx_params_slave->rx_anlg_en, ivaq_rx_params_slave->rx_battery_voltage, ivaq_rx_params_slave->rx_ant_states, ivaq_rx_params_slave->rx_stg_states, ivaq_rx_params_slave->rx_card_det, ivaq_rx_params_slave->rx_save_opt);
}

/**
 * @brief Encode a ivaq_rx_params_slave struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_params_slave C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_slave_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ivaq_rx_params_slave_t* ivaq_rx_params_slave)
{
    return mavlink_msg_ivaq_rx_params_slave_pack_status(system_id, component_id, _status, msg,  ivaq_rx_params_slave->rx_mode, ivaq_rx_params_slave->rx_status, ivaq_rx_params_slave->rx_anlg_en, ivaq_rx_params_slave->rx_battery_voltage, ivaq_rx_params_slave->rx_ant_states, ivaq_rx_params_slave->rx_stg_states, ivaq_rx_params_slave->rx_card_det, ivaq_rx_params_slave->rx_save_opt);
}

/**
 * @brief Send a ivaq_rx_params_slave message
 * @param chan MAVLink channel to send the message
 *
 * @param rx_mode  Ivaq Rx Status
 * @param rx_status  Ivaq Rx Status
 * @param rx_anlg_en  Ivaq Rx Anlg Part Status
 * @param rx_battery_voltage  Ivaq Rx Battery Voltage
 * @param rx_ant_states  Ivaq Rx Antenna States
 * @param rx_stg_states  Ivaq Rx Stage States
 * @param rx_card_det  Ivaq Rx SD Card State
 * @param rx_save_opt  Ivaq Rx Save State
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ivaq_rx_params_slave_send(mavlink_channel_t chan, uint8_t rx_mode, uint8_t rx_status, uint8_t rx_anlg_en, float rx_battery_voltage, uint8_t rx_ant_states, uint8_t rx_stg_states, uint8_t rx_card_det, uint8_t rx_save_opt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN];
    _mav_put_float(buf, 0, rx_battery_voltage);
    _mav_put_uint8_t(buf, 4, rx_mode);
    _mav_put_uint8_t(buf, 5, rx_status);
    _mav_put_uint8_t(buf, 6, rx_anlg_en);
    _mav_put_uint8_t(buf, 7, rx_ant_states);
    _mav_put_uint8_t(buf, 8, rx_stg_states);
    _mav_put_uint8_t(buf, 9, rx_card_det);
    _mav_put_uint8_t(buf, 10, rx_save_opt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE, buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_CRC);
#else
    mavlink_ivaq_rx_params_slave_t packet;
    packet.rx_battery_voltage = rx_battery_voltage;
    packet.rx_mode = rx_mode;
    packet.rx_status = rx_status;
    packet.rx_anlg_en = rx_anlg_en;
    packet.rx_ant_states = rx_ant_states;
    packet.rx_stg_states = rx_stg_states;
    packet.rx_card_det = rx_card_det;
    packet.rx_save_opt = rx_save_opt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE, (const char *)&packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_CRC);
#endif
}

/**
 * @brief Send a ivaq_rx_params_slave message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ivaq_rx_params_slave_send_struct(mavlink_channel_t chan, const mavlink_ivaq_rx_params_slave_t* ivaq_rx_params_slave)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ivaq_rx_params_slave_send(chan, ivaq_rx_params_slave->rx_mode, ivaq_rx_params_slave->rx_status, ivaq_rx_params_slave->rx_anlg_en, ivaq_rx_params_slave->rx_battery_voltage, ivaq_rx_params_slave->rx_ant_states, ivaq_rx_params_slave->rx_stg_states, ivaq_rx_params_slave->rx_card_det, ivaq_rx_params_slave->rx_save_opt);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE, (const char *)ivaq_rx_params_slave, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_CRC);
#endif
}

#if MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ivaq_rx_params_slave_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t rx_mode, uint8_t rx_status, uint8_t rx_anlg_en, float rx_battery_voltage, uint8_t rx_ant_states, uint8_t rx_stg_states, uint8_t rx_card_det, uint8_t rx_save_opt)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, rx_battery_voltage);
    _mav_put_uint8_t(buf, 4, rx_mode);
    _mav_put_uint8_t(buf, 5, rx_status);
    _mav_put_uint8_t(buf, 6, rx_anlg_en);
    _mav_put_uint8_t(buf, 7, rx_ant_states);
    _mav_put_uint8_t(buf, 8, rx_stg_states);
    _mav_put_uint8_t(buf, 9, rx_card_det);
    _mav_put_uint8_t(buf, 10, rx_save_opt);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE, buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_CRC);
#else
    mavlink_ivaq_rx_params_slave_t *packet = (mavlink_ivaq_rx_params_slave_t *)msgbuf;
    packet->rx_battery_voltage = rx_battery_voltage;
    packet->rx_mode = rx_mode;
    packet->rx_status = rx_status;
    packet->rx_anlg_en = rx_anlg_en;
    packet->rx_ant_states = rx_ant_states;
    packet->rx_stg_states = rx_stg_states;
    packet->rx_card_det = rx_card_det;
    packet->rx_save_opt = rx_save_opt;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE, (const char *)packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_CRC);
#endif
}
#endif

#endif

// MESSAGE IVAQ_RX_PARAMS_SLAVE UNPACKING


/**
 * @brief Get field rx_mode from ivaq_rx_params_slave message
 *
 * @return  Ivaq Rx Status
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_slave_get_rx_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field rx_status from ivaq_rx_params_slave message
 *
 * @return  Ivaq Rx Status
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_slave_get_rx_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field rx_anlg_en from ivaq_rx_params_slave message
 *
 * @return  Ivaq Rx Anlg Part Status
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_slave_get_rx_anlg_en(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field rx_battery_voltage from ivaq_rx_params_slave message
 *
 * @return  Ivaq Rx Battery Voltage
 */
static inline float mavlink_msg_ivaq_rx_params_slave_get_rx_battery_voltage(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field rx_ant_states from ivaq_rx_params_slave message
 *
 * @return  Ivaq Rx Antenna States
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_slave_get_rx_ant_states(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field rx_stg_states from ivaq_rx_params_slave message
 *
 * @return  Ivaq Rx Stage States
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_slave_get_rx_stg_states(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field rx_card_det from ivaq_rx_params_slave message
 *
 * @return  Ivaq Rx SD Card State
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_slave_get_rx_card_det(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field rx_save_opt from ivaq_rx_params_slave message
 *
 * @return  Ivaq Rx Save State
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_slave_get_rx_save_opt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Decode a ivaq_rx_params_slave message into a struct
 *
 * @param msg The message to decode
 * @param ivaq_rx_params_slave C-struct to decode the message contents into
 */
static inline void mavlink_msg_ivaq_rx_params_slave_decode(const mavlink_message_t* msg, mavlink_ivaq_rx_params_slave_t* ivaq_rx_params_slave)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ivaq_rx_params_slave->rx_battery_voltage = mavlink_msg_ivaq_rx_params_slave_get_rx_battery_voltage(msg);
    ivaq_rx_params_slave->rx_mode = mavlink_msg_ivaq_rx_params_slave_get_rx_mode(msg);
    ivaq_rx_params_slave->rx_status = mavlink_msg_ivaq_rx_params_slave_get_rx_status(msg);
    ivaq_rx_params_slave->rx_anlg_en = mavlink_msg_ivaq_rx_params_slave_get_rx_anlg_en(msg);
    ivaq_rx_params_slave->rx_ant_states = mavlink_msg_ivaq_rx_params_slave_get_rx_ant_states(msg);
    ivaq_rx_params_slave->rx_stg_states = mavlink_msg_ivaq_rx_params_slave_get_rx_stg_states(msg);
    ivaq_rx_params_slave->rx_card_det = mavlink_msg_ivaq_rx_params_slave_get_rx_card_det(msg);
    ivaq_rx_params_slave->rx_save_opt = mavlink_msg_ivaq_rx_params_slave_get_rx_save_opt(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN? msg->len : MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN;
        memset(ivaq_rx_params_slave, 0, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_LEN);
    memcpy(ivaq_rx_params_slave, _MAV_PAYLOAD(msg), len);
#endif
}
