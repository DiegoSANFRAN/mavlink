/** @file
 *    @brief MAVLink comm protocol testsuite generated from custom.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef CUSTOM_TESTSUITE_H
#define CUSTOM_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_minimal(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_custom(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_minimal(system_id, component_id, last_msg);
    mavlink_test_custom(system_id, component_id, last_msg);
}
#endif

#include "../minimal/testsuite.h"


static void mavlink_test_ivaq_rx_params(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IVAQ_RX_PARAMS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ivaq_rx_params_t packet_in = {
        5,72,139,206
    };
    mavlink_ivaq_rx_params_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.rx_status = packet_in.rx_status;
        packet1.rx_stg_states = packet_in.rx_stg_states;
        packet1.rx_save_opt = packet_in.rx_save_opt;
        packet1.rx_saturation_flag = packet_in.rx_saturation_flag;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_params_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ivaq_rx_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_params_pack(system_id, component_id, &msg , packet1.rx_status , packet1.rx_stg_states , packet1.rx_save_opt , packet1.rx_saturation_flag );
    mavlink_msg_ivaq_rx_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_params_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.rx_status , packet1.rx_stg_states , packet1.rx_save_opt , packet1.rx_saturation_flag );
    mavlink_msg_ivaq_rx_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ivaq_rx_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_params_send(MAVLINK_COMM_1 , packet1.rx_status , packet1.rx_stg_states , packet1.rx_save_opt , packet1.rx_saturation_flag );
    mavlink_msg_ivaq_rx_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("IVAQ_RX_PARAMS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_IVAQ_RX_PARAMS) != NULL);
#endif
}

static void mavlink_test_ivaq_rx_signal(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IVAQ_RX_SIGNAL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ivaq_rx_signal_t packet_in = {
        963497464,45.0,29
    };
    mavlink_ivaq_rx_signal_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.rx_time_signal_ms = packet_in.rx_time_signal_ms;
        packet1.rx_signal_max = packet_in.rx_signal_max;
        packet1.rx_signal_det = packet_in.rx_signal_det;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_signal_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ivaq_rx_signal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_signal_pack(system_id, component_id, &msg , packet1.rx_time_signal_ms , packet1.rx_signal_det , packet1.rx_signal_max );
    mavlink_msg_ivaq_rx_signal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_signal_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.rx_time_signal_ms , packet1.rx_signal_det , packet1.rx_signal_max );
    mavlink_msg_ivaq_rx_signal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ivaq_rx_signal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_signal_send(MAVLINK_COMM_1 , packet1.rx_time_signal_ms , packet1.rx_signal_det , packet1.rx_signal_max );
    mavlink_msg_ivaq_rx_signal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("IVAQ_RX_SIGNAL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_IVAQ_RX_SIGNAL) != NULL);
#endif
}

static void mavlink_test_ivaq_rx_set_params(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ivaq_rx_set_params_t packet_in = {
        5,72,139
    };
    mavlink_ivaq_rx_set_params_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.rx_set_reset = packet_in.rx_set_reset;
        packet1.rx_set_stg_states = packet_in.rx_set_stg_states;
        packet1.rx_set_save_opt = packet_in.rx_set_save_opt;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_set_params_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ivaq_rx_set_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_set_params_pack(system_id, component_id, &msg , packet1.rx_set_reset , packet1.rx_set_stg_states , packet1.rx_set_save_opt );
    mavlink_msg_ivaq_rx_set_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_set_params_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.rx_set_reset , packet1.rx_set_stg_states , packet1.rx_set_save_opt );
    mavlink_msg_ivaq_rx_set_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ivaq_rx_set_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_set_params_send(MAVLINK_COMM_1 , packet1.rx_set_reset , packet1.rx_set_stg_states , packet1.rx_set_save_opt );
    mavlink_msg_ivaq_rx_set_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("IVAQ_RX_SET_PARAMS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS) != NULL);
#endif
}

static void mavlink_test_custom(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_ivaq_rx_params(system_id, component_id, last_msg);
    mavlink_test_ivaq_rx_signal(system_id, component_id, last_msg);
    mavlink_test_ivaq_rx_set_params(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // CUSTOM_TESTSUITE_H
