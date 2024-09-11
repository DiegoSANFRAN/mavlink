/** @file
 *    @brief MAVLink comm protocol testsuite generated from ivaq_mvk.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef IVAQ_MVK_TESTSUITE_H
#define IVAQ_MVK_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_minimal(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_ivaq_mvk(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_minimal(system_id, component_id, last_msg);
    mavlink_test_ivaq_mvk(system_id, component_id, last_msg);
}
#endif

#include "../minimal/testsuite.h"


static void mavlink_test_ivaq_rx_params_master(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ivaq_rx_params_master_t packet_in = {
        17.0,45.0,73.0,41,108,175,242,53,120,187,254,65,132,199,10,77,144,211,22,89,156,223,34,101
    };
    mavlink_ivaq_rx_params_master_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.rx_battery_voltage_x = packet_in.rx_battery_voltage_x;
        packet1.rx_battery_voltage_y = packet_in.rx_battery_voltage_y;
        packet1.rx_battery_voltage_z = packet_in.rx_battery_voltage_z;
        packet1.rx_mode_x = packet_in.rx_mode_x;
        packet1.rx_status_x = packet_in.rx_status_x;
        packet1.rx_anlg_en_x = packet_in.rx_anlg_en_x;
        packet1.rx_ant_states_x = packet_in.rx_ant_states_x;
        packet1.rx_stg_states_x = packet_in.rx_stg_states_x;
        packet1.rx_card_det_x = packet_in.rx_card_det_x;
        packet1.rx_save_opt_x = packet_in.rx_save_opt_x;
        packet1.rx_mode_y = packet_in.rx_mode_y;
        packet1.rx_status_y = packet_in.rx_status_y;
        packet1.rx_anlg_en_y = packet_in.rx_anlg_en_y;
        packet1.rx_ant_states_y = packet_in.rx_ant_states_y;
        packet1.rx_stg_states_y = packet_in.rx_stg_states_y;
        packet1.rx_card_det_y = packet_in.rx_card_det_y;
        packet1.rx_save_opt_y = packet_in.rx_save_opt_y;
        packet1.rx_mode_z = packet_in.rx_mode_z;
        packet1.rx_status_z = packet_in.rx_status_z;
        packet1.rx_anlg_en_z = packet_in.rx_anlg_en_z;
        packet1.rx_ant_states_z = packet_in.rx_ant_states_z;
        packet1.rx_stg_states_z = packet_in.rx_stg_states_z;
        packet1.rx_card_det_z = packet_in.rx_card_det_z;
        packet1.rx_save_opt_z = packet_in.rx_save_opt_z;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_params_master_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ivaq_rx_params_master_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_params_master_pack(system_id, component_id, &msg , packet1.rx_mode_x , packet1.rx_status_x , packet1.rx_anlg_en_x , packet1.rx_battery_voltage_x , packet1.rx_ant_states_x , packet1.rx_stg_states_x , packet1.rx_card_det_x , packet1.rx_save_opt_x , packet1.rx_mode_y , packet1.rx_status_y , packet1.rx_anlg_en_y , packet1.rx_battery_voltage_y , packet1.rx_ant_states_y , packet1.rx_stg_states_y , packet1.rx_card_det_y , packet1.rx_save_opt_y , packet1.rx_mode_z , packet1.rx_status_z , packet1.rx_anlg_en_z , packet1.rx_battery_voltage_z , packet1.rx_ant_states_z , packet1.rx_stg_states_z , packet1.rx_card_det_z , packet1.rx_save_opt_z );
    mavlink_msg_ivaq_rx_params_master_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_params_master_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.rx_mode_x , packet1.rx_status_x , packet1.rx_anlg_en_x , packet1.rx_battery_voltage_x , packet1.rx_ant_states_x , packet1.rx_stg_states_x , packet1.rx_card_det_x , packet1.rx_save_opt_x , packet1.rx_mode_y , packet1.rx_status_y , packet1.rx_anlg_en_y , packet1.rx_battery_voltage_y , packet1.rx_ant_states_y , packet1.rx_stg_states_y , packet1.rx_card_det_y , packet1.rx_save_opt_y , packet1.rx_mode_z , packet1.rx_status_z , packet1.rx_anlg_en_z , packet1.rx_battery_voltage_z , packet1.rx_ant_states_z , packet1.rx_stg_states_z , packet1.rx_card_det_z , packet1.rx_save_opt_z );
    mavlink_msg_ivaq_rx_params_master_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ivaq_rx_params_master_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_params_master_send(MAVLINK_COMM_1 , packet1.rx_mode_x , packet1.rx_status_x , packet1.rx_anlg_en_x , packet1.rx_battery_voltage_x , packet1.rx_ant_states_x , packet1.rx_stg_states_x , packet1.rx_card_det_x , packet1.rx_save_opt_x , packet1.rx_mode_y , packet1.rx_status_y , packet1.rx_anlg_en_y , packet1.rx_battery_voltage_y , packet1.rx_ant_states_y , packet1.rx_stg_states_y , packet1.rx_card_det_y , packet1.rx_save_opt_y , packet1.rx_mode_z , packet1.rx_status_z , packet1.rx_anlg_en_z , packet1.rx_battery_voltage_z , packet1.rx_ant_states_z , packet1.rx_stg_states_z , packet1.rx_card_det_z , packet1.rx_save_opt_z );
    mavlink_msg_ivaq_rx_params_master_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("IVAQ_RX_PARAMS_MASTER") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_IVAQ_RX_PARAMS_MASTER) != NULL);
#endif
}

static void mavlink_test_ivaq_rx_params_slave(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ivaq_rx_params_slave_t packet_in = {
        17.0,17,84,151,218,29,96,163
    };
    mavlink_ivaq_rx_params_slave_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.rx_battery_voltage = packet_in.rx_battery_voltage;
        packet1.rx_mode = packet_in.rx_mode;
        packet1.rx_status = packet_in.rx_status;
        packet1.rx_anlg_en = packet_in.rx_anlg_en;
        packet1.rx_ant_states = packet_in.rx_ant_states;
        packet1.rx_stg_states = packet_in.rx_stg_states;
        packet1.rx_card_det = packet_in.rx_card_det;
        packet1.rx_save_opt = packet_in.rx_save_opt;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_params_slave_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ivaq_rx_params_slave_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_params_slave_pack(system_id, component_id, &msg , packet1.rx_mode , packet1.rx_status , packet1.rx_anlg_en , packet1.rx_battery_voltage , packet1.rx_ant_states , packet1.rx_stg_states , packet1.rx_card_det , packet1.rx_save_opt );
    mavlink_msg_ivaq_rx_params_slave_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_params_slave_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.rx_mode , packet1.rx_status , packet1.rx_anlg_en , packet1.rx_battery_voltage , packet1.rx_ant_states , packet1.rx_stg_states , packet1.rx_card_det , packet1.rx_save_opt );
    mavlink_msg_ivaq_rx_params_slave_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ivaq_rx_params_slave_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_params_slave_send(MAVLINK_COMM_1 , packet1.rx_mode , packet1.rx_status , packet1.rx_anlg_en , packet1.rx_battery_voltage , packet1.rx_ant_states , packet1.rx_stg_states , packet1.rx_card_det , packet1.rx_save_opt );
    mavlink_msg_ivaq_rx_params_slave_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("IVAQ_RX_PARAMS_SLAVE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_IVAQ_RX_PARAMS_SLAVE) != NULL);
#endif
}

static void mavlink_test_ivaq_rx_set_params_master(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ivaq_rx_set_params_master_t packet_in = {
        5,72,139,206,17,84,151,218,29,96,163,230,41,108,175
    };
    mavlink_ivaq_rx_set_params_master_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.rx_set_reset_x = packet_in.rx_set_reset_x;
        packet1.rx_set_anlg_en_x = packet_in.rx_set_anlg_en_x;
        packet1.rx_set_ant_states_x = packet_in.rx_set_ant_states_x;
        packet1.rx_set_stg_states_x = packet_in.rx_set_stg_states_x;
        packet1.rx_set_save_opt_x = packet_in.rx_set_save_opt_x;
        packet1.rx_set_reset_y = packet_in.rx_set_reset_y;
        packet1.rx_set_anlg_en_y = packet_in.rx_set_anlg_en_y;
        packet1.rx_set_ant_states_y = packet_in.rx_set_ant_states_y;
        packet1.rx_set_stg_states_y = packet_in.rx_set_stg_states_y;
        packet1.rx_set_save_opt_y = packet_in.rx_set_save_opt_y;
        packet1.rx_set_reset_z = packet_in.rx_set_reset_z;
        packet1.rx_set_anlg_en_z = packet_in.rx_set_anlg_en_z;
        packet1.rx_set_ant_states_z = packet_in.rx_set_ant_states_z;
        packet1.rx_set_stg_states_z = packet_in.rx_set_stg_states_z;
        packet1.rx_set_save_opt_z = packet_in.rx_set_save_opt_z;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_set_params_master_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ivaq_rx_set_params_master_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_set_params_master_pack(system_id, component_id, &msg , packet1.rx_set_reset_x , packet1.rx_set_anlg_en_x , packet1.rx_set_ant_states_x , packet1.rx_set_stg_states_x , packet1.rx_set_save_opt_x , packet1.rx_set_reset_y , packet1.rx_set_anlg_en_y , packet1.rx_set_ant_states_y , packet1.rx_set_stg_states_y , packet1.rx_set_save_opt_y , packet1.rx_set_reset_z , packet1.rx_set_anlg_en_z , packet1.rx_set_ant_states_z , packet1.rx_set_stg_states_z , packet1.rx_set_save_opt_z );
    mavlink_msg_ivaq_rx_set_params_master_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_set_params_master_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.rx_set_reset_x , packet1.rx_set_anlg_en_x , packet1.rx_set_ant_states_x , packet1.rx_set_stg_states_x , packet1.rx_set_save_opt_x , packet1.rx_set_reset_y , packet1.rx_set_anlg_en_y , packet1.rx_set_ant_states_y , packet1.rx_set_stg_states_y , packet1.rx_set_save_opt_y , packet1.rx_set_reset_z , packet1.rx_set_anlg_en_z , packet1.rx_set_ant_states_z , packet1.rx_set_stg_states_z , packet1.rx_set_save_opt_z );
    mavlink_msg_ivaq_rx_set_params_master_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ivaq_rx_set_params_master_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_set_params_master_send(MAVLINK_COMM_1 , packet1.rx_set_reset_x , packet1.rx_set_anlg_en_x , packet1.rx_set_ant_states_x , packet1.rx_set_stg_states_x , packet1.rx_set_save_opt_x , packet1.rx_set_reset_y , packet1.rx_set_anlg_en_y , packet1.rx_set_ant_states_y , packet1.rx_set_stg_states_y , packet1.rx_set_save_opt_y , packet1.rx_set_reset_z , packet1.rx_set_anlg_en_z , packet1.rx_set_ant_states_z , packet1.rx_set_stg_states_z , packet1.rx_set_save_opt_z );
    mavlink_msg_ivaq_rx_set_params_master_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("IVAQ_RX_SET_PARAMS_MASTER") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_MASTER) != NULL);
#endif
}

static void mavlink_test_ivaq_rx_set_params_slave(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ivaq_rx_set_params_slave_t packet_in = {
        5,72,139,206,17
    };
    mavlink_ivaq_rx_set_params_slave_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.rx_set_reset = packet_in.rx_set_reset;
        packet1.rx_set_anlg_en = packet_in.rx_set_anlg_en;
        packet1.rx_set_ant_states = packet_in.rx_set_ant_states;
        packet1.rx_set_stg_states = packet_in.rx_set_stg_states;
        packet1.rx_set_save_opt = packet_in.rx_set_save_opt;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_set_params_slave_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ivaq_rx_set_params_slave_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_set_params_slave_pack(system_id, component_id, &msg , packet1.rx_set_reset , packet1.rx_set_anlg_en , packet1.rx_set_ant_states , packet1.rx_set_stg_states , packet1.rx_set_save_opt );
    mavlink_msg_ivaq_rx_set_params_slave_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_set_params_slave_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.rx_set_reset , packet1.rx_set_anlg_en , packet1.rx_set_ant_states , packet1.rx_set_stg_states , packet1.rx_set_save_opt );
    mavlink_msg_ivaq_rx_set_params_slave_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ivaq_rx_set_params_slave_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_set_params_slave_send(MAVLINK_COMM_1 , packet1.rx_set_reset , packet1.rx_set_anlg_en , packet1.rx_set_ant_states , packet1.rx_set_stg_states , packet1.rx_set_save_opt );
    mavlink_msg_ivaq_rx_set_params_slave_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("IVAQ_RX_SET_PARAMS_SLAVE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_IVAQ_RX_SET_PARAMS_SLAVE) != NULL);
#endif
}

static void mavlink_test_ivaq_rx_signal_master(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ivaq_rx_signal_master_t packet_in = {
        963497464,45.0,73.0,101.0,129.0,157.0,185.0,213.0,241.0,269.0,297.0,325.0,353.0,161,228,39,106,173,240
    };
    mavlink_ivaq_rx_signal_master_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.rx_time_signal_ms = packet_in.rx_time_signal_ms;
        packet1.rx_signal_raw_x = packet_in.rx_signal_raw_x;
        packet1.rx_signal_corr_x = packet_in.rx_signal_corr_x;
        packet1.rx_noise_raw_x = packet_in.rx_noise_raw_x;
        packet1.rx_noise_corr_x = packet_in.rx_noise_corr_x;
        packet1.rx_signal_raw_y = packet_in.rx_signal_raw_y;
        packet1.rx_signal_corr_y = packet_in.rx_signal_corr_y;
        packet1.rx_noise_raw_y = packet_in.rx_noise_raw_y;
        packet1.rx_noise_corr_y = packet_in.rx_noise_corr_y;
        packet1.rx_signal_raw_z = packet_in.rx_signal_raw_z;
        packet1.rx_signal_corr_z = packet_in.rx_signal_corr_z;
        packet1.rx_noise_raw_z = packet_in.rx_noise_raw_z;
        packet1.rx_noise_corr_z = packet_in.rx_noise_corr_z;
        packet1.rx_saturation_flag_x = packet_in.rx_saturation_flag_x;
        packet1.rx_signal_det_x = packet_in.rx_signal_det_x;
        packet1.rx_saturation_flag_y = packet_in.rx_saturation_flag_y;
        packet1.rx_signal_det_y = packet_in.rx_signal_det_y;
        packet1.rx_saturation_flag_z = packet_in.rx_saturation_flag_z;
        packet1.rx_signal_det_z = packet_in.rx_signal_det_z;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_signal_master_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ivaq_rx_signal_master_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_signal_master_pack(system_id, component_id, &msg , packet1.rx_time_signal_ms , packet1.rx_saturation_flag_x , packet1.rx_signal_det_x , packet1.rx_signal_raw_x , packet1.rx_signal_corr_x , packet1.rx_noise_raw_x , packet1.rx_noise_corr_x , packet1.rx_saturation_flag_y , packet1.rx_signal_det_y , packet1.rx_signal_raw_y , packet1.rx_signal_corr_y , packet1.rx_noise_raw_y , packet1.rx_noise_corr_y , packet1.rx_saturation_flag_z , packet1.rx_signal_det_z , packet1.rx_signal_raw_z , packet1.rx_signal_corr_z , packet1.rx_noise_raw_z , packet1.rx_noise_corr_z );
    mavlink_msg_ivaq_rx_signal_master_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_signal_master_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.rx_time_signal_ms , packet1.rx_saturation_flag_x , packet1.rx_signal_det_x , packet1.rx_signal_raw_x , packet1.rx_signal_corr_x , packet1.rx_noise_raw_x , packet1.rx_noise_corr_x , packet1.rx_saturation_flag_y , packet1.rx_signal_det_y , packet1.rx_signal_raw_y , packet1.rx_signal_corr_y , packet1.rx_noise_raw_y , packet1.rx_noise_corr_y , packet1.rx_saturation_flag_z , packet1.rx_signal_det_z , packet1.rx_signal_raw_z , packet1.rx_signal_corr_z , packet1.rx_noise_raw_z , packet1.rx_noise_corr_z );
    mavlink_msg_ivaq_rx_signal_master_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ivaq_rx_signal_master_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_signal_master_send(MAVLINK_COMM_1 , packet1.rx_time_signal_ms , packet1.rx_saturation_flag_x , packet1.rx_signal_det_x , packet1.rx_signal_raw_x , packet1.rx_signal_corr_x , packet1.rx_noise_raw_x , packet1.rx_noise_corr_x , packet1.rx_saturation_flag_y , packet1.rx_signal_det_y , packet1.rx_signal_raw_y , packet1.rx_signal_corr_y , packet1.rx_noise_raw_y , packet1.rx_noise_corr_y , packet1.rx_saturation_flag_z , packet1.rx_signal_det_z , packet1.rx_signal_raw_z , packet1.rx_signal_corr_z , packet1.rx_noise_raw_z , packet1.rx_noise_corr_z );
    mavlink_msg_ivaq_rx_signal_master_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("IVAQ_RX_SIGNAL_MASTER") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_MASTER) != NULL);
#endif
}

static void mavlink_test_ivaq_rx_signal_slave(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_ivaq_rx_signal_slave_t packet_in = {
        17.0,45.0,73.0,101.0,53,120
    };
    mavlink_ivaq_rx_signal_slave_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.rx_signal_raw = packet_in.rx_signal_raw;
        packet1.rx_signal_corr = packet_in.rx_signal_corr;
        packet1.rx_noise_raw = packet_in.rx_noise_raw;
        packet1.rx_noise_corr = packet_in.rx_noise_corr;
        packet1.rx_saturation_flag = packet_in.rx_saturation_flag;
        packet1.rx_signal_det = packet_in.rx_signal_det;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_signal_slave_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_ivaq_rx_signal_slave_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_signal_slave_pack(system_id, component_id, &msg , packet1.rx_saturation_flag , packet1.rx_signal_det , packet1.rx_signal_raw , packet1.rx_signal_corr , packet1.rx_noise_raw , packet1.rx_noise_corr );
    mavlink_msg_ivaq_rx_signal_slave_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_signal_slave_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.rx_saturation_flag , packet1.rx_signal_det , packet1.rx_signal_raw , packet1.rx_signal_corr , packet1.rx_noise_raw , packet1.rx_noise_corr );
    mavlink_msg_ivaq_rx_signal_slave_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_ivaq_rx_signal_slave_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_ivaq_rx_signal_slave_send(MAVLINK_COMM_1 , packet1.rx_saturation_flag , packet1.rx_signal_det , packet1.rx_signal_raw , packet1.rx_signal_corr , packet1.rx_noise_raw , packet1.rx_noise_corr );
    mavlink_msg_ivaq_rx_signal_slave_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("IVAQ_RX_SIGNAL_SLAVE") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_IVAQ_RX_SIGNAL_SLAVE) != NULL);
#endif
}

static void mavlink_test_ivaq_mvk(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_ivaq_rx_params_master(system_id, component_id, last_msg);
    mavlink_test_ivaq_rx_params_slave(system_id, component_id, last_msg);
    mavlink_test_ivaq_rx_set_params_master(system_id, component_id, last_msg);
    mavlink_test_ivaq_rx_set_params_slave(system_id, component_id, last_msg);
    mavlink_test_ivaq_rx_signal_master(system_id, component_id, last_msg);
    mavlink_test_ivaq_rx_signal_slave(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // IVAQ_MVK_TESTSUITE_H
