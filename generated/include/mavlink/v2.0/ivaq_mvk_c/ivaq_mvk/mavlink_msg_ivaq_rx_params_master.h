#pragma once
// MESSAGE IVAQ_RX_PARAMS_MASTER PACKING

#define MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER 200


typedef struct __mavlink_ivaq_rx_params_master_t {
 float rx_battery_voltage_x; /*<  Ivaq Rx X-Ant Battery Voltage*/
 float rx_battery_voltage_y; /*<  Ivaq Rx Y-Ant Battery Voltage*/
 float rx_battery_voltage_z; /*<  Ivaq Rx Z-Ant Battery Voltage*/
 uint8_t rx_mode_x; /*<  Ivaq Rx X-Ant Mode*/
 uint8_t rx_status_x; /*<  Ivaq Rx X-Ant Status*/
 uint8_t rx_ant_states_x; /*<  Ivaq Rx X-Ant Antenna States*/
 uint8_t rx_stg_states_x; /*<  Ivaq Rx X-Ant Stage States*/
 uint8_t rx_card_det_x; /*<  Ivaq Rx X-Ant SD Card State*/
 uint8_t rx_save_opt_x; /*<  Ivaq Rx X-Ant Save State*/
 uint8_t rx_mode_y; /*<  Ivaq Rx Y-Ant Mode*/
 uint8_t rx_status_y; /*<  Ivaq Rx Y-Ant Status*/
 uint8_t rx_ant_states_y; /*<  Ivaq Rx Y-Ant Antenna States*/
 uint8_t rx_stg_states_y; /*<  Ivaq Rx Y-Ant Stage States*/
 uint8_t rx_card_det_y; /*<  Ivaq Rx Y-Ant SD Card State*/
 uint8_t rx_save_opt_y; /*<  Ivaq Rx Y-Ant Save State*/
 uint8_t rx_mode_z; /*<  Ivaq Rx Z-Ant Mode*/
 uint8_t rx_status_z; /*<  Ivaq Rx Z-Ant Status*/
 uint8_t rx_ant_states_z; /*<  Ivaq Rx Z-Ant Antenna States*/
 uint8_t rx_stg_states_z; /*<  Ivaq Rx Z-Ant Stage States*/
 uint8_t rx_card_det_z; /*<  Ivaq Rx Z-Ant SD Card State*/
 uint8_t rx_save_opt_z; /*<  Ivaq Rx Z-Ant Save State*/
} mavlink_ivaq_rx_params_master_t;

#define MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN 30
#define MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_MIN_LEN 30
#define MAVLINK_MSG_ID_200_LEN 30
#define MAVLINK_MSG_ID_200_MIN_LEN 30

#define MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_CRC 62
#define MAVLINK_MSG_ID_200_CRC 62



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_PARAMS_MASTER { \
    200, \
    "IVAQ_RX_PARAMS_MASTER", \
    21, \
    {  { "rx_mode_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_ivaq_rx_params_master_t, rx_mode_x) }, \
         { "rx_status_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_ivaq_rx_params_master_t, rx_status_x) }, \
         { "rx_battery_voltage_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ivaq_rx_params_master_t, rx_battery_voltage_x) }, \
         { "rx_ant_states_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_ivaq_rx_params_master_t, rx_ant_states_x) }, \
         { "rx_stg_states_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_ivaq_rx_params_master_t, rx_stg_states_x) }, \
         { "rx_card_det_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_ivaq_rx_params_master_t, rx_card_det_x) }, \
         { "rx_save_opt_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_ivaq_rx_params_master_t, rx_save_opt_x) }, \
         { "rx_mode_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_ivaq_rx_params_master_t, rx_mode_y) }, \
         { "rx_status_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_ivaq_rx_params_master_t, rx_status_y) }, \
         { "rx_battery_voltage_y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ivaq_rx_params_master_t, rx_battery_voltage_y) }, \
         { "rx_ant_states_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_ivaq_rx_params_master_t, rx_ant_states_y) }, \
         { "rx_stg_states_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_ivaq_rx_params_master_t, rx_stg_states_y) }, \
         { "rx_card_det_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_ivaq_rx_params_master_t, rx_card_det_y) }, \
         { "rx_save_opt_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 23, offsetof(mavlink_ivaq_rx_params_master_t, rx_save_opt_y) }, \
         { "rx_mode_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_ivaq_rx_params_master_t, rx_mode_z) }, \
         { "rx_status_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_ivaq_rx_params_master_t, rx_status_z) }, \
         { "rx_battery_voltage_z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ivaq_rx_params_master_t, rx_battery_voltage_z) }, \
         { "rx_ant_states_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_ivaq_rx_params_master_t, rx_ant_states_z) }, \
         { "rx_stg_states_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_ivaq_rx_params_master_t, rx_stg_states_z) }, \
         { "rx_card_det_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_ivaq_rx_params_master_t, rx_card_det_z) }, \
         { "rx_save_opt_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_ivaq_rx_params_master_t, rx_save_opt_z) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_PARAMS_MASTER { \
    "IVAQ_RX_PARAMS_MASTER", \
    21, \
    {  { "rx_mode_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 12, offsetof(mavlink_ivaq_rx_params_master_t, rx_mode_x) }, \
         { "rx_status_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 13, offsetof(mavlink_ivaq_rx_params_master_t, rx_status_x) }, \
         { "rx_battery_voltage_x", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_ivaq_rx_params_master_t, rx_battery_voltage_x) }, \
         { "rx_ant_states_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 14, offsetof(mavlink_ivaq_rx_params_master_t, rx_ant_states_x) }, \
         { "rx_stg_states_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 15, offsetof(mavlink_ivaq_rx_params_master_t, rx_stg_states_x) }, \
         { "rx_card_det_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_ivaq_rx_params_master_t, rx_card_det_x) }, \
         { "rx_save_opt_x", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_ivaq_rx_params_master_t, rx_save_opt_x) }, \
         { "rx_mode_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_ivaq_rx_params_master_t, rx_mode_y) }, \
         { "rx_status_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_ivaq_rx_params_master_t, rx_status_y) }, \
         { "rx_battery_voltage_y", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ivaq_rx_params_master_t, rx_battery_voltage_y) }, \
         { "rx_ant_states_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 20, offsetof(mavlink_ivaq_rx_params_master_t, rx_ant_states_y) }, \
         { "rx_stg_states_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 21, offsetof(mavlink_ivaq_rx_params_master_t, rx_stg_states_y) }, \
         { "rx_card_det_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 22, offsetof(mavlink_ivaq_rx_params_master_t, rx_card_det_y) }, \
         { "rx_save_opt_y", NULL, MAVLINK_TYPE_UINT8_T, 0, 23, offsetof(mavlink_ivaq_rx_params_master_t, rx_save_opt_y) }, \
         { "rx_mode_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_ivaq_rx_params_master_t, rx_mode_z) }, \
         { "rx_status_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_ivaq_rx_params_master_t, rx_status_z) }, \
         { "rx_battery_voltage_z", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ivaq_rx_params_master_t, rx_battery_voltage_z) }, \
         { "rx_ant_states_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 26, offsetof(mavlink_ivaq_rx_params_master_t, rx_ant_states_z) }, \
         { "rx_stg_states_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 27, offsetof(mavlink_ivaq_rx_params_master_t, rx_stg_states_z) }, \
         { "rx_card_det_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_ivaq_rx_params_master_t, rx_card_det_z) }, \
         { "rx_save_opt_z", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_ivaq_rx_params_master_t, rx_save_opt_z) }, \
         } \
}
#endif

/**
 * @brief Pack a ivaq_rx_params_master message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_mode_x  Ivaq Rx X-Ant Mode
 * @param rx_status_x  Ivaq Rx X-Ant Status
 * @param rx_battery_voltage_x  Ivaq Rx X-Ant Battery Voltage
 * @param rx_ant_states_x  Ivaq Rx X-Ant Antenna States
 * @param rx_stg_states_x  Ivaq Rx X-Ant Stage States
 * @param rx_card_det_x  Ivaq Rx X-Ant SD Card State
 * @param rx_save_opt_x  Ivaq Rx X-Ant Save State
 * @param rx_mode_y  Ivaq Rx Y-Ant Mode
 * @param rx_status_y  Ivaq Rx Y-Ant Status
 * @param rx_battery_voltage_y  Ivaq Rx Y-Ant Battery Voltage
 * @param rx_ant_states_y  Ivaq Rx Y-Ant Antenna States
 * @param rx_stg_states_y  Ivaq Rx Y-Ant Stage States
 * @param rx_card_det_y  Ivaq Rx Y-Ant SD Card State
 * @param rx_save_opt_y  Ivaq Rx Y-Ant Save State
 * @param rx_mode_z  Ivaq Rx Z-Ant Mode
 * @param rx_status_z  Ivaq Rx Z-Ant Status
 * @param rx_battery_voltage_z  Ivaq Rx Z-Ant Battery Voltage
 * @param rx_ant_states_z  Ivaq Rx Z-Ant Antenna States
 * @param rx_stg_states_z  Ivaq Rx Z-Ant Stage States
 * @param rx_card_det_z  Ivaq Rx Z-Ant SD Card State
 * @param rx_save_opt_z  Ivaq Rx Z-Ant Save State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_master_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t rx_mode_x, uint8_t rx_status_x, float rx_battery_voltage_x, uint8_t rx_ant_states_x, uint8_t rx_stg_states_x, uint8_t rx_card_det_x, uint8_t rx_save_opt_x, uint8_t rx_mode_y, uint8_t rx_status_y, float rx_battery_voltage_y, uint8_t rx_ant_states_y, uint8_t rx_stg_states_y, uint8_t rx_card_det_y, uint8_t rx_save_opt_y, uint8_t rx_mode_z, uint8_t rx_status_z, float rx_battery_voltage_z, uint8_t rx_ant_states_z, uint8_t rx_stg_states_z, uint8_t rx_card_det_z, uint8_t rx_save_opt_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN];
    _mav_put_float(buf, 0, rx_battery_voltage_x);
    _mav_put_float(buf, 4, rx_battery_voltage_y);
    _mav_put_float(buf, 8, rx_battery_voltage_z);
    _mav_put_uint8_t(buf, 12, rx_mode_x);
    _mav_put_uint8_t(buf, 13, rx_status_x);
    _mav_put_uint8_t(buf, 14, rx_ant_states_x);
    _mav_put_uint8_t(buf, 15, rx_stg_states_x);
    _mav_put_uint8_t(buf, 16, rx_card_det_x);
    _mav_put_uint8_t(buf, 17, rx_save_opt_x);
    _mav_put_uint8_t(buf, 18, rx_mode_y);
    _mav_put_uint8_t(buf, 19, rx_status_y);
    _mav_put_uint8_t(buf, 20, rx_ant_states_y);
    _mav_put_uint8_t(buf, 21, rx_stg_states_y);
    _mav_put_uint8_t(buf, 22, rx_card_det_y);
    _mav_put_uint8_t(buf, 23, rx_save_opt_y);
    _mav_put_uint8_t(buf, 24, rx_mode_z);
    _mav_put_uint8_t(buf, 25, rx_status_z);
    _mav_put_uint8_t(buf, 26, rx_ant_states_z);
    _mav_put_uint8_t(buf, 27, rx_stg_states_z);
    _mav_put_uint8_t(buf, 28, rx_card_det_z);
    _mav_put_uint8_t(buf, 29, rx_save_opt_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN);
#else
    mavlink_ivaq_rx_params_master_t packet;
    packet.rx_battery_voltage_x = rx_battery_voltage_x;
    packet.rx_battery_voltage_y = rx_battery_voltage_y;
    packet.rx_battery_voltage_z = rx_battery_voltage_z;
    packet.rx_mode_x = rx_mode_x;
    packet.rx_status_x = rx_status_x;
    packet.rx_ant_states_x = rx_ant_states_x;
    packet.rx_stg_states_x = rx_stg_states_x;
    packet.rx_card_det_x = rx_card_det_x;
    packet.rx_save_opt_x = rx_save_opt_x;
    packet.rx_mode_y = rx_mode_y;
    packet.rx_status_y = rx_status_y;
    packet.rx_ant_states_y = rx_ant_states_y;
    packet.rx_stg_states_y = rx_stg_states_y;
    packet.rx_card_det_y = rx_card_det_y;
    packet.rx_save_opt_y = rx_save_opt_y;
    packet.rx_mode_z = rx_mode_z;
    packet.rx_status_z = rx_status_z;
    packet.rx_ant_states_z = rx_ant_states_z;
    packet.rx_stg_states_z = rx_stg_states_z;
    packet.rx_card_det_z = rx_card_det_z;
    packet.rx_save_opt_z = rx_save_opt_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_CRC);
}

/**
 * @brief Pack a ivaq_rx_params_master message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_mode_x  Ivaq Rx X-Ant Mode
 * @param rx_status_x  Ivaq Rx X-Ant Status
 * @param rx_battery_voltage_x  Ivaq Rx X-Ant Battery Voltage
 * @param rx_ant_states_x  Ivaq Rx X-Ant Antenna States
 * @param rx_stg_states_x  Ivaq Rx X-Ant Stage States
 * @param rx_card_det_x  Ivaq Rx X-Ant SD Card State
 * @param rx_save_opt_x  Ivaq Rx X-Ant Save State
 * @param rx_mode_y  Ivaq Rx Y-Ant Mode
 * @param rx_status_y  Ivaq Rx Y-Ant Status
 * @param rx_battery_voltage_y  Ivaq Rx Y-Ant Battery Voltage
 * @param rx_ant_states_y  Ivaq Rx Y-Ant Antenna States
 * @param rx_stg_states_y  Ivaq Rx Y-Ant Stage States
 * @param rx_card_det_y  Ivaq Rx Y-Ant SD Card State
 * @param rx_save_opt_y  Ivaq Rx Y-Ant Save State
 * @param rx_mode_z  Ivaq Rx Z-Ant Mode
 * @param rx_status_z  Ivaq Rx Z-Ant Status
 * @param rx_battery_voltage_z  Ivaq Rx Z-Ant Battery Voltage
 * @param rx_ant_states_z  Ivaq Rx Z-Ant Antenna States
 * @param rx_stg_states_z  Ivaq Rx Z-Ant Stage States
 * @param rx_card_det_z  Ivaq Rx Z-Ant SD Card State
 * @param rx_save_opt_z  Ivaq Rx Z-Ant Save State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_master_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t rx_mode_x, uint8_t rx_status_x, float rx_battery_voltage_x, uint8_t rx_ant_states_x, uint8_t rx_stg_states_x, uint8_t rx_card_det_x, uint8_t rx_save_opt_x, uint8_t rx_mode_y, uint8_t rx_status_y, float rx_battery_voltage_y, uint8_t rx_ant_states_y, uint8_t rx_stg_states_y, uint8_t rx_card_det_y, uint8_t rx_save_opt_y, uint8_t rx_mode_z, uint8_t rx_status_z, float rx_battery_voltage_z, uint8_t rx_ant_states_z, uint8_t rx_stg_states_z, uint8_t rx_card_det_z, uint8_t rx_save_opt_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN];
    _mav_put_float(buf, 0, rx_battery_voltage_x);
    _mav_put_float(buf, 4, rx_battery_voltage_y);
    _mav_put_float(buf, 8, rx_battery_voltage_z);
    _mav_put_uint8_t(buf, 12, rx_mode_x);
    _mav_put_uint8_t(buf, 13, rx_status_x);
    _mav_put_uint8_t(buf, 14, rx_ant_states_x);
    _mav_put_uint8_t(buf, 15, rx_stg_states_x);
    _mav_put_uint8_t(buf, 16, rx_card_det_x);
    _mav_put_uint8_t(buf, 17, rx_save_opt_x);
    _mav_put_uint8_t(buf, 18, rx_mode_y);
    _mav_put_uint8_t(buf, 19, rx_status_y);
    _mav_put_uint8_t(buf, 20, rx_ant_states_y);
    _mav_put_uint8_t(buf, 21, rx_stg_states_y);
    _mav_put_uint8_t(buf, 22, rx_card_det_y);
    _mav_put_uint8_t(buf, 23, rx_save_opt_y);
    _mav_put_uint8_t(buf, 24, rx_mode_z);
    _mav_put_uint8_t(buf, 25, rx_status_z);
    _mav_put_uint8_t(buf, 26, rx_ant_states_z);
    _mav_put_uint8_t(buf, 27, rx_stg_states_z);
    _mav_put_uint8_t(buf, 28, rx_card_det_z);
    _mav_put_uint8_t(buf, 29, rx_save_opt_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN);
#else
    mavlink_ivaq_rx_params_master_t packet;
    packet.rx_battery_voltage_x = rx_battery_voltage_x;
    packet.rx_battery_voltage_y = rx_battery_voltage_y;
    packet.rx_battery_voltage_z = rx_battery_voltage_z;
    packet.rx_mode_x = rx_mode_x;
    packet.rx_status_x = rx_status_x;
    packet.rx_ant_states_x = rx_ant_states_x;
    packet.rx_stg_states_x = rx_stg_states_x;
    packet.rx_card_det_x = rx_card_det_x;
    packet.rx_save_opt_x = rx_save_opt_x;
    packet.rx_mode_y = rx_mode_y;
    packet.rx_status_y = rx_status_y;
    packet.rx_ant_states_y = rx_ant_states_y;
    packet.rx_stg_states_y = rx_stg_states_y;
    packet.rx_card_det_y = rx_card_det_y;
    packet.rx_save_opt_y = rx_save_opt_y;
    packet.rx_mode_z = rx_mode_z;
    packet.rx_status_z = rx_status_z;
    packet.rx_ant_states_z = rx_ant_states_z;
    packet.rx_stg_states_z = rx_stg_states_z;
    packet.rx_card_det_z = rx_card_det_z;
    packet.rx_save_opt_z = rx_save_opt_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN);
#endif
}

/**
 * @brief Pack a ivaq_rx_params_master message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rx_mode_x  Ivaq Rx X-Ant Mode
 * @param rx_status_x  Ivaq Rx X-Ant Status
 * @param rx_battery_voltage_x  Ivaq Rx X-Ant Battery Voltage
 * @param rx_ant_states_x  Ivaq Rx X-Ant Antenna States
 * @param rx_stg_states_x  Ivaq Rx X-Ant Stage States
 * @param rx_card_det_x  Ivaq Rx X-Ant SD Card State
 * @param rx_save_opt_x  Ivaq Rx X-Ant Save State
 * @param rx_mode_y  Ivaq Rx Y-Ant Mode
 * @param rx_status_y  Ivaq Rx Y-Ant Status
 * @param rx_battery_voltage_y  Ivaq Rx Y-Ant Battery Voltage
 * @param rx_ant_states_y  Ivaq Rx Y-Ant Antenna States
 * @param rx_stg_states_y  Ivaq Rx Y-Ant Stage States
 * @param rx_card_det_y  Ivaq Rx Y-Ant SD Card State
 * @param rx_save_opt_y  Ivaq Rx Y-Ant Save State
 * @param rx_mode_z  Ivaq Rx Z-Ant Mode
 * @param rx_status_z  Ivaq Rx Z-Ant Status
 * @param rx_battery_voltage_z  Ivaq Rx Z-Ant Battery Voltage
 * @param rx_ant_states_z  Ivaq Rx Z-Ant Antenna States
 * @param rx_stg_states_z  Ivaq Rx Z-Ant Stage States
 * @param rx_card_det_z  Ivaq Rx Z-Ant SD Card State
 * @param rx_save_opt_z  Ivaq Rx Z-Ant Save State
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_master_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t rx_mode_x,uint8_t rx_status_x,float rx_battery_voltage_x,uint8_t rx_ant_states_x,uint8_t rx_stg_states_x,uint8_t rx_card_det_x,uint8_t rx_save_opt_x,uint8_t rx_mode_y,uint8_t rx_status_y,float rx_battery_voltage_y,uint8_t rx_ant_states_y,uint8_t rx_stg_states_y,uint8_t rx_card_det_y,uint8_t rx_save_opt_y,uint8_t rx_mode_z,uint8_t rx_status_z,float rx_battery_voltage_z,uint8_t rx_ant_states_z,uint8_t rx_stg_states_z,uint8_t rx_card_det_z,uint8_t rx_save_opt_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN];
    _mav_put_float(buf, 0, rx_battery_voltage_x);
    _mav_put_float(buf, 4, rx_battery_voltage_y);
    _mav_put_float(buf, 8, rx_battery_voltage_z);
    _mav_put_uint8_t(buf, 12, rx_mode_x);
    _mav_put_uint8_t(buf, 13, rx_status_x);
    _mav_put_uint8_t(buf, 14, rx_ant_states_x);
    _mav_put_uint8_t(buf, 15, rx_stg_states_x);
    _mav_put_uint8_t(buf, 16, rx_card_det_x);
    _mav_put_uint8_t(buf, 17, rx_save_opt_x);
    _mav_put_uint8_t(buf, 18, rx_mode_y);
    _mav_put_uint8_t(buf, 19, rx_status_y);
    _mav_put_uint8_t(buf, 20, rx_ant_states_y);
    _mav_put_uint8_t(buf, 21, rx_stg_states_y);
    _mav_put_uint8_t(buf, 22, rx_card_det_y);
    _mav_put_uint8_t(buf, 23, rx_save_opt_y);
    _mav_put_uint8_t(buf, 24, rx_mode_z);
    _mav_put_uint8_t(buf, 25, rx_status_z);
    _mav_put_uint8_t(buf, 26, rx_ant_states_z);
    _mav_put_uint8_t(buf, 27, rx_stg_states_z);
    _mav_put_uint8_t(buf, 28, rx_card_det_z);
    _mav_put_uint8_t(buf, 29, rx_save_opt_z);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN);
#else
    mavlink_ivaq_rx_params_master_t packet;
    packet.rx_battery_voltage_x = rx_battery_voltage_x;
    packet.rx_battery_voltage_y = rx_battery_voltage_y;
    packet.rx_battery_voltage_z = rx_battery_voltage_z;
    packet.rx_mode_x = rx_mode_x;
    packet.rx_status_x = rx_status_x;
    packet.rx_ant_states_x = rx_ant_states_x;
    packet.rx_stg_states_x = rx_stg_states_x;
    packet.rx_card_det_x = rx_card_det_x;
    packet.rx_save_opt_x = rx_save_opt_x;
    packet.rx_mode_y = rx_mode_y;
    packet.rx_status_y = rx_status_y;
    packet.rx_ant_states_y = rx_ant_states_y;
    packet.rx_stg_states_y = rx_stg_states_y;
    packet.rx_card_det_y = rx_card_det_y;
    packet.rx_save_opt_y = rx_save_opt_y;
    packet.rx_mode_z = rx_mode_z;
    packet.rx_status_z = rx_status_z;
    packet.rx_ant_states_z = rx_ant_states_z;
    packet.rx_stg_states_z = rx_stg_states_z;
    packet.rx_card_det_z = rx_card_det_z;
    packet.rx_save_opt_z = rx_save_opt_z;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_CRC);
}

/**
 * @brief Encode a ivaq_rx_params_master struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_params_master C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_master_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ivaq_rx_params_master_t* ivaq_rx_params_master)
{
    return mavlink_msg_ivaq_rx_params_master_pack(system_id, component_id, msg, ivaq_rx_params_master->rx_mode_x, ivaq_rx_params_master->rx_status_x, ivaq_rx_params_master->rx_battery_voltage_x, ivaq_rx_params_master->rx_ant_states_x, ivaq_rx_params_master->rx_stg_states_x, ivaq_rx_params_master->rx_card_det_x, ivaq_rx_params_master->rx_save_opt_x, ivaq_rx_params_master->rx_mode_y, ivaq_rx_params_master->rx_status_y, ivaq_rx_params_master->rx_battery_voltage_y, ivaq_rx_params_master->rx_ant_states_y, ivaq_rx_params_master->rx_stg_states_y, ivaq_rx_params_master->rx_card_det_y, ivaq_rx_params_master->rx_save_opt_y, ivaq_rx_params_master->rx_mode_z, ivaq_rx_params_master->rx_status_z, ivaq_rx_params_master->rx_battery_voltage_z, ivaq_rx_params_master->rx_ant_states_z, ivaq_rx_params_master->rx_stg_states_z, ivaq_rx_params_master->rx_card_det_z, ivaq_rx_params_master->rx_save_opt_z);
}

/**
 * @brief Encode a ivaq_rx_params_master struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_params_master C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_master_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ivaq_rx_params_master_t* ivaq_rx_params_master)
{
    return mavlink_msg_ivaq_rx_params_master_pack_chan(system_id, component_id, chan, msg, ivaq_rx_params_master->rx_mode_x, ivaq_rx_params_master->rx_status_x, ivaq_rx_params_master->rx_battery_voltage_x, ivaq_rx_params_master->rx_ant_states_x, ivaq_rx_params_master->rx_stg_states_x, ivaq_rx_params_master->rx_card_det_x, ivaq_rx_params_master->rx_save_opt_x, ivaq_rx_params_master->rx_mode_y, ivaq_rx_params_master->rx_status_y, ivaq_rx_params_master->rx_battery_voltage_y, ivaq_rx_params_master->rx_ant_states_y, ivaq_rx_params_master->rx_stg_states_y, ivaq_rx_params_master->rx_card_det_y, ivaq_rx_params_master->rx_save_opt_y, ivaq_rx_params_master->rx_mode_z, ivaq_rx_params_master->rx_status_z, ivaq_rx_params_master->rx_battery_voltage_z, ivaq_rx_params_master->rx_ant_states_z, ivaq_rx_params_master->rx_stg_states_z, ivaq_rx_params_master->rx_card_det_z, ivaq_rx_params_master->rx_save_opt_z);
}

/**
 * @brief Encode a ivaq_rx_params_master struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_params_master C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_params_master_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ivaq_rx_params_master_t* ivaq_rx_params_master)
{
    return mavlink_msg_ivaq_rx_params_master_pack_status(system_id, component_id, _status, msg,  ivaq_rx_params_master->rx_mode_x, ivaq_rx_params_master->rx_status_x, ivaq_rx_params_master->rx_battery_voltage_x, ivaq_rx_params_master->rx_ant_states_x, ivaq_rx_params_master->rx_stg_states_x, ivaq_rx_params_master->rx_card_det_x, ivaq_rx_params_master->rx_save_opt_x, ivaq_rx_params_master->rx_mode_y, ivaq_rx_params_master->rx_status_y, ivaq_rx_params_master->rx_battery_voltage_y, ivaq_rx_params_master->rx_ant_states_y, ivaq_rx_params_master->rx_stg_states_y, ivaq_rx_params_master->rx_card_det_y, ivaq_rx_params_master->rx_save_opt_y, ivaq_rx_params_master->rx_mode_z, ivaq_rx_params_master->rx_status_z, ivaq_rx_params_master->rx_battery_voltage_z, ivaq_rx_params_master->rx_ant_states_z, ivaq_rx_params_master->rx_stg_states_z, ivaq_rx_params_master->rx_card_det_z, ivaq_rx_params_master->rx_save_opt_z);
}

/**
 * @brief Send a ivaq_rx_params_master message
 * @param chan MAVLink channel to send the message
 *
 * @param rx_mode_x  Ivaq Rx X-Ant Mode
 * @param rx_status_x  Ivaq Rx X-Ant Status
 * @param rx_battery_voltage_x  Ivaq Rx X-Ant Battery Voltage
 * @param rx_ant_states_x  Ivaq Rx X-Ant Antenna States
 * @param rx_stg_states_x  Ivaq Rx X-Ant Stage States
 * @param rx_card_det_x  Ivaq Rx X-Ant SD Card State
 * @param rx_save_opt_x  Ivaq Rx X-Ant Save State
 * @param rx_mode_y  Ivaq Rx Y-Ant Mode
 * @param rx_status_y  Ivaq Rx Y-Ant Status
 * @param rx_battery_voltage_y  Ivaq Rx Y-Ant Battery Voltage
 * @param rx_ant_states_y  Ivaq Rx Y-Ant Antenna States
 * @param rx_stg_states_y  Ivaq Rx Y-Ant Stage States
 * @param rx_card_det_y  Ivaq Rx Y-Ant SD Card State
 * @param rx_save_opt_y  Ivaq Rx Y-Ant Save State
 * @param rx_mode_z  Ivaq Rx Z-Ant Mode
 * @param rx_status_z  Ivaq Rx Z-Ant Status
 * @param rx_battery_voltage_z  Ivaq Rx Z-Ant Battery Voltage
 * @param rx_ant_states_z  Ivaq Rx Z-Ant Antenna States
 * @param rx_stg_states_z  Ivaq Rx Z-Ant Stage States
 * @param rx_card_det_z  Ivaq Rx Z-Ant SD Card State
 * @param rx_save_opt_z  Ivaq Rx Z-Ant Save State
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ivaq_rx_params_master_send(mavlink_channel_t chan, uint8_t rx_mode_x, uint8_t rx_status_x, float rx_battery_voltage_x, uint8_t rx_ant_states_x, uint8_t rx_stg_states_x, uint8_t rx_card_det_x, uint8_t rx_save_opt_x, uint8_t rx_mode_y, uint8_t rx_status_y, float rx_battery_voltage_y, uint8_t rx_ant_states_y, uint8_t rx_stg_states_y, uint8_t rx_card_det_y, uint8_t rx_save_opt_y, uint8_t rx_mode_z, uint8_t rx_status_z, float rx_battery_voltage_z, uint8_t rx_ant_states_z, uint8_t rx_stg_states_z, uint8_t rx_card_det_z, uint8_t rx_save_opt_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN];
    _mav_put_float(buf, 0, rx_battery_voltage_x);
    _mav_put_float(buf, 4, rx_battery_voltage_y);
    _mav_put_float(buf, 8, rx_battery_voltage_z);
    _mav_put_uint8_t(buf, 12, rx_mode_x);
    _mav_put_uint8_t(buf, 13, rx_status_x);
    _mav_put_uint8_t(buf, 14, rx_ant_states_x);
    _mav_put_uint8_t(buf, 15, rx_stg_states_x);
    _mav_put_uint8_t(buf, 16, rx_card_det_x);
    _mav_put_uint8_t(buf, 17, rx_save_opt_x);
    _mav_put_uint8_t(buf, 18, rx_mode_y);
    _mav_put_uint8_t(buf, 19, rx_status_y);
    _mav_put_uint8_t(buf, 20, rx_ant_states_y);
    _mav_put_uint8_t(buf, 21, rx_stg_states_y);
    _mav_put_uint8_t(buf, 22, rx_card_det_y);
    _mav_put_uint8_t(buf, 23, rx_save_opt_y);
    _mav_put_uint8_t(buf, 24, rx_mode_z);
    _mav_put_uint8_t(buf, 25, rx_status_z);
    _mav_put_uint8_t(buf, 26, rx_ant_states_z);
    _mav_put_uint8_t(buf, 27, rx_stg_states_z);
    _mav_put_uint8_t(buf, 28, rx_card_det_z);
    _mav_put_uint8_t(buf, 29, rx_save_opt_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER, buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_CRC);
#else
    mavlink_ivaq_rx_params_master_t packet;
    packet.rx_battery_voltage_x = rx_battery_voltage_x;
    packet.rx_battery_voltage_y = rx_battery_voltage_y;
    packet.rx_battery_voltage_z = rx_battery_voltage_z;
    packet.rx_mode_x = rx_mode_x;
    packet.rx_status_x = rx_status_x;
    packet.rx_ant_states_x = rx_ant_states_x;
    packet.rx_stg_states_x = rx_stg_states_x;
    packet.rx_card_det_x = rx_card_det_x;
    packet.rx_save_opt_x = rx_save_opt_x;
    packet.rx_mode_y = rx_mode_y;
    packet.rx_status_y = rx_status_y;
    packet.rx_ant_states_y = rx_ant_states_y;
    packet.rx_stg_states_y = rx_stg_states_y;
    packet.rx_card_det_y = rx_card_det_y;
    packet.rx_save_opt_y = rx_save_opt_y;
    packet.rx_mode_z = rx_mode_z;
    packet.rx_status_z = rx_status_z;
    packet.rx_ant_states_z = rx_ant_states_z;
    packet.rx_stg_states_z = rx_stg_states_z;
    packet.rx_card_det_z = rx_card_det_z;
    packet.rx_save_opt_z = rx_save_opt_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER, (const char *)&packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_CRC);
#endif
}

/**
 * @brief Send a ivaq_rx_params_master message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ivaq_rx_params_master_send_struct(mavlink_channel_t chan, const mavlink_ivaq_rx_params_master_t* ivaq_rx_params_master)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ivaq_rx_params_master_send(chan, ivaq_rx_params_master->rx_mode_x, ivaq_rx_params_master->rx_status_x, ivaq_rx_params_master->rx_battery_voltage_x, ivaq_rx_params_master->rx_ant_states_x, ivaq_rx_params_master->rx_stg_states_x, ivaq_rx_params_master->rx_card_det_x, ivaq_rx_params_master->rx_save_opt_x, ivaq_rx_params_master->rx_mode_y, ivaq_rx_params_master->rx_status_y, ivaq_rx_params_master->rx_battery_voltage_y, ivaq_rx_params_master->rx_ant_states_y, ivaq_rx_params_master->rx_stg_states_y, ivaq_rx_params_master->rx_card_det_y, ivaq_rx_params_master->rx_save_opt_y, ivaq_rx_params_master->rx_mode_z, ivaq_rx_params_master->rx_status_z, ivaq_rx_params_master->rx_battery_voltage_z, ivaq_rx_params_master->rx_ant_states_z, ivaq_rx_params_master->rx_stg_states_z, ivaq_rx_params_master->rx_card_det_z, ivaq_rx_params_master->rx_save_opt_z);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER, (const char *)ivaq_rx_params_master, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_CRC);
#endif
}

#if MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ivaq_rx_params_master_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t rx_mode_x, uint8_t rx_status_x, float rx_battery_voltage_x, uint8_t rx_ant_states_x, uint8_t rx_stg_states_x, uint8_t rx_card_det_x, uint8_t rx_save_opt_x, uint8_t rx_mode_y, uint8_t rx_status_y, float rx_battery_voltage_y, uint8_t rx_ant_states_y, uint8_t rx_stg_states_y, uint8_t rx_card_det_y, uint8_t rx_save_opt_y, uint8_t rx_mode_z, uint8_t rx_status_z, float rx_battery_voltage_z, uint8_t rx_ant_states_z, uint8_t rx_stg_states_z, uint8_t rx_card_det_z, uint8_t rx_save_opt_z)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, rx_battery_voltage_x);
    _mav_put_float(buf, 4, rx_battery_voltage_y);
    _mav_put_float(buf, 8, rx_battery_voltage_z);
    _mav_put_uint8_t(buf, 12, rx_mode_x);
    _mav_put_uint8_t(buf, 13, rx_status_x);
    _mav_put_uint8_t(buf, 14, rx_ant_states_x);
    _mav_put_uint8_t(buf, 15, rx_stg_states_x);
    _mav_put_uint8_t(buf, 16, rx_card_det_x);
    _mav_put_uint8_t(buf, 17, rx_save_opt_x);
    _mav_put_uint8_t(buf, 18, rx_mode_y);
    _mav_put_uint8_t(buf, 19, rx_status_y);
    _mav_put_uint8_t(buf, 20, rx_ant_states_y);
    _mav_put_uint8_t(buf, 21, rx_stg_states_y);
    _mav_put_uint8_t(buf, 22, rx_card_det_y);
    _mav_put_uint8_t(buf, 23, rx_save_opt_y);
    _mav_put_uint8_t(buf, 24, rx_mode_z);
    _mav_put_uint8_t(buf, 25, rx_status_z);
    _mav_put_uint8_t(buf, 26, rx_ant_states_z);
    _mav_put_uint8_t(buf, 27, rx_stg_states_z);
    _mav_put_uint8_t(buf, 28, rx_card_det_z);
    _mav_put_uint8_t(buf, 29, rx_save_opt_z);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER, buf, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_CRC);
#else
    mavlink_ivaq_rx_params_master_t *packet = (mavlink_ivaq_rx_params_master_t *)msgbuf;
    packet->rx_battery_voltage_x = rx_battery_voltage_x;
    packet->rx_battery_voltage_y = rx_battery_voltage_y;
    packet->rx_battery_voltage_z = rx_battery_voltage_z;
    packet->rx_mode_x = rx_mode_x;
    packet->rx_status_x = rx_status_x;
    packet->rx_ant_states_x = rx_ant_states_x;
    packet->rx_stg_states_x = rx_stg_states_x;
    packet->rx_card_det_x = rx_card_det_x;
    packet->rx_save_opt_x = rx_save_opt_x;
    packet->rx_mode_y = rx_mode_y;
    packet->rx_status_y = rx_status_y;
    packet->rx_ant_states_y = rx_ant_states_y;
    packet->rx_stg_states_y = rx_stg_states_y;
    packet->rx_card_det_y = rx_card_det_y;
    packet->rx_save_opt_y = rx_save_opt_y;
    packet->rx_mode_z = rx_mode_z;
    packet->rx_status_z = rx_status_z;
    packet->rx_ant_states_z = rx_ant_states_z;
    packet->rx_stg_states_z = rx_stg_states_z;
    packet->rx_card_det_z = rx_card_det_z;
    packet->rx_save_opt_z = rx_save_opt_z;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER, (const char *)packet, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_CRC);
#endif
}
#endif

#endif

// MESSAGE IVAQ_RX_PARAMS_MASTER UNPACKING


/**
 * @brief Get field rx_mode_x from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx X-Ant Mode
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_mode_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  12);
}

/**
 * @brief Get field rx_status_x from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx X-Ant Status
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_status_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  13);
}

/**
 * @brief Get field rx_battery_voltage_x from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx X-Ant Battery Voltage
 */
static inline float mavlink_msg_ivaq_rx_params_master_get_rx_battery_voltage_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field rx_ant_states_x from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx X-Ant Antenna States
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_ant_states_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  14);
}

/**
 * @brief Get field rx_stg_states_x from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx X-Ant Stage States
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_stg_states_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  15);
}

/**
 * @brief Get field rx_card_det_x from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx X-Ant SD Card State
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_card_det_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field rx_save_opt_x from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx X-Ant Save State
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_save_opt_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field rx_mode_y from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx Y-Ant Mode
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_mode_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field rx_status_y from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx Y-Ant Status
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_status_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field rx_battery_voltage_y from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx Y-Ant Battery Voltage
 */
static inline float mavlink_msg_ivaq_rx_params_master_get_rx_battery_voltage_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field rx_ant_states_y from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx Y-Ant Antenna States
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_ant_states_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  20);
}

/**
 * @brief Get field rx_stg_states_y from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx Y-Ant Stage States
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_stg_states_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  21);
}

/**
 * @brief Get field rx_card_det_y from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx Y-Ant SD Card State
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_card_det_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  22);
}

/**
 * @brief Get field rx_save_opt_y from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx Y-Ant Save State
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_save_opt_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  23);
}

/**
 * @brief Get field rx_mode_z from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx Z-Ant Mode
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_mode_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field rx_status_z from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx Z-Ant Status
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_status_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  25);
}

/**
 * @brief Get field rx_battery_voltage_z from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx Z-Ant Battery Voltage
 */
static inline float mavlink_msg_ivaq_rx_params_master_get_rx_battery_voltage_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field rx_ant_states_z from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx Z-Ant Antenna States
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_ant_states_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  26);
}

/**
 * @brief Get field rx_stg_states_z from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx Z-Ant Stage States
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_stg_states_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  27);
}

/**
 * @brief Get field rx_card_det_z from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx Z-Ant SD Card State
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_card_det_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field rx_save_opt_z from ivaq_rx_params_master message
 *
 * @return  Ivaq Rx Z-Ant Save State
 */
static inline uint8_t mavlink_msg_ivaq_rx_params_master_get_rx_save_opt_z(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Decode a ivaq_rx_params_master message into a struct
 *
 * @param msg The message to decode
 * @param ivaq_rx_params_master C-struct to decode the message contents into
 */
static inline void mavlink_msg_ivaq_rx_params_master_decode(const mavlink_message_t* msg, mavlink_ivaq_rx_params_master_t* ivaq_rx_params_master)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ivaq_rx_params_master->rx_battery_voltage_x = mavlink_msg_ivaq_rx_params_master_get_rx_battery_voltage_x(msg);
    ivaq_rx_params_master->rx_battery_voltage_y = mavlink_msg_ivaq_rx_params_master_get_rx_battery_voltage_y(msg);
    ivaq_rx_params_master->rx_battery_voltage_z = mavlink_msg_ivaq_rx_params_master_get_rx_battery_voltage_z(msg);
    ivaq_rx_params_master->rx_mode_x = mavlink_msg_ivaq_rx_params_master_get_rx_mode_x(msg);
    ivaq_rx_params_master->rx_status_x = mavlink_msg_ivaq_rx_params_master_get_rx_status_x(msg);
    ivaq_rx_params_master->rx_ant_states_x = mavlink_msg_ivaq_rx_params_master_get_rx_ant_states_x(msg);
    ivaq_rx_params_master->rx_stg_states_x = mavlink_msg_ivaq_rx_params_master_get_rx_stg_states_x(msg);
    ivaq_rx_params_master->rx_card_det_x = mavlink_msg_ivaq_rx_params_master_get_rx_card_det_x(msg);
    ivaq_rx_params_master->rx_save_opt_x = mavlink_msg_ivaq_rx_params_master_get_rx_save_opt_x(msg);
    ivaq_rx_params_master->rx_mode_y = mavlink_msg_ivaq_rx_params_master_get_rx_mode_y(msg);
    ivaq_rx_params_master->rx_status_y = mavlink_msg_ivaq_rx_params_master_get_rx_status_y(msg);
    ivaq_rx_params_master->rx_ant_states_y = mavlink_msg_ivaq_rx_params_master_get_rx_ant_states_y(msg);
    ivaq_rx_params_master->rx_stg_states_y = mavlink_msg_ivaq_rx_params_master_get_rx_stg_states_y(msg);
    ivaq_rx_params_master->rx_card_det_y = mavlink_msg_ivaq_rx_params_master_get_rx_card_det_y(msg);
    ivaq_rx_params_master->rx_save_opt_y = mavlink_msg_ivaq_rx_params_master_get_rx_save_opt_y(msg);
    ivaq_rx_params_master->rx_mode_z = mavlink_msg_ivaq_rx_params_master_get_rx_mode_z(msg);
    ivaq_rx_params_master->rx_status_z = mavlink_msg_ivaq_rx_params_master_get_rx_status_z(msg);
    ivaq_rx_params_master->rx_ant_states_z = mavlink_msg_ivaq_rx_params_master_get_rx_ant_states_z(msg);
    ivaq_rx_params_master->rx_stg_states_z = mavlink_msg_ivaq_rx_params_master_get_rx_stg_states_z(msg);
    ivaq_rx_params_master->rx_card_det_z = mavlink_msg_ivaq_rx_params_master_get_rx_card_det_z(msg);
    ivaq_rx_params_master->rx_save_opt_z = mavlink_msg_ivaq_rx_params_master_get_rx_save_opt_z(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN? msg->len : MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN;
        memset(ivaq_rx_params_master, 0, MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_LEN);
    memcpy(ivaq_rx_params_master, _MAV_PAYLOAD(msg), len);
#endif
}
