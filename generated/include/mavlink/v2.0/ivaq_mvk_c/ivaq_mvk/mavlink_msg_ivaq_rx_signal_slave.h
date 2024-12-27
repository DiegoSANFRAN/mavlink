#pragma once
// MESSAGE IVAQ_RX_SIGNAL_SLAVE PACKING

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE 205


typedef struct __mavlink_ivaq_rx_signal_slave_t {
 uint32_t rx_signal_det_time; /*<  Ivaq Rx Signal NoCorr value in detected pulse*/
 float rx_signal_det_val_nocorr; /*<  Ivaq Rx Signal NoCorr value in detected pulse*/
 float rx_signal_det_val_corr; /*<  Ivaq Rx Signal Corr value in detected pulse*/
 float rx_noise_val_nocorr; /*<  Ivaq Rx Noise No Corr Demod value*/
 float rx_noise_val_corr; /*<  Ivaq Rx Noise Corr Demod value*/
 float rx_noise_std_nocorr; /*<  Ivaq Rx Noise No Corr Demod std deviation*/
 float rx_noise_std_corr; /*<  Ivaq Rx Noise Corr Demod std deviation*/
 uint8_t rx_saturation_flag; /*<  Ivaq Rx Saturation flag*/
 uint8_t rx_signal_det_flag; /*<  Ivaq Rx Signal Detection flag*/
} mavlink_ivaq_rx_signal_slave_t;

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN 30
#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_MIN_LEN 30
#define MAVLINK_MSG_ID_205_LEN 30
#define MAVLINK_MSG_ID_205_MIN_LEN 30

#define MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_CRC 140
#define MAVLINK_MSG_ID_205_CRC 140



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL_SLAVE { \
    205, \
    "IVAQ_RX_SIGNAL_SLAVE", \
    9, \
    {  { "rx_saturation_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_saturation_flag) }, \
         { "rx_signal_det_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_signal_det_flag) }, \
         { "rx_signal_det_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_signal_det_time) }, \
         { "rx_signal_det_val_nocorr", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_signal_det_val_nocorr) }, \
         { "rx_signal_det_val_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_signal_det_val_corr) }, \
         { "rx_noise_val_nocorr", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_noise_val_nocorr) }, \
         { "rx_noise_val_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_noise_val_corr) }, \
         { "rx_noise_std_nocorr", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_noise_std_nocorr) }, \
         { "rx_noise_std_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_noise_std_corr) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL_SLAVE { \
    "IVAQ_RX_SIGNAL_SLAVE", \
    9, \
    {  { "rx_saturation_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_saturation_flag) }, \
         { "rx_signal_det_flag", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_signal_det_flag) }, \
         { "rx_signal_det_time", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_signal_det_time) }, \
         { "rx_signal_det_val_nocorr", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_signal_det_val_nocorr) }, \
         { "rx_signal_det_val_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_signal_det_val_corr) }, \
         { "rx_noise_val_nocorr", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_noise_val_nocorr) }, \
         { "rx_noise_val_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_noise_val_corr) }, \
         { "rx_noise_std_nocorr", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_noise_std_nocorr) }, \
         { "rx_noise_std_corr", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_ivaq_rx_signal_slave_t, rx_noise_std_corr) }, \
         } \
}
#endif

/**
 * @brief Pack a ivaq_rx_signal_slave message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_saturation_flag  Ivaq Rx Saturation flag
 * @param rx_signal_det_flag  Ivaq Rx Signal Detection flag
 * @param rx_signal_det_time  Ivaq Rx Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr  Ivaq Rx Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr  Ivaq Rx Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr  Ivaq Rx Noise No Corr Demod value
 * @param rx_noise_val_corr  Ivaq Rx Noise Corr Demod value
 * @param rx_noise_std_nocorr  Ivaq Rx Noise No Corr Demod std deviation
 * @param rx_noise_std_corr  Ivaq Rx Noise Corr Demod std deviation
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_slave_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t rx_saturation_flag, uint8_t rx_signal_det_flag, uint32_t rx_signal_det_time, float rx_signal_det_val_nocorr, float rx_signal_det_val_corr, float rx_noise_val_nocorr, float rx_noise_val_corr, float rx_noise_std_nocorr, float rx_noise_std_corr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN];
    _mav_put_uint32_t(buf, 0, rx_signal_det_time);
    _mav_put_float(buf, 4, rx_signal_det_val_nocorr);
    _mav_put_float(buf, 8, rx_signal_det_val_corr);
    _mav_put_float(buf, 12, rx_noise_val_nocorr);
    _mav_put_float(buf, 16, rx_noise_val_corr);
    _mav_put_float(buf, 20, rx_noise_std_nocorr);
    _mav_put_float(buf, 24, rx_noise_std_corr);
    _mav_put_uint8_t(buf, 28, rx_saturation_flag);
    _mav_put_uint8_t(buf, 29, rx_signal_det_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN);
#else
    mavlink_ivaq_rx_signal_slave_t packet;
    packet.rx_signal_det_time = rx_signal_det_time;
    packet.rx_signal_det_val_nocorr = rx_signal_det_val_nocorr;
    packet.rx_signal_det_val_corr = rx_signal_det_val_corr;
    packet.rx_noise_val_nocorr = rx_noise_val_nocorr;
    packet.rx_noise_val_corr = rx_noise_val_corr;
    packet.rx_noise_std_nocorr = rx_noise_std_nocorr;
    packet.rx_noise_std_corr = rx_noise_std_corr;
    packet.rx_saturation_flag = rx_saturation_flag;
    packet.rx_signal_det_flag = rx_signal_det_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_CRC);
}

/**
 * @brief Pack a ivaq_rx_signal_slave message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param rx_saturation_flag  Ivaq Rx Saturation flag
 * @param rx_signal_det_flag  Ivaq Rx Signal Detection flag
 * @param rx_signal_det_time  Ivaq Rx Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr  Ivaq Rx Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr  Ivaq Rx Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr  Ivaq Rx Noise No Corr Demod value
 * @param rx_noise_val_corr  Ivaq Rx Noise Corr Demod value
 * @param rx_noise_std_nocorr  Ivaq Rx Noise No Corr Demod std deviation
 * @param rx_noise_std_corr  Ivaq Rx Noise Corr Demod std deviation
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_slave_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint8_t rx_saturation_flag, uint8_t rx_signal_det_flag, uint32_t rx_signal_det_time, float rx_signal_det_val_nocorr, float rx_signal_det_val_corr, float rx_noise_val_nocorr, float rx_noise_val_corr, float rx_noise_std_nocorr, float rx_noise_std_corr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN];
    _mav_put_uint32_t(buf, 0, rx_signal_det_time);
    _mav_put_float(buf, 4, rx_signal_det_val_nocorr);
    _mav_put_float(buf, 8, rx_signal_det_val_corr);
    _mav_put_float(buf, 12, rx_noise_val_nocorr);
    _mav_put_float(buf, 16, rx_noise_val_corr);
    _mav_put_float(buf, 20, rx_noise_std_nocorr);
    _mav_put_float(buf, 24, rx_noise_std_corr);
    _mav_put_uint8_t(buf, 28, rx_saturation_flag);
    _mav_put_uint8_t(buf, 29, rx_signal_det_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN);
#else
    mavlink_ivaq_rx_signal_slave_t packet;
    packet.rx_signal_det_time = rx_signal_det_time;
    packet.rx_signal_det_val_nocorr = rx_signal_det_val_nocorr;
    packet.rx_signal_det_val_corr = rx_signal_det_val_corr;
    packet.rx_noise_val_nocorr = rx_noise_val_nocorr;
    packet.rx_noise_val_corr = rx_noise_val_corr;
    packet.rx_noise_std_nocorr = rx_noise_std_nocorr;
    packet.rx_noise_std_corr = rx_noise_std_corr;
    packet.rx_saturation_flag = rx_saturation_flag;
    packet.rx_signal_det_flag = rx_signal_det_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN);
#endif
}

/**
 * @brief Pack a ivaq_rx_signal_slave message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rx_saturation_flag  Ivaq Rx Saturation flag
 * @param rx_signal_det_flag  Ivaq Rx Signal Detection flag
 * @param rx_signal_det_time  Ivaq Rx Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr  Ivaq Rx Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr  Ivaq Rx Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr  Ivaq Rx Noise No Corr Demod value
 * @param rx_noise_val_corr  Ivaq Rx Noise Corr Demod value
 * @param rx_noise_std_nocorr  Ivaq Rx Noise No Corr Demod std deviation
 * @param rx_noise_std_corr  Ivaq Rx Noise Corr Demod std deviation
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_slave_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t rx_saturation_flag,uint8_t rx_signal_det_flag,uint32_t rx_signal_det_time,float rx_signal_det_val_nocorr,float rx_signal_det_val_corr,float rx_noise_val_nocorr,float rx_noise_val_corr,float rx_noise_std_nocorr,float rx_noise_std_corr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN];
    _mav_put_uint32_t(buf, 0, rx_signal_det_time);
    _mav_put_float(buf, 4, rx_signal_det_val_nocorr);
    _mav_put_float(buf, 8, rx_signal_det_val_corr);
    _mav_put_float(buf, 12, rx_noise_val_nocorr);
    _mav_put_float(buf, 16, rx_noise_val_corr);
    _mav_put_float(buf, 20, rx_noise_std_nocorr);
    _mav_put_float(buf, 24, rx_noise_std_corr);
    _mav_put_uint8_t(buf, 28, rx_saturation_flag);
    _mav_put_uint8_t(buf, 29, rx_signal_det_flag);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN);
#else
    mavlink_ivaq_rx_signal_slave_t packet;
    packet.rx_signal_det_time = rx_signal_det_time;
    packet.rx_signal_det_val_nocorr = rx_signal_det_val_nocorr;
    packet.rx_signal_det_val_corr = rx_signal_det_val_corr;
    packet.rx_noise_val_nocorr = rx_noise_val_nocorr;
    packet.rx_noise_val_corr = rx_noise_val_corr;
    packet.rx_noise_std_nocorr = rx_noise_std_nocorr;
    packet.rx_noise_std_corr = rx_noise_std_corr;
    packet.rx_saturation_flag = rx_saturation_flag;
    packet.rx_signal_det_flag = rx_signal_det_flag;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_CRC);
}

/**
 * @brief Encode a ivaq_rx_signal_slave struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_signal_slave C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_slave_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_ivaq_rx_signal_slave_t* ivaq_rx_signal_slave)
{
    return mavlink_msg_ivaq_rx_signal_slave_pack(system_id, component_id, msg, ivaq_rx_signal_slave->rx_saturation_flag, ivaq_rx_signal_slave->rx_signal_det_flag, ivaq_rx_signal_slave->rx_signal_det_time, ivaq_rx_signal_slave->rx_signal_det_val_nocorr, ivaq_rx_signal_slave->rx_signal_det_val_corr, ivaq_rx_signal_slave->rx_noise_val_nocorr, ivaq_rx_signal_slave->rx_noise_val_corr, ivaq_rx_signal_slave->rx_noise_std_nocorr, ivaq_rx_signal_slave->rx_noise_std_corr);
}

/**
 * @brief Encode a ivaq_rx_signal_slave struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_signal_slave C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_slave_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_ivaq_rx_signal_slave_t* ivaq_rx_signal_slave)
{
    return mavlink_msg_ivaq_rx_signal_slave_pack_chan(system_id, component_id, chan, msg, ivaq_rx_signal_slave->rx_saturation_flag, ivaq_rx_signal_slave->rx_signal_det_flag, ivaq_rx_signal_slave->rx_signal_det_time, ivaq_rx_signal_slave->rx_signal_det_val_nocorr, ivaq_rx_signal_slave->rx_signal_det_val_corr, ivaq_rx_signal_slave->rx_noise_val_nocorr, ivaq_rx_signal_slave->rx_noise_val_corr, ivaq_rx_signal_slave->rx_noise_std_nocorr, ivaq_rx_signal_slave->rx_noise_std_corr);
}

/**
 * @brief Encode a ivaq_rx_signal_slave struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param ivaq_rx_signal_slave C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_ivaq_rx_signal_slave_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_ivaq_rx_signal_slave_t* ivaq_rx_signal_slave)
{
    return mavlink_msg_ivaq_rx_signal_slave_pack_status(system_id, component_id, _status, msg,  ivaq_rx_signal_slave->rx_saturation_flag, ivaq_rx_signal_slave->rx_signal_det_flag, ivaq_rx_signal_slave->rx_signal_det_time, ivaq_rx_signal_slave->rx_signal_det_val_nocorr, ivaq_rx_signal_slave->rx_signal_det_val_corr, ivaq_rx_signal_slave->rx_noise_val_nocorr, ivaq_rx_signal_slave->rx_noise_val_corr, ivaq_rx_signal_slave->rx_noise_std_nocorr, ivaq_rx_signal_slave->rx_noise_std_corr);
}

/**
 * @brief Send a ivaq_rx_signal_slave message
 * @param chan MAVLink channel to send the message
 *
 * @param rx_saturation_flag  Ivaq Rx Saturation flag
 * @param rx_signal_det_flag  Ivaq Rx Signal Detection flag
 * @param rx_signal_det_time  Ivaq Rx Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_nocorr  Ivaq Rx Signal NoCorr value in detected pulse
 * @param rx_signal_det_val_corr  Ivaq Rx Signal Corr value in detected pulse
 * @param rx_noise_val_nocorr  Ivaq Rx Noise No Corr Demod value
 * @param rx_noise_val_corr  Ivaq Rx Noise Corr Demod value
 * @param rx_noise_std_nocorr  Ivaq Rx Noise No Corr Demod std deviation
 * @param rx_noise_std_corr  Ivaq Rx Noise Corr Demod std deviation
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_ivaq_rx_signal_slave_send(mavlink_channel_t chan, uint8_t rx_saturation_flag, uint8_t rx_signal_det_flag, uint32_t rx_signal_det_time, float rx_signal_det_val_nocorr, float rx_signal_det_val_corr, float rx_noise_val_nocorr, float rx_noise_val_corr, float rx_noise_std_nocorr, float rx_noise_std_corr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN];
    _mav_put_uint32_t(buf, 0, rx_signal_det_time);
    _mav_put_float(buf, 4, rx_signal_det_val_nocorr);
    _mav_put_float(buf, 8, rx_signal_det_val_corr);
    _mav_put_float(buf, 12, rx_noise_val_nocorr);
    _mav_put_float(buf, 16, rx_noise_val_corr);
    _mav_put_float(buf, 20, rx_noise_std_nocorr);
    _mav_put_float(buf, 24, rx_noise_std_corr);
    _mav_put_uint8_t(buf, 28, rx_saturation_flag);
    _mav_put_uint8_t(buf, 29, rx_signal_det_flag);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE, buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_CRC);
#else
    mavlink_ivaq_rx_signal_slave_t packet;
    packet.rx_signal_det_time = rx_signal_det_time;
    packet.rx_signal_det_val_nocorr = rx_signal_det_val_nocorr;
    packet.rx_signal_det_val_corr = rx_signal_det_val_corr;
    packet.rx_noise_val_nocorr = rx_noise_val_nocorr;
    packet.rx_noise_val_corr = rx_noise_val_corr;
    packet.rx_noise_std_nocorr = rx_noise_std_nocorr;
    packet.rx_noise_std_corr = rx_noise_std_corr;
    packet.rx_saturation_flag = rx_saturation_flag;
    packet.rx_signal_det_flag = rx_signal_det_flag;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE, (const char *)&packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_CRC);
#endif
}

/**
 * @brief Send a ivaq_rx_signal_slave message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_ivaq_rx_signal_slave_send_struct(mavlink_channel_t chan, const mavlink_ivaq_rx_signal_slave_t* ivaq_rx_signal_slave)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_ivaq_rx_signal_slave_send(chan, ivaq_rx_signal_slave->rx_saturation_flag, ivaq_rx_signal_slave->rx_signal_det_flag, ivaq_rx_signal_slave->rx_signal_det_time, ivaq_rx_signal_slave->rx_signal_det_val_nocorr, ivaq_rx_signal_slave->rx_signal_det_val_corr, ivaq_rx_signal_slave->rx_noise_val_nocorr, ivaq_rx_signal_slave->rx_noise_val_corr, ivaq_rx_signal_slave->rx_noise_std_nocorr, ivaq_rx_signal_slave->rx_noise_std_corr);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE, (const char *)ivaq_rx_signal_slave, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_CRC);
#endif
}

#if MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_ivaq_rx_signal_slave_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t rx_saturation_flag, uint8_t rx_signal_det_flag, uint32_t rx_signal_det_time, float rx_signal_det_val_nocorr, float rx_signal_det_val_corr, float rx_noise_val_nocorr, float rx_noise_val_corr, float rx_noise_std_nocorr, float rx_noise_std_corr)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, rx_signal_det_time);
    _mav_put_float(buf, 4, rx_signal_det_val_nocorr);
    _mav_put_float(buf, 8, rx_signal_det_val_corr);
    _mav_put_float(buf, 12, rx_noise_val_nocorr);
    _mav_put_float(buf, 16, rx_noise_val_corr);
    _mav_put_float(buf, 20, rx_noise_std_nocorr);
    _mav_put_float(buf, 24, rx_noise_std_corr);
    _mav_put_uint8_t(buf, 28, rx_saturation_flag);
    _mav_put_uint8_t(buf, 29, rx_signal_det_flag);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE, buf, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_CRC);
#else
    mavlink_ivaq_rx_signal_slave_t *packet = (mavlink_ivaq_rx_signal_slave_t *)msgbuf;
    packet->rx_signal_det_time = rx_signal_det_time;
    packet->rx_signal_det_val_nocorr = rx_signal_det_val_nocorr;
    packet->rx_signal_det_val_corr = rx_signal_det_val_corr;
    packet->rx_noise_val_nocorr = rx_noise_val_nocorr;
    packet->rx_noise_val_corr = rx_noise_val_corr;
    packet->rx_noise_std_nocorr = rx_noise_std_nocorr;
    packet->rx_noise_std_corr = rx_noise_std_corr;
    packet->rx_saturation_flag = rx_saturation_flag;
    packet->rx_signal_det_flag = rx_signal_det_flag;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE, (const char *)packet, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_MIN_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_CRC);
#endif
}
#endif

#endif

// MESSAGE IVAQ_RX_SIGNAL_SLAVE UNPACKING


/**
 * @brief Get field rx_saturation_flag from ivaq_rx_signal_slave message
 *
 * @return  Ivaq Rx Saturation flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_slave_get_rx_saturation_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field rx_signal_det_flag from ivaq_rx_signal_slave message
 *
 * @return  Ivaq Rx Signal Detection flag
 */
static inline uint8_t mavlink_msg_ivaq_rx_signal_slave_get_rx_signal_det_flag(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Get field rx_signal_det_time from ivaq_rx_signal_slave message
 *
 * @return  Ivaq Rx Signal NoCorr value in detected pulse
 */
static inline uint32_t mavlink_msg_ivaq_rx_signal_slave_get_rx_signal_det_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field rx_signal_det_val_nocorr from ivaq_rx_signal_slave message
 *
 * @return  Ivaq Rx Signal NoCorr value in detected pulse
 */
static inline float mavlink_msg_ivaq_rx_signal_slave_get_rx_signal_det_val_nocorr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field rx_signal_det_val_corr from ivaq_rx_signal_slave message
 *
 * @return  Ivaq Rx Signal Corr value in detected pulse
 */
static inline float mavlink_msg_ivaq_rx_signal_slave_get_rx_signal_det_val_corr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field rx_noise_val_nocorr from ivaq_rx_signal_slave message
 *
 * @return  Ivaq Rx Noise No Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_slave_get_rx_noise_val_nocorr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field rx_noise_val_corr from ivaq_rx_signal_slave message
 *
 * @return  Ivaq Rx Noise Corr Demod value
 */
static inline float mavlink_msg_ivaq_rx_signal_slave_get_rx_noise_val_corr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field rx_noise_std_nocorr from ivaq_rx_signal_slave message
 *
 * @return  Ivaq Rx Noise No Corr Demod std deviation
 */
static inline float mavlink_msg_ivaq_rx_signal_slave_get_rx_noise_std_nocorr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field rx_noise_std_corr from ivaq_rx_signal_slave message
 *
 * @return  Ivaq Rx Noise Corr Demod std deviation
 */
static inline float mavlink_msg_ivaq_rx_signal_slave_get_rx_noise_std_corr(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a ivaq_rx_signal_slave message into a struct
 *
 * @param msg The message to decode
 * @param ivaq_rx_signal_slave C-struct to decode the message contents into
 */
static inline void mavlink_msg_ivaq_rx_signal_slave_decode(const mavlink_message_t* msg, mavlink_ivaq_rx_signal_slave_t* ivaq_rx_signal_slave)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    ivaq_rx_signal_slave->rx_signal_det_time = mavlink_msg_ivaq_rx_signal_slave_get_rx_signal_det_time(msg);
    ivaq_rx_signal_slave->rx_signal_det_val_nocorr = mavlink_msg_ivaq_rx_signal_slave_get_rx_signal_det_val_nocorr(msg);
    ivaq_rx_signal_slave->rx_signal_det_val_corr = mavlink_msg_ivaq_rx_signal_slave_get_rx_signal_det_val_corr(msg);
    ivaq_rx_signal_slave->rx_noise_val_nocorr = mavlink_msg_ivaq_rx_signal_slave_get_rx_noise_val_nocorr(msg);
    ivaq_rx_signal_slave->rx_noise_val_corr = mavlink_msg_ivaq_rx_signal_slave_get_rx_noise_val_corr(msg);
    ivaq_rx_signal_slave->rx_noise_std_nocorr = mavlink_msg_ivaq_rx_signal_slave_get_rx_noise_std_nocorr(msg);
    ivaq_rx_signal_slave->rx_noise_std_corr = mavlink_msg_ivaq_rx_signal_slave_get_rx_noise_std_corr(msg);
    ivaq_rx_signal_slave->rx_saturation_flag = mavlink_msg_ivaq_rx_signal_slave_get_rx_saturation_flag(msg);
    ivaq_rx_signal_slave->rx_signal_det_flag = mavlink_msg_ivaq_rx_signal_slave_get_rx_signal_det_flag(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN? msg->len : MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN;
        memset(ivaq_rx_signal_slave, 0, MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_LEN);
    memcpy(ivaq_rx_signal_slave, _MAV_PAYLOAD(msg), len);
#endif
}
