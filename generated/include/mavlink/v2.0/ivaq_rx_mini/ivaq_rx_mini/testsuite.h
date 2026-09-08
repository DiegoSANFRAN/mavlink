/** @file
 *    @brief MAVLink comm protocol testsuite generated from ivaq_rx_mini.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef IVAQ_RX_MINI_TESTSUITE_H
#define IVAQ_RX_MINI_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_minimal(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_ivaq_rx_mini(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_minimal(system_id, component_id, last_msg);
    mavlink_test_ivaq_rx_mini(system_id, component_id, last_msg);
}
#endif

#include "../minimal/testsuite.h"


static void mavlink_test_system_time(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_SYSTEM_TIME >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_system_time_t packet_in = {
        93372036854775807ULL,963497880
    };
    mavlink_system_time_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_unix_usec = packet_in.time_unix_usec;
        packet1.time_boot_ms = packet_in.time_boot_ms;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_SYSTEM_TIME_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_SYSTEM_TIME_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_system_time_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_system_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_system_time_pack(system_id, component_id, &msg , packet1.time_unix_usec , packet1.time_boot_ms );
    mavlink_msg_system_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_system_time_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_unix_usec , packet1.time_boot_ms );
    mavlink_msg_system_time_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_system_time_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_system_time_send(MAVLINK_COMM_1 , packet1.time_unix_usec , packet1.time_boot_ms );
    mavlink_msg_system_time_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("SYSTEM_TIME") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_SYSTEM_TIME) != NULL);
#endif
}

static void mavlink_test_ivaq_rx_mini_params(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ivaq_rx_mini_params_t packet_in = {
        5,72,139,206
    };
    mavlink_ivaq_rx_mini_params_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.rx_status = packet_in.rx_status;
        packet1.rx_card_det = packet_in.rx_card_det;
        packet1.rx_capture_state = packet_in.rx_capture_state;
        packet1.rx_stage_state = packet_in.rx_stage_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_mini_params_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ivaq_rx_mini_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_mini_params_pack(system_id, component_id, &msg , packet1.rx_status , packet1.rx_card_det , packet1.rx_capture_state , packet1.rx_stage_state );
    mavlink_msg_ivaq_rx_mini_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_mini_params_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.rx_status , packet1.rx_card_det , packet1.rx_capture_state , packet1.rx_stage_state );
    mavlink_msg_ivaq_rx_mini_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ivaq_rx_mini_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_mini_params_send(MAVLINK_COMM_1 , packet1.rx_status , packet1.rx_card_det , packet1.rx_capture_state , packet1.rx_stage_state );
    mavlink_msg_ivaq_rx_mini_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("IVAQ_RX_MINI_PARAMS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_IVAQ_RX_MINI_PARAMS) != NULL);
#endif
}

static void mavlink_test_ivaq_rx_mini_set_params(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ivaq_rx_mini_set_params_t packet_in = {
        5,72,139
    };
    mavlink_ivaq_rx_mini_set_params_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.rx_set_update = packet_in.rx_set_update;
        packet1.rx_set_reset = packet_in.rx_set_reset;
        packet1.rx_capture_command = packet_in.rx_capture_command;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_mini_set_params_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ivaq_rx_mini_set_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_mini_set_params_pack(system_id, component_id, &msg , packet1.rx_set_update , packet1.rx_set_reset , packet1.rx_capture_command );
    mavlink_msg_ivaq_rx_mini_set_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_mini_set_params_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.rx_set_update , packet1.rx_set_reset , packet1.rx_capture_command );
    mavlink_msg_ivaq_rx_mini_set_params_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ivaq_rx_mini_set_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_mini_set_params_send(MAVLINK_COMM_1 , packet1.rx_set_update , packet1.rx_set_reset , packet1.rx_capture_command );
    mavlink_msg_ivaq_rx_mini_set_params_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("IVAQ_RX_MINI_SET_PARAMS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_IVAQ_RX_MINI_SET_PARAMS) != NULL);
#endif
}

static void mavlink_test_ivaq_rx_mini_signal(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ivaq_rx_mini_signal_t packet_in = {
        93372036854775807ULL,93372036854776311ULL,93372036854776815ULL,185.0,213.0,241.0,269.0,297.0,325.0,353.0,381.0,409.0,437.0,465.0,493.0,521.0,549.0,245,56,123,190,1,68,135,202
    };
    mavlink_ivaq_rx_mini_signal_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.rx_signal_det_time = packet_in.rx_signal_det_time;
        packet1.rx_signal_det_time_x = packet_in.rx_signal_det_time_x;
        packet1.rx_signal_det_time_y = packet_in.rx_signal_det_time_y;
        packet1.rx_signal_det_module_nocorr = packet_in.rx_signal_det_module_nocorr;
        packet1.rx_signal_det_module_corr = packet_in.rx_signal_det_module_corr;
        packet1.rx_signal_det_val_nocorr_x = packet_in.rx_signal_det_val_nocorr_x;
        packet1.rx_signal_det_val_corr_x = packet_in.rx_signal_det_val_corr_x;
        packet1.rx_noise_val_nocorr_x = packet_in.rx_noise_val_nocorr_x;
        packet1.rx_noise_val_corr_x = packet_in.rx_noise_val_corr_x;
        packet1.rx_noise_std_nocorr_x = packet_in.rx_noise_std_nocorr_x;
        packet1.rx_noise_std_corr_x = packet_in.rx_noise_std_corr_x;
        packet1.rx_signal_det_val_nocorr_y = packet_in.rx_signal_det_val_nocorr_y;
        packet1.rx_signal_det_val_corr_y = packet_in.rx_signal_det_val_corr_y;
        packet1.rx_noise_val_nocorr_y = packet_in.rx_noise_val_nocorr_y;
        packet1.rx_noise_val_corr_y = packet_in.rx_noise_val_corr_y;
        packet1.rx_noise_std_nocorr_y = packet_in.rx_noise_std_nocorr_y;
        packet1.rx_noise_std_corr_y = packet_in.rx_noise_std_corr_y;
        packet1.rx_signal_det_flag = packet_in.rx_signal_det_flag;
        packet1.rx_saturation_flag_x = packet_in.rx_saturation_flag_x;
        packet1.rx_signal_det_flag_x = packet_in.rx_signal_det_flag_x;
        packet1.rx_signal_det_sat_flag_x = packet_in.rx_signal_det_sat_flag_x;
        packet1.rx_saturation_flag_y = packet_in.rx_saturation_flag_y;
        packet1.rx_signal_det_flag_y = packet_in.rx_signal_det_flag_y;
        packet1.rx_signal_det_sat_flag_y = packet_in.rx_signal_det_sat_flag_y;
        packet1.rx_time_reference = packet_in.rx_time_reference;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_mini_signal_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ivaq_rx_mini_signal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_mini_signal_pack(system_id, component_id, &msg , packet1.rx_signal_det_flag , packet1.rx_signal_det_time , packet1.rx_signal_det_module_nocorr , packet1.rx_signal_det_module_corr , packet1.rx_saturation_flag_x , packet1.rx_signal_det_flag_x , packet1.rx_signal_det_sat_flag_x , packet1.rx_signal_det_time_x , packet1.rx_signal_det_val_nocorr_x , packet1.rx_signal_det_val_corr_x , packet1.rx_noise_val_nocorr_x , packet1.rx_noise_val_corr_x , packet1.rx_noise_std_nocorr_x , packet1.rx_noise_std_corr_x , packet1.rx_saturation_flag_y , packet1.rx_signal_det_flag_y , packet1.rx_signal_det_sat_flag_y , packet1.rx_signal_det_time_y , packet1.rx_signal_det_val_nocorr_y , packet1.rx_signal_det_val_corr_y , packet1.rx_noise_val_nocorr_y , packet1.rx_noise_val_corr_y , packet1.rx_noise_std_nocorr_y , packet1.rx_noise_std_corr_y , packet1.rx_time_reference );
    mavlink_msg_ivaq_rx_mini_signal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_mini_signal_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.rx_signal_det_flag , packet1.rx_signal_det_time , packet1.rx_signal_det_module_nocorr , packet1.rx_signal_det_module_corr , packet1.rx_saturation_flag_x , packet1.rx_signal_det_flag_x , packet1.rx_signal_det_sat_flag_x , packet1.rx_signal_det_time_x , packet1.rx_signal_det_val_nocorr_x , packet1.rx_signal_det_val_corr_x , packet1.rx_noise_val_nocorr_x , packet1.rx_noise_val_corr_x , packet1.rx_noise_std_nocorr_x , packet1.rx_noise_std_corr_x , packet1.rx_saturation_flag_y , packet1.rx_signal_det_flag_y , packet1.rx_signal_det_sat_flag_y , packet1.rx_signal_det_time_y , packet1.rx_signal_det_val_nocorr_y , packet1.rx_signal_det_val_corr_y , packet1.rx_noise_val_nocorr_y , packet1.rx_noise_val_corr_y , packet1.rx_noise_std_nocorr_y , packet1.rx_noise_std_corr_y , packet1.rx_time_reference );
    mavlink_msg_ivaq_rx_mini_signal_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ivaq_rx_mini_signal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_mini_signal_send(MAVLINK_COMM_1 , packet1.rx_signal_det_flag , packet1.rx_signal_det_time , packet1.rx_signal_det_module_nocorr , packet1.rx_signal_det_module_corr , packet1.rx_saturation_flag_x , packet1.rx_signal_det_flag_x , packet1.rx_signal_det_sat_flag_x , packet1.rx_signal_det_time_x , packet1.rx_signal_det_val_nocorr_x , packet1.rx_signal_det_val_corr_x , packet1.rx_noise_val_nocorr_x , packet1.rx_noise_val_corr_x , packet1.rx_noise_std_nocorr_x , packet1.rx_noise_std_corr_x , packet1.rx_saturation_flag_y , packet1.rx_signal_det_flag_y , packet1.rx_signal_det_sat_flag_y , packet1.rx_signal_det_time_y , packet1.rx_signal_det_val_nocorr_y , packet1.rx_signal_det_val_corr_y , packet1.rx_noise_val_nocorr_y , packet1.rx_noise_val_corr_y , packet1.rx_noise_std_nocorr_y , packet1.rx_noise_std_corr_y , packet1.rx_time_reference );
    mavlink_msg_ivaq_rx_mini_signal_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("IVAQ_RX_MINI_SIGNAL") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_IVAQ_RX_MINI_SIGNAL) != NULL);
#endif
}

static void mavlink_test_ivaq_rx_mini(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_system_time(system_id, component_id, last_msg);
    mavlink_test_ivaq_rx_mini_params(system_id, component_id, last_msg);
    mavlink_test_ivaq_rx_mini_set_params(system_id, component_id, last_msg);
    mavlink_test_ivaq_rx_mini_signal(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // IVAQ_RX_MINI_TESTSUITE_H
