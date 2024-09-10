/** @file
 *  @brief MAVLink comm protocol generated from ivaq_mvk.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_IVAQ_MVK_H
#define MAVLINK_IVAQ_MVK_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_IVAQ_MVK.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_IVAQ_MVK_XML_HASH -7645448934960375571

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{0, 50, 9, 9, 0, 0, 0}, {200, 62, 30, 30, 0, 0, 0}, {201, 235, 10, 10, 0, 0, 0}, {202, 80, 12, 12, 0, 0, 0}, {203, 56, 4, 4, 0, 0, 0}, {204, 212, 58, 58, 0, 0, 0}, {205, 11, 18, 18, 0, 0, 0}, {300, 217, 22, 22, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_IVAQ_MVK

// ENUM DEFINITIONS


/** @brief These values define the status of the receiver. */
#ifndef HAVE_ENUM_MVK_RX_MODE
#define HAVE_ENUM_MVK_RX_MODE
typedef enum MVK_RX_MODE
{
   MVK_MODE_1=0, /* PCB Mode 1 | */
   MVK_MODE_2=1, /* PCB Mode 2 | */
   MVK_MODE_3=2, /* PCB Mode 3 | */
   MVK_RX_MODE_ENUM_END=3, /*  | */
} MVK_RX_MODE;
#endif

/** @brief These values define the status of the receiver. */
#ifndef HAVE_ENUM_MVK_RX_STATUS
#define HAVE_ENUM_MVK_RX_STATUS
typedef enum MVK_RX_STATUS
{
   MVK_POWER_OFF=0, /* Power off | */
   MVK_POWER_ON=1, /* Power on | */
   MVK_POWER_ON_LOW_BATT=2, /* Power on with low battery | */
   MVK_POWER_ON_ERROR_COMMS=3, /* Power on with communication error | */
   MVK_RX_STATUS_ENUM_END=4, /*  | */
} MVK_RX_STATUS;
#endif

/** @brief These values define the antenna state of each PCB */
#ifndef HAVE_ENUM_MVK_ANT_STATES
#define HAVE_ENUM_MVK_ANT_STATES
typedef enum MVK_ANT_STATES
{
   MVK_ANT_1_OFF=0, /* Antenna 1 off | */
   MVK_ANT_1_ON=1, /* Antenna 1 on | */
   MVK_ANT_STATES_ENUM_END=2, /*  | */
} MVK_ANT_STATES;
#endif

/** @brief These values define the stage states of each PCB */
#ifndef HAVE_ENUM_MVK_STAGE_STATES
#define HAVE_ENUM_MVK_STAGE_STATES
typedef enum MVK_STAGE_STATES
{
   MVK_STAGE_1_OFF_STAGE_2_OFF_STAGE_3_OFF_STAGE_4_OFF=0, /* Stage 1 off, Stage 2 off, Stage 3 off, Stage 4 off | */
   MVK_STAGE_1_ON_STAGE_2_OFF_STAGE_3_OFF_STAGE_4_OFF=1, /* Stage 1 on, Stage 2 off, Stage 3 off, Stage 4 off | */
   MVK_STAGE_1_ON_STAGE_2_ON_STAGE_3_OFF_STAGE_4_OFF=2, /* Stage 1 on, Stage 2 on, Stage 3 off, Stage 4 off | */
   MVK_STAGE_1_ON_STAGE_2_ON_STAGE_3_ON_STAGE_4_OFF=3, /* Stage 1 on, Stage 2 on, Stage 3 on, Stage 4 off | */
   MVK_STAGE_1_ON_STAGE_2_ON_STAGE_3_ON_STAGE_4_ON=4, /* Stage 1 on, Stage 2 on, Stage 3 on, Stage 4 on | */
   MVK_STAGE_STATES_ENUM_END=5, /*  | */
} MVK_STAGE_STATES;
#endif

/** @brief These values define the save states of the system. */
#ifndef HAVE_ENUM_MVK_CARD_STATE
#define HAVE_ENUM_MVK_CARD_STATE
typedef enum MVK_CARD_STATE
{
   MVK_CARD_NOT_PRESENT=0, /* Save false | */
   MVK_CARD_PRESENT=1, /* Save push button on | */
   MVK_CARD_STATE_ENUM_END=2, /*  | */
} MVK_CARD_STATE;
#endif

/** @brief These values define the save states of the system. */
#ifndef HAVE_ENUM_MVK_SAVE_STATE
#define HAVE_ENUM_MVK_SAVE_STATE
typedef enum MVK_SAVE_STATE
{
   MVK_SAVE_FALSE=0, /* Save false | */
   MVK_SAVE_PB_ON=1, /* Save push button on | */
   MVK_SAVE_ACQ=2, /* Save acquisition | */
   MVK_SAVE_2_SD=3, /* Save to SD card | */
   MVK_SAVE_STATE_ENUM_END=4, /*  | */
} MVK_SAVE_STATE;
#endif

/** @brief These values define the boolean states. */
#ifndef HAVE_ENUM_MVK_SIGNAL_SAT
#define HAVE_ENUM_MVK_SIGNAL_SAT
typedef enum MVK_SIGNAL_SAT
{
   MVK_SAT_FALSE=0, /* False | */
   MVK_SAT_TRUE=1, /* True | */
   MVK_SIGNAL_SAT_ENUM_END=2, /*  | */
} MVK_SIGNAL_SAT;
#endif

/** @brief These values define the boolean states. */
#ifndef HAVE_ENUM_MVK_SIGNAL_DET
#define HAVE_ENUM_MVK_SIGNAL_DET
typedef enum MVK_SIGNAL_DET
{
   MVK_DET_FALSE=0, /* False | */
   MVK_DET_TRUE=1, /* True | */
   MVK_SIGNAL_DET_ENUM_END=2, /*  | */
} MVK_SIGNAL_DET;
#endif

/** @brief These values define the boolean states. */
#ifndef HAVE_ENUM_MVK_RX_RESET
#define HAVE_ENUM_MVK_RX_RESET
typedef enum MVK_RX_RESET
{
   MVK_RESET_FALSE=0, /* False | */
   MVK_RESET_TRUE=1, /* True | */
   MVK_RX_RESET_ENUM_END=2, /*  | */
} MVK_RX_RESET;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_ivaq_rx_params_master.h"
#include "./mavlink_msg_ivaq_rx_params_slave.h"
#include "./mavlink_msg_ivaq_rx_set_params_master.h"
#include "./mavlink_msg_ivaq_rx_set_params_slave.h"
#include "./mavlink_msg_ivaq_rx_signal_master.h"
#include "./mavlink_msg_ivaq_rx_signal_slave.h"

// base include
#include "../minimal/minimal.h"


#if MAVLINK_IVAQ_MVK_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_IVAQ_RX_PARAMS_MASTER, MAVLINK_MESSAGE_INFO_IVAQ_RX_PARAMS_SLAVE, MAVLINK_MESSAGE_INFO_IVAQ_RX_SET_PARAMS_MASTER, MAVLINK_MESSAGE_INFO_IVAQ_RX_SET_PARAMS_SLAVE, MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL_MASTER, MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL_SLAVE, MAVLINK_MESSAGE_INFO_PROTOCOL_VERSION}
# define MAVLINK_MESSAGE_NAMES {{ "HEARTBEAT", 0 }, { "IVAQ_RX_PARAMS_MASTER", 200 }, { "IVAQ_RX_PARAMS_SLAVE", 201 }, { "IVAQ_RX_SET_PARAMS_MASTER", 202 }, { "IVAQ_RX_SET_PARAMS_SLAVE", 203 }, { "IVAQ_RX_SIGNAL_MASTER", 204 }, { "IVAQ_RX_SIGNAL_SLAVE", 205 }, { "PROTOCOL_VERSION", 300 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_IVAQ_MVK_H
