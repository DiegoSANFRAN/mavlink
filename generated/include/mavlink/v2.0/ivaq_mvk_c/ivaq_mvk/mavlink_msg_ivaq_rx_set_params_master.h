#pragma once
// MESSAGE IVAQ_RX_SET_PARAMS_MASTER PACKING

#define MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER 202


typedef struct __mavlink_ivaq_rx_set_params_master_t {
 uint8_t rx_set_reset_x; /*<  Ivaq Rx X-ant Set Reset*/
 uint8_t rx_set_ant_states_x; /*<  Ivaq Rx X-Ant Set Antenna State*/
 uint8_t rx_set_stg_states_x; /*<  Ivaq Rx X-Ant Set Stage States*/
 uint8_t rx_set_save_opt_x; /*<  Ivaq Rx X-Ant Set Save State*/
 uint8_t rx_set_reset_y; /*<  Ivaq Rx Y-ant Set Reset*/
 uint8_t rx_set_ant_states_y; /*<  Ivaq Rx Y-Ant Set Antenna State*/
 uint8_t rx_set_stg_states_y; /*<  Ivaq Rx Y-Ant Set Stage States*/
 uint8_t rx_set_save_opt_y; /*<  Ivaq Rx Y-Ant Set Save State*/
 uint8_t rx_set_reset_z; /*<  Ivaq Rx Z-ant Set Reset*/
 uint8_t rx_set_ant_states_z; /*<  Ivaq Rx Z-Ant Set Antenna State*/
 uint8_t rx_set_stg_states_z; /*<  Ivaq Rx Z-Ant Set Stage States*/
 uint8_t rx_set_save_opt_z; /*<  Ivaq Rx Z-Ant Set Save State*/
} mavlink_ivaq_rx_set_params_master_t;

#define MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN 12
#define MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_MIN_LEN 12
#define MAVLINK_MSG_ID_202_LEN 12
#define MAVLINK_MSG_ID_202_MIN_LEN 12

#define MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_CRC 80
#define MAVLINK_MSG_ID_202_CRC 80



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_SET_PARAMS_MASTER { \
    202, \
    "IVAQ_RX_SET_PARAMS_MASTER", \
    12, \
    {  { "rx_set_reset_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_reset_x) }, \
         { "rx_set_ant_states_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_ant_states_x) }, \
         { "rx_set_stg_states_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_stg_states_x) }, \
         { "rx_set_save_opt_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_save_opt_x) }, \
         { "rx_set_reset_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_reset_y) }, \
         { "rx_set_ant_states_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_ant_states_y) }, \
         { "rx_set_stg_states_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_stg_states_y) }, \
         { "rx_set_save_opt_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_save_opt_y) }, \
         { "rx_set_reset_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_reset_z) }, \
         { "rx_set_ant_states_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_ant_states_z) }, \
         { "rx_set_stg_states_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_stg_states_z) }, \
         { "rx_set_save_opt_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_save_opt_z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_SET_PARAMS_MASTER { \
    "IVAQ_RX_SET_PARAMS_MASTER", \
    12, \
    {  { "rx_set_reset_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_reset_x) }, \
         { "rx_set_ant_states_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_ant_states_x) }, \
         { "rx_set_stg_states_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_stg_states_x) }, \
         { "rx_set_save_opt_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_save_opt_x) }, \
         { "rx_set_reset_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_reset_y) }, \
         { "rx_set_ant_states_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_ant_states_y) }, \
         { "rx_set_stg_states_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 6, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_stg_states_y) }, \
         { "rx_set_save_opt_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 7, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_save_opt_y) }, \
         { "rx_set_reset_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_reset_z) }, \
         { "rx_set_ant_states_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_ant_states_z) }, \
         { "rx_set_stg_states_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_stg_states_z) }, \
         { "rx_set_save_opt_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 11, offsetof(mavlink_ivaq_rx_set_params_master_t, rx_set_save_opt_z) }, \
         } \
}
#endif

/**
 * @brief Pack a ivaq_rx_set_params_master message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_set_reset_x  Ivaq Rx X-ant Set Reset
 * @param rx_set_ant_states_x  Ivaq Rx X-Ant Set Antenna State
 * @param rx_set_stg_states_x  Ivaq Rx X-Ant Set Stage States
 * @param rx_set_save_opt_x  Ivaq Rx X-Ant Set Save State
 * @param rx_set_reset_y  Ivaq Rx Y-ant Set Reset
 * @param rx_set_ant_states_y  Ivaq Rx Y-Ant Set Antenna State
 * @param rx_set_stg_states_y  Ivaq Rx Y-Ant Set Stage States
 * @param rx_set_save_opt_y  Ivaq Rx Y-Ant Set Save State
 * @param rx_set_reset_z  Ivaq Rx Z-ant Set Reset
 * @param rx_set_ant_states_z  Ivaq Rx Z-Ant Set Antenna State
 * @param rx_set_stg_states_z  Ivaq Rx Z-Ant Set Stage States
 * @param rx_set_save_opt_z  Ivaq Rx Z-Ant Set Save State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_set_params_master_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t rx_set_reset_x, uint8_t rx_set_ant_states_x, uint8_t rx_set_stg_states_x, uint8_t rx_set_save_opt_x, uint8_t rx_set_reset_y, uint8_t rx_set_ant_states_y, uint8_t rx_set_stg_states_y, uint8_t rx_set_save_opt_y, uint8_t rx_set_reset_z, uint8_t rx_set_ant_states_z, uint8_t rx_set_stg_states_z, uint8_t rx_set_save_opt_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN];
    _mav_put_uint8_t(buf, 0, rx_set_reset_x);
    _mav_put_uint8_t(buf, 1, rx_set_ant_states_x);
    _mav_put_uint8_t(buf, 2, rx_set_stg_states_x);
    _mav_put_uint8_t(buf, 3, rx_set_save_opt_x);
    _mav_put_uint8_t(buf, 4, rx_set_reset_y);
    _mav_put_uint8_t(buf, 5, rx_set_ant_states_y);
    _mav_put_uint8_t(buf, 6, rx_set_stg_states_y);
    _mav_put_uint8_t(buf, 7, rx_set_save_opt_y);
    _mav_put_uint8_t(buf, 8, rx_set_reset_z);
    _mav_put_uint8_t(buf, 9, rx_set_ant_states_z);
    _mav_put_uint8_t(buf, 10, rx_set_stg_states_z);
    _mav_put_uint8_t(buf, 11, rx_set_save_opt_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN);
#else
    mavlink_ivaq_rx_set_params_master_t packet;
    packet.rx_set_reset_x = rx_set_reset_x;
    packet.rx_set_ant_states_x = rx_set_ant_states_x;
    packet.rx_set_stg_states_x = rx_set_stg_states_x;
    packet.rx_set_save_opt_x = rx_set_save_opt_x;
    packet.rx_set_reset_y = rx_set_reset_y;
    packet.rx_set_ant_states_y = rx_set_ant_states_y;
    packet.rx_set_stg_states_y = rx_set_stg_states_y;
    packet.rx_set_save_opt_y = rx_set_save_opt_y;
    packet.rx_set_reset_z = rx_set_reset_z;
    packet.rx_set_ant_states_z = rx_set_ant_states_z;
    packet.rx_set_stg_states_z = rx_set_stg_states_z;
    packet.rx_set_save_opt_z = rx_set_save_opt_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_CRC);
}

/**
 * @brief Pack a ivaq_rx_set_params_master message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_set_reset_x  Ivaq Rx X-ant Set Reset
 * @param rx_set_ant_states_x  Ivaq Rx X-Ant Set Antenna State
 * @param rx_set_stg_states_x  Ivaq Rx X-Ant Set Stage States
 * @param rx_set_save_opt_x  Ivaq Rx X-Ant Set Save State
 * @param rx_set_reset_y  Ivaq Rx Y-ant Set Reset
 * @param rx_set_ant_states_y  Ivaq Rx Y-Ant Set Antenna State
 * @param rx_set_stg_states_y  Ivaq Rx Y-Ant Set Stage States
 * @param rx_set_save_opt_y  Ivaq Rx Y-Ant Set Save State
 * @param rx_set_reset_z  Ivaq Rx Z-ant Set Reset
 * @param rx_set_ant_states_z  Ivaq Rx Z-Ant Set Antenna State
 * @param rx_set_stg_states_z  Ivaq Rx Z-Ant Set Stage States
 * @param rx_set_save_opt_z  Ivaq Rx Z-Ant Set Save State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_set_params_master_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t rx_set_reset_x, uint8_t rx_set_ant_states_x, uint8_t rx_set_stg_states_x, uint8_t rx_set_save_opt_x, uint8_t rx_set_reset_y, uint8_t rx_set_ant_states_y, uint8_t rx_set_stg_states_y, uint8_t rx_set_save_opt_y, uint8_t rx_set_reset_z, uint8_t rx_set_ant_states_z, uint8_t rx_set_stg_states_z, uint8_t rx_set_save_opt_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN];
    _mav_put_uint8_t(buf, 0, rx_set_reset_x);
    _mav_put_uint8_t(buf, 1, rx_set_ant_states_x);
    _mav_put_uint8_t(buf, 2, rx_set_stg_states_x);
    _mav_put_uint8_t(buf, 3, rx_set_save_opt_x);
    _mav_put_uint8_t(buf, 4, rx_set_reset_y);
    _mav_put_uint8_t(buf, 5, rx_set_ant_states_y);
    _mav_put_uint8_t(buf, 6, rx_set_stg_states_y);
    _mav_put_uint8_t(buf, 7, rx_set_save_opt_y);
    _mav_put_uint8_t(buf, 8, rx_set_reset_z);
    _mav_put_uint8_t(buf, 9, rx_set_ant_states_z);
    _mav_put_uint8_t(buf, 10, rx_set_stg_states_z);
    _mav_put_uint8_t(buf, 11, rx_set_save_opt_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN);
#else
    mavlink_ivaq_rx_set_params_master_t packet;
    packet.rx_set_reset_x = rx_set_reset_x;
    packet.rx_set_ant_states_x = rx_set_ant_states_x;
    packet.rx_set_stg_states_x = rx_set_stg_states_x;
    packet.rx_set_save_opt_x = rx_set_save_opt_x;
    packet.rx_set_reset_y = rx_set_reset_y;
    packet.rx_set_ant_states_y = rx_set_ant_states_y;
    packet.rx_set_stg_states_y = rx_set_stg_states_y;
    packet.rx_set_save_opt_y = rx_set_save_opt_y;
    packet.rx_set_reset_z = rx_set_reset_z;
    packet.rx_set_ant_states_z = rx_set_ant_states_z;
    packet.rx_set_stg_states_z = rx_set_stg_states_z;
    packet.rx_set_save_opt_z = rx_set_save_opt_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN);
#endif
}

/**
 * @brief Pack a ivaq_rx_set_params_master message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rx_set_reset_x  Ivaq Rx X-ant Set Reset
 * @param rx_set_ant_states_x  Ivaq Rx X-Ant Set Antenna State
 * @param rx_set_stg_states_x  Ivaq Rx X-Ant Set Stage States
 * @param rx_set_save_opt_x  Ivaq Rx X-Ant Set Save State
 * @param rx_set_reset_y  Ivaq Rx Y-ant Set Reset
 * @param rx_set_ant_states_y  Ivaq Rx Y-Ant Set Antenna State
 * @param rx_set_stg_states_y  Ivaq Rx Y-Ant Set Stage States
 * @param rx_set_save_opt_y  Ivaq Rx Y-Ant Set Save State
 * @param rx_set_reset_z  Ivaq Rx Z-ant Set Reset
 * @param rx_set_ant_states_z  Ivaq Rx Z-Ant Set Antenna State
 * @param rx_set_stg_states_z  Ivaq Rx Z-Ant Set Stage States
 * @param rx_set_save_opt_z  Ivaq Rx Z-Ant Set Save State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_set_params_master_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t rx_set_reset_x,uint8_t rx_set_ant_states_x,uint8_t rx_set_stg_states_x,uint8_t rx_set_save_opt_x,uint8_t rx_set_reset_y,uint8_t rx_set_ant_states_y,uint8_t rx_set_stg_states_y,uint8_t rx_set_save_opt_y,uint8_t rx_set_reset_z,uint8_t rx_set_ant_states_z,uint8_t rx_set_stg_states_z,uint8_t rx_set_save_opt_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN];
    _mav_put_uint8_t(buf, 0, rx_set_reset_x);
    _mav_put_uint8_t(buf, 1, rx_set_ant_states_x);
    _mav_put_uint8_t(buf, 2, rx_set_stg_states_x);
    _mav_put_uint8_t(buf, 3, rx_set_save_opt_x);
    _mav_put_uint8_t(buf, 4, rx_set_reset_y);
    _mav_put_uint8_t(buf, 5, rx_set_ant_states_y);
    _mav_put_uint8_t(buf, 6, rx_set_stg_states_y);
    _mav_put_uint8_t(buf, 7, rx_set_save_opt_y);
    _mav_put_uint8_t(buf, 8, rx_set_reset_z);
    _mav_put_uint8_t(buf, 9, rx_set_ant_states_z);
    _mav_put_uint8_t(buf, 10, rx_set_stg_states_z);
    _mav_put_uint8_t(buf, 11, rx_set_save_opt_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN);
#else
    mavlink_ivaq_rx_set_params_master_t packet;
    packet.rx_set_reset_x = rx_set_reset_x;
    packet.rx_set_ant_states_x = rx_set_ant_states_x;
    packet.rx_set_stg_states_x = rx_set_stg_states_x;
    packet.rx_set_save_opt_x = rx_set_save_opt_x;
    packet.rx_set_reset_y = rx_set_reset_y;
    packet.rx_set_ant_states_y = rx_set_ant_states_y;
    packet.rx_set_stg_states_y = rx_set_stg_states_y;
    packet.rx_set_save_opt_y = rx_set_save_opt_y;
    packet.rx_set_reset_z = rx_set_reset_z;
    packet.rx_set_ant_states_z = rx_set_ant_states_z;
    packet.rx_set_stg_states_z = rx_set_stg_states_z;
    packet.rx_set_save_opt_z = rx_set_save_opt_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_CRC);
}

/**
 * @brief Encode a ivaq_rx_set_params_master struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_set_params_master C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_set_params_master_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ivaq_rx_set_params_master_t* ivaq_rx_set_params_master)
{
    return mavlink_msg_ivaq_rx_set_params_master_pack(system_id, component_id, msg, ivaq_rx_set_params_master->rx_set_reset_x, ivaq_rx_set_params_master->rx_set_ant_states_x, ivaq_rx_set_params_master->rx_set_stg_states_x, ivaq_rx_set_params_master->rx_set_save_opt_x, ivaq_rx_set_params_master->rx_set_reset_y, ivaq_rx_set_params_master->rx_set_ant_states_y, ivaq_rx_set_params_master->rx_set_stg_states_y, ivaq_rx_set_params_master->rx_set_save_opt_y, ivaq_rx_set_params_master->rx_set_reset_z, ivaq_rx_set_params_master->rx_set_ant_states_z, ivaq_rx_set_params_master->rx_set_stg_states_z, ivaq_rx_set_params_master->rx_set_save_opt_z);
}

/**
 * @brief Encode a ivaq_rx_set_params_master struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_set_params_master C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_set_params_master_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ivaq_rx_set_params_master_t* ivaq_rx_set_params_master)
{
    return mavlink_msg_ivaq_rx_set_params_master_pack_chan(system_id, component_id, chan, msg, ivaq_rx_set_params_master->rx_set_reset_x, ivaq_rx_set_params_master->rx_set_ant_states_x, ivaq_rx_set_params_master->rx_set_stg_states_x, ivaq_rx_set_params_master->rx_set_save_opt_x, ivaq_rx_set_params_master->rx_set_reset_y, ivaq_rx_set_params_master->rx_set_ant_states_y, ivaq_rx_set_params_master->rx_set_stg_states_y, ivaq_rx_set_params_master->rx_set_save_opt_y, ivaq_rx_set_params_master->rx_set_reset_z, ivaq_rx_set_params_master->rx_set_ant_states_z, ivaq_rx_set_params_master->rx_set_stg_states_z, ivaq_rx_set_params_master->rx_set_save_opt_z);
}

/**
 * @brief Encode a ivaq_rx_set_params_master struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_set_params_master C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_set_params_master_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ivaq_rx_set_params_master_t* ivaq_rx_set_params_master)
{
    return mavlink_msg_ivaq_rx_set_params_master_pack_status(system_id, component_id, _status, msg,  ivaq_rx_set_params_master->rx_set_reset_x, ivaq_rx_set_params_master->rx_set_ant_states_x, ivaq_rx_set_params_master->rx_set_stg_states_x, ivaq_rx_set_params_master->rx_set_save_opt_x, ivaq_rx_set_params_master->rx_set_reset_y, ivaq_rx_set_params_master->rx_set_ant_states_y, ivaq_rx_set_params_master->rx_set_stg_states_y, ivaq_rx_set_params_master->rx_set_save_opt_y, ivaq_rx_set_params_master->rx_set_reset_z, ivaq_rx_set_params_master->rx_set_ant_states_z, ivaq_rx_set_params_master->rx_set_stg_states_z, ivaq_rx_set_params_master->rx_set_save_opt_z);
}

/**
 * @brief Send a ivaq_rx_set_params_master message
 * @param chan MAVLink channel to send the message
 *
 * @param rx_set_reset_x  Ivaq Rx X-ant Set Reset
 * @param rx_set_ant_states_x  Ivaq Rx X-Ant Set Antenna State
 * @param rx_set_stg_states_x  Ivaq Rx X-Ant Set Stage States
 * @param rx_set_save_opt_x  Ivaq Rx X-Ant Set Save State
 * @param rx_set_reset_y  Ivaq Rx Y-ant Set Reset
 * @param rx_set_ant_states_y  Ivaq Rx Y-Ant Set Antenna State
 * @param rx_set_stg_states_y  Ivaq Rx Y-Ant Set Stage States
 * @param rx_set_save_opt_y  Ivaq Rx Y-Ant Set Save State
 * @param rx_set_reset_z  Ivaq Rx Z-ant Set Reset
 * @param rx_set_ant_states_z  Ivaq Rx Z-Ant Set Antenna State
 * @param rx_set_stg_states_z  Ivaq Rx Z-Ant Set Stage States
 * @param rx_set_save_opt_z  Ivaq Rx Z-Ant Set Save State
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ivaq_rx_set_params_master_send(mavlink_channel_t chan, uint8_t rx_set_reset_x, uint8_t rx_set_ant_states_x, uint8_t rx_set_stg_states_x, uint8_t rx_set_save_opt_x, uint8_t rx_set_reset_y, uint8_t rx_set_ant_states_y, uint8_t rx_set_stg_states_y, uint8_t rx_set_save_opt_y, uint8_t rx_set_reset_z, uint8_t rx_set_ant_states_z, uint8_t rx_set_stg_states_z, uint8_t rx_set_save_opt_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN];
    _mav_put_uint8_t(buf, 0, rx_set_reset_x);
    _mav_put_uint8_t(buf, 1, rx_set_ant_states_x);
    _mav_put_uint8_t(buf, 2, rx_set_stg_states_x);
    _mav_put_uint8_t(buf, 3, rx_set_save_opt_x);
    _mav_put_uint8_t(buf, 4, rx_set_reset_y);
    _mav_put_uint8_t(buf, 5, rx_set_ant_states_y);
    _mav_put_uint8_t(buf, 6, rx_set_stg_states_y);
    _mav_put_uint8_t(buf, 7, rx_set_save_opt_y);
    _mav_put_uint8_t(buf, 8, rx_set_reset_z);
    _mav_put_uint8_t(buf, 9, rx_set_ant_states_z);
    _mav_put_uint8_t(buf, 10, rx_set_stg_states_z);
    _mav_put_uint8_t(buf, 11, rx_set_save_opt_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER, buf, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_CRC);
#else
    mavlink_ivaq_rx_set_params_master_t packet;
    packet.rx_set_reset_x = rx_set_reset_x;
    packet.rx_set_ant_states_x = rx_set_ant_states_x;
    packet.rx_set_stg_states_x = rx_set_stg_states_x;
    packet.rx_set_save_opt_x = rx_set_save_opt_x;
    packet.rx_set_reset_y = rx_set_reset_y;
    packet.rx_set_ant_states_y = rx_set_ant_states_y;
    packet.rx_set_stg_states_y = rx_set_stg_states_y;
    packet.rx_set_save_opt_y = rx_set_save_opt_y;
    packet.rx_set_reset_z = rx_set_reset_z;
    packet.rx_set_ant_states_z = rx_set_ant_states_z;
    packet.rx_set_stg_states_z = rx_set_stg_states_z;
    packet.rx_set_save_opt_z = rx_set_save_opt_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER, (const char *)&packet, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_CRC);
#endif
}

/**
 * @brief Send a ivaq_rx_set_params_master message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ivaq_rx_set_params_master_send_struct(mavlink_channel_t chan, const mavlink_ivaq_rx_set_params_master_t* ivaq_rx_set_params_master)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ivaq_rx_set_params_master_send(chan, ivaq_rx_set_params_master->rx_set_reset_x, ivaq_rx_set_params_master->rx_set_ant_states_x, ivaq_rx_set_params_master->rx_set_stg_states_x, ivaq_rx_set_params_master->rx_set_save_opt_x, ivaq_rx_set_params_master->rx_set_reset_y, ivaq_rx_set_params_master->rx_set_ant_states_y, ivaq_rx_set_params_master->rx_set_stg_states_y, ivaq_rx_set_params_master->rx_set_save_opt_y, ivaq_rx_set_params_master->rx_set_reset_z, ivaq_rx_set_params_master->rx_set_ant_states_z, ivaq_rx_set_params_master->rx_set_stg_states_z, ivaq_rx_set_params_master->rx_set_save_opt_z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER, (const char *)ivaq_rx_set_params_master, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_CRC);
#endif
}

#if MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ivaq_rx_set_params_master_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t rx_set_reset_x, uint8_t rx_set_ant_states_x, uint8_t rx_set_stg_states_x, uint8_t rx_set_save_opt_x, uint8_t rx_set_reset_y, uint8_t rx_set_ant_states_y, uint8_t rx_set_stg_states_y, uint8_t rx_set_save_opt_y, uint8_t rx_set_reset_z, uint8_t rx_set_ant_states_z, uint8_t rx_set_stg_states_z, uint8_t rx_set_save_opt_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, rx_set_reset_x);
    _mav_put_uint8_t(buf, 1, rx_set_ant_states_x);
    _mav_put_uint8_t(buf, 2, rx_set_stg_states_x);
    _mav_put_uint8_t(buf, 3, rx_set_save_opt_x);
    _mav_put_uint8_t(buf, 4, rx_set_reset_y);
    _mav_put_uint8_t(buf, 5, rx_set_ant_states_y);
    _mav_put_uint8_t(buf, 6, rx_set_stg_states_y);
    _mav_put_uint8_t(buf, 7, rx_set_save_opt_y);
    _mav_put_uint8_t(buf, 8, rx_set_reset_z);
    _mav_put_uint8_t(buf, 9, rx_set_ant_states_z);
    _mav_put_uint8_t(buf, 10, rx_set_stg_states_z);
    _mav_put_uint8_t(buf, 11, rx_set_save_opt_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER, buf, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_CRC);
#else
    mavlink_ivaq_rx_set_params_master_t *packet = (mavlink_ivaq_rx_set_params_master_t *)msgbuf;
    packet->rx_set_reset_x = rx_set_reset_x;
    packet->rx_set_ant_states_x = rx_set_ant_states_x;
    packet->rx_set_stg_states_x = rx_set_stg_states_x;
    packet->rx_set_save_opt_x = rx_set_save_opt_x;
    packet->rx_set_reset_y = rx_set_reset_y;
    packet->rx_set_ant_states_y = rx_set_ant_states_y;
    packet->rx_set_stg_states_y = rx_set_stg_states_y;
    packet->rx_set_save_opt_y = rx_set_save_opt_y;
    packet->rx_set_reset_z = rx_set_reset_z;
    packet->rx_set_ant_states_z = rx_set_ant_states_z;
    packet->rx_set_stg_states_z = rx_set_stg_states_z;
    packet->rx_set_save_opt_z = rx_set_save_opt_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER, (const char *)packet, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_CRC);
#endif
}
#endif

#endif

// MESSAGE IVAQ_RX_SET_PARAMS_MASTER UNPACKING


/**
 * @brief Get field rx_set_reset_x from ivaq_rx_set_params_master message
 *
 * @return  Ivaq Rx X-ant Set Reset
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_master_get_rx_set_reset_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field rx_set_ant_states_x from ivaq_rx_set_params_master message
 *
 * @return  Ivaq Rx X-Ant Set Antenna State
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_master_get_rx_set_ant_states_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field rx_set_stg_states_x from ivaq_rx_set_params_master message
 *
 * @return  Ivaq Rx X-Ant Set Stage States
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_master_get_rx_set_stg_states_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field rx_set_save_opt_x from ivaq_rx_set_params_master message
 *
 * @return  Ivaq Rx X-Ant Set Save State
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_master_get_rx_set_save_opt_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field rx_set_reset_y from ivaq_rx_set_params_master message
 *
 * @return  Ivaq Rx Y-ant Set Reset
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_master_get_rx_set_reset_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field rx_set_ant_states_y from ivaq_rx_set_params_master message
 *
 * @return  Ivaq Rx Y-Ant Set Antenna State
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_master_get_rx_set_ant_states_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field rx_set_stg_states_y from ivaq_rx_set_params_master message
 *
 * @return  Ivaq Rx Y-Ant Set Stage States
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_master_get_rx_set_stg_states_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  6);
}

/**
 * @brief Get field rx_set_save_opt_y from ivaq_rx_set_params_master message
 *
 * @return  Ivaq Rx Y-Ant Set Save State
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_master_get_rx_set_save_opt_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  7);
}

/**
 * @brief Get field rx_set_reset_z from ivaq_rx_set_params_master message
 *
 * @return  Ivaq Rx Z-ant Set Reset
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_master_get_rx_set_reset_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field rx_set_ant_states_z from ivaq_rx_set_params_master message
 *
 * @return  Ivaq Rx Z-Ant Set Antenna State
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_master_get_rx_set_ant_states_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field rx_set_stg_states_z from ivaq_rx_set_params_master message
 *
 * @return  Ivaq Rx Z-Ant Set Stage States
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_master_get_rx_set_stg_states_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Get field rx_set_save_opt_z from ivaq_rx_set_params_master message
 *
 * @return  Ivaq Rx Z-Ant Set Save State
 */
static inline uint8_t mavlink_msg_ivaq_rx_set_params_master_get_rx_set_save_opt_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  11);
}

/**
 * @brief Decode a ivaq_rx_set_params_master message into a struct
 *
 * @param msg The message to decode
 * @param ivaq_rx_set_params_master C-struct to decode the message contents into
 */
static inline void mavlink_msg_ivaq_rx_set_params_master_decode(const mavlink_message_t* msg, mavlink_ivaq_rx_set_params_master_t* ivaq_rx_set_params_master)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ivaq_rx_set_params_master->rx_set_reset_x = mavlink_msg_ivaq_rx_set_params_master_get_rx_set_reset_x(msg);
    ivaq_rx_set_params_master->rx_set_ant_states_x = mavlink_msg_ivaq_rx_set_params_master_get_rx_set_ant_states_x(msg);
    ivaq_rx_set_params_master->rx_set_stg_states_x = mavlink_msg_ivaq_rx_set_params_master_get_rx_set_stg_states_x(msg);
    ivaq_rx_set_params_master->rx_set_save_opt_x = mavlink_msg_ivaq_rx_set_params_master_get_rx_set_save_opt_x(msg);
    ivaq_rx_set_params_master->rx_set_reset_y = mavlink_msg_ivaq_rx_set_params_master_get_rx_set_reset_y(msg);
    ivaq_rx_set_params_master->rx_set_ant_states_y = mavlink_msg_ivaq_rx_set_params_master_get_rx_set_ant_states_y(msg);
    ivaq_rx_set_params_master->rx_set_stg_states_y = mavlink_msg_ivaq_rx_set_params_master_get_rx_set_stg_states_y(msg);
    ivaq_rx_set_params_master->rx_set_save_opt_y = mavlink_msg_ivaq_rx_set_params_master_get_rx_set_save_opt_y(msg);
    ivaq_rx_set_params_master->rx_set_reset_z = mavlink_msg_ivaq_rx_set_params_master_get_rx_set_reset_z(msg);
    ivaq_rx_set_params_master->rx_set_ant_states_z = mavlink_msg_ivaq_rx_set_params_master_get_rx_set_ant_states_z(msg);
    ivaq_rx_set_params_master->rx_set_stg_states_z = mavlink_msg_ivaq_rx_set_params_master_get_rx_set_stg_states_z(msg);
    ivaq_rx_set_params_master->rx_set_save_opt_z = mavlink_msg_ivaq_rx_set_params_master_get_rx_set_save_opt_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN? msg->len : MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN;
        memset(ivaq_rx_set_params_master, 0, MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_LEN);
    memcpy(ivaq_rx_set_params_master, _MAV_PAYLOAD(msg), len);
#endif
}
