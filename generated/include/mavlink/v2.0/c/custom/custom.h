/** @file
 *  @brief MAVLink comm protocol generated from custom.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_CUSTOM_H
#define MAVLINK_CUSTOM_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_CUSTOM.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_CUSTOM_XML_HASH 4911569304097845942

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{0, 50, 9, 9, 0, 0, 0}, {200, 108, 4, 4, 0, 0, 0}, {201, 209, 9, 9, 0, 0, 0}, {202, 204, 3, 3, 0, 0, 0}, {300, 217, 22, 22, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_CUSTOM

// ENUM DEFINITIONS


/** @brief These values define the status of the receiver. */
#ifndef HAVE_ENUM_RX_STATUS
#define HAVE_ENUM_RX_STATUS
typedef enum RX_STATUS
{
   POWER_OFF=0, /* Power off | */
   POWER_ON=1, /* Power on | */
   POWER_ON_LOW_BATT=2, /* Power on with low battery | */
   POWER_ON_ERROR_COMMS=3, /* Power on with communication error | */
   RX_STATUS_ENUM_END=4, /*  | */
} RX_STATUS;
#endif

/** @brief These values define the stage states of the system. */
#ifndef HAVE_ENUM_STAGE_STATES
#define HAVE_ENUM_STAGE_STATES
typedef enum STAGE_STATES
{
   STAGE_1_OFF_STAGE_2_OFF=0, /* Stage 1 off, Stage 2 off | */
   STAGE_1_ON_STAGE_2_OFF=1, /* Stage 1 on, Stage 2 off | */
   STAGE_1_OFF_STAGE_2_ON=2, /* Stage 1 off, Stage 2 on | */
   STAGE_1_ON_STAGE_2_ON=3, /* Stage 1 on, Stage 2 on | */
   STAGE_STATES_ENUM_END=4, /*  | */
} STAGE_STATES;
#endif

/** @brief These values define the save states of the system. */
#ifndef HAVE_ENUM_SAVE_STATE
#define HAVE_ENUM_SAVE_STATE
typedef enum SAVE_STATE
{
   SAVE_FALSE=0, /* Save false | */
   SAVE_PB_ON=1, /* Save push button on | */
   SAVE_ACQ=2, /* Save acquisition | */
   SAVE_2_SD=3, /* Save to SD card | */
   SAVE_STATE_ENUM_END=4, /*  | */
} SAVE_STATE;
#endif

/** @brief These values define the boolean states. */
#ifndef HAVE_ENUM_SIGNAL_SAT
#define HAVE_ENUM_SIGNAL_SAT
typedef enum SIGNAL_SAT
{
   SAT_FALSE=0, /* False | */
   SAT_TRUE=1, /* True | */
   SIGNAL_SAT_ENUM_END=2, /*  | */
} SIGNAL_SAT;
#endif

/** @brief These values define the boolean states. */
#ifndef HAVE_ENUM_SIGNAL_DET
#define HAVE_ENUM_SIGNAL_DET
typedef enum SIGNAL_DET
{
   DET_FALSE=0, /* False | */
   DET_TRUE=1, /* True | */
   SIGNAL_DET_ENUM_END=2, /*  | */
} SIGNAL_DET;
#endif

/** @brief These values define the boolean states. */
#ifndef HAVE_ENUM_RX_RESET
#define HAVE_ENUM_RX_RESET
typedef enum RX_RESET
{
   RESET_FALSE=0, /* False | */
   RESET_TRUE=1, /* True | */
   RX_RESET_ENUM_END=2, /*  | */
} RX_RESET;
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
#include "./mavlink_msg_ivaq_rx_params.h"
#include "./mavlink_msg_ivaq_rx_signal.h"
#include "./mavlink_msg_ivaq_rx_set_params.h"

// base include
#include "../minimal/minimal.h"


#if MAVLINK_CUSTOM_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_IVAQ_RX_PARAMS, MAVLINK_MESSAGE_INFO_IVAQ_RX_SIGNAL, MAVLINK_MESSAGE_INFO_IVAQ_RX_SET_PARAMS, MAVLINK_MESSAGE_INFO_PROTOCOL_VERSION}
# define MAVLINK_MESSAGE_NAMES {{ "HEARTBEAT", 0 }, { "IVAQ_RX_PARAMS", 200 }, { "IVAQ_RX_SET_PARAMS", 202 }, { "IVAQ_RX_SIGNAL", 201 }, { "PROTOCOL_VERSION", 300 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_CUSTOM_H
