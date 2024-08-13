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

#define MAVLINK_IVAQ_MVK_XML_HASH -2633866167151703787

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{0, 50, 9, 9, 0, 0, 0}, {2, 137, 12, 12, 0, 0, 0}, {200, 244, 8, 8, 0, 0, 0}, {201, 204, 3, 3, 0, 0, 0}, {202, 109, 31, 31, 0, 0, 0}, {203, 80, 9, 9, 0, 0, 0}, {300, 217, 22, 22, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_IVAQ_MVK

// ENUM DEFINITIONS


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

/** @brief These values define the stage states of the system. */
#ifndef HAVE_ENUM_MVK_STAGE_STATES
#define HAVE_ENUM_MVK_STAGE_STATES
typedef enum MVK_STAGE_STATES
{
   MVK_STAGE_1_OFF_STAGE_2_OFF=0, /* Stage 1 off, Stage 2 off | */
   MVK_STAGE_1_ON_STAGE_2_OFF=1, /* Stage 1 on, Stage 2 off | */
   MVK_STAGE_1_OFF_STAGE_2_ON=2, /* Stage 1 off, Stage 2 on | */
   MVK_STAGE_1_ON_STAGE_2_ON=3, /* Stage 1 on, Stage 2 on | */
   MVK_STAGE_STATES_ENUM_END=4, /*  | */
} MVK_STAGE_STATES;
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
#include "./mavlink_msg_system_time.h"
#include "./mavlink_msg_ivaq_rx_params.h"
#include "./mavlink_msg_ivaq_rx_set_params.h"
#include "./mavlink_msg_ivaq_rx_signal_master.h"
#include "./mavlink_msg_ivaq_rx_signal_slave.h"

// base include
#include "../minimal/minimal.h"


#if MAVLINK_IVAQ_MVK_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_SYSTEM_TIME, MAVLINK_MESSAGE_INFO_IVAQ_RX_PARAMS, MAVLINK_MESSAGE_INFO_IVAQ_RX_SET_PARAMS, MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL_MASTER, MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL_SLAVE, MAVLINK_MESSAGE_INFO_PROTOCOL_VERSION}
# define MAVLINK_MESSAGE_NAMES {{ "HEARTBEAT", 0 }, { "IVAQ_RX_PARAMS", 200 }, { "IVAQ_RX_SET_PARAMS", 201 }, { "IVAQ_RX_SIGNAL_MASTER", 202 }, { "IVAQ_RX_SIGNAL_SLAVE", 203 }, { "PROTOCOL_VERSION", 300 }, { "SYSTEM_TIME", 2 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_IVAQ_MVK_H
