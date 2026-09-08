/** @file
 *  @brief MAVLink comm protocol generated from ivaq_rx_mini.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_IVAQ_RX_MINI_H
#define MAVLINK_IVAQ_RX_MINI_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_IVAQ_RX_MINI.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_IVAQ_RX_MINI_XML_HASH -2776332315764866165

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{0, 50, 9, 9, 0, 0, 0}, {2, 137, 12, 12, 0, 0, 0}, {300, 217, 22, 22, 0, 0, 0}, {61000, 107, 3, 4, 0, 0, 0}, {61001, 24, 3, 3, 0, 0, 0}, {61002, 33, 88, 88, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_IVAQ_RX_MINI

// ENUM DEFINITIONS


/** @brief These values define the status of the receiver. */
#ifndef HAVE_ENUM_IVAQ_MINI_RX_STATUS
#define HAVE_ENUM_IVAQ_MINI_RX_STATUS
typedef enum IVAQ_MINI_RX_STATUS
{
   IVAQ_MINI_POWER_OFF=0, /* Power off | */
   IVAQ_MINI_POWER_ON=1, /* Power on | */
   IVAQ_MINI_POWER_ON_LOW_BATT=2, /* Power on with low battery | */
   IVAQ_MINI_POWER_ON_ERROR_COMMS=3, /* Power on with communication error | */
   IVAQ_MINI_RX_STATUS_ENUM_END=4, /*  | */
} IVAQ_MINI_RX_STATUS;
#endif

/** @brief Physical microSD card presence; presence does not imply a mounted, writable filesystem. */
#ifndef HAVE_ENUM_IVAQ_MINI_CARD_STATE
#define HAVE_ENUM_IVAQ_MINI_CARD_STATE
typedef enum IVAQ_MINI_CARD_STATE
{
   IVAQ_MINI_CARD_NOT_PRESENT=0, /* Card absent. | */
   IVAQ_MINI_CARD_PRESENT=1, /* Card present. | */
   IVAQ_MINI_CARD_STATE_ENUM_END=2, /*  | */
} IVAQ_MINI_CARD_STATE;
#endif

/** @brief These values define the boolean states. */
#ifndef HAVE_ENUM_IVAQ_MINI_SIGNAL_SAT
#define HAVE_ENUM_IVAQ_MINI_SIGNAL_SAT
typedef enum IVAQ_MINI_SIGNAL_SAT
{
   IVAQ_MINI_SAT_FALSE=0, /* False | */
   IVAQ_MINI_SAT_TRUE=1, /* True | */
   IVAQ_MINI_SIGNAL_SAT_ENUM_END=2, /*  | */
} IVAQ_MINI_SIGNAL_SAT;
#endif

/** @brief These values define the boolean states. */
#ifndef HAVE_ENUM_IVAQ_MINI_SIGNAL_DET
#define HAVE_ENUM_IVAQ_MINI_SIGNAL_DET
typedef enum IVAQ_MINI_SIGNAL_DET
{
   IVAQ_MINI_DET_FALSE=0, /* False | */
   IVAQ_MINI_DET_TRUE=1, /* True | */
   IVAQ_MINI_SIGNAL_DET_ENUM_END=2, /*  | */
} IVAQ_MINI_SIGNAL_DET;
#endif

/** @brief These values define the boolean states. */
#ifndef HAVE_ENUM_IVAQ_MINI_RX_RESET
#define HAVE_ENUM_IVAQ_MINI_RX_RESET
typedef enum IVAQ_MINI_RX_RESET
{
   IVAQ_MINI_RESET_FALSE=0, /* False | */
   IVAQ_MINI_RESET_TRUE=1, /* True | */
   IVAQ_MINI_RX_RESET_ENUM_END=2, /*  | */
} IVAQ_MINI_RX_RESET;
#endif

/** @brief These values define the firmware update command states. */
#ifndef HAVE_ENUM_IVAQ_MINI_RX_UPDATE
#define HAVE_ENUM_IVAQ_MINI_RX_UPDATE
typedef enum IVAQ_MINI_RX_UPDATE
{
   IVAQ_MINI_UPDATE_FALSE=0, /* No firmware update requested | */
   IVAQ_MINI_UPDATE_TRUE=1, /* Firmware update requested - enter bootloader mode | */
   IVAQ_MINI_RX_UPDATE_ENUM_END=2, /*  | */
} IVAQ_MINI_RX_UPDATE;
#endif

/** @brief Antennas with a detection in the reported event; X and Y are independent bits. */
#ifndef HAVE_ENUM_IVAQ_MINI_DETECTION_MASK
#define HAVE_ENUM_IVAQ_MINI_DETECTION_MASK
typedef enum IVAQ_MINI_DETECTION_MASK
{
   IVAQ_MINI_DETECTION_NONE=0, /* No detection. | */
   IVAQ_MINI_DETECTION_X=1, /* Detection on X. | */
   IVAQ_MINI_DETECTION_Y=2, /* Detection on Y. | */
   IVAQ_MINI_DETECTION_MASK_ENUM_END=3, /*  | */
} IVAQ_MINI_DETECTION_MASK;
#endif

/** @brief Requested capture action. Zero leaves capture unchanged, including during reset/update commands. */
#ifndef HAVE_ENUM_IVAQ_MINI_SET_CAPTURE
#define HAVE_ENUM_IVAQ_MINI_SET_CAPTURE
typedef enum IVAQ_MINI_SET_CAPTURE
{
   IVAQ_MINI_SET_CAPTURE_NO_CHANGE=0, /* Leave capture unchanged. | */
   IVAQ_MINI_SET_CAPTURE_START_SD=1, /* Start a capture and save to microSD. | */
   IVAQ_MINI_SET_CAPTURE_START_HOST=2, /* Start a capture and transfer to the host without writing microSD; independent of USB/UART transport. | */
   IVAQ_MINI_SET_CAPTURE_STOP=3, /* Request cancellation of the active acquisition or transfer. | */
   IVAQ_MINI_SET_CAPTURE_ENUM_END=4, /*  | */
} IVAQ_MINI_SET_CAPTURE;
#endif

/** @brief Reported acquisition/transfer state; these values are not commands. */
#ifndef HAVE_ENUM_IVAQ_MINI_CAPTURE_STATE
#define HAVE_ENUM_IVAQ_MINI_CAPTURE_STATE
typedef enum IVAQ_MINI_CAPTURE_STATE
{
   IVAQ_MINI_CAPTURE_IDLE=0, /* No capture or transfer active. | */
   IVAQ_MINI_CAPTURE_ACQUIRING=1, /* Acquiring samples. | */
   IVAQ_MINI_CAPTURE_WRITING_SD=2, /* Writing capture to microSD. | */
   IVAQ_MINI_CAPTURE_TRANSFERRING=3, /* Transferring capture to the host. | */
   IVAQ_MINI_CAPTURE_ERROR=4, /* Capture or transfer failed. | */
   IVAQ_MINI_CAPTURE_STATE_ENUM_END=5, /*  | */
} IVAQ_MINI_CAPTURE_STATE;
#endif

/** @brief Clock reference shared by all timestamps in this message. */
#ifndef HAVE_ENUM_IVAQ_MINI_TIME_REFERENCE
#define HAVE_ENUM_IVAQ_MINI_TIME_REFERENCE
typedef enum IVAQ_MINI_TIME_REFERENCE
{
   IVAQ_MINI_TIME_BOOT=0, /* Milliseconds since receiver boot; host synchronization not established. | */
   IVAQ_MINI_TIME_UNIX=1, /* Milliseconds since UNIX epoch using host-synchronized time. | */
   IVAQ_MINI_TIME_REFERENCE_ENUM_END=2, /*  | */
} IVAQ_MINI_TIME_REFERENCE;
#endif

/** @brief Locally selected amplification stages. Readback only; changed using the PCB button. */
#ifndef HAVE_ENUM_IVAQ_MINI_STAGE_MASK
#define HAVE_ENUM_IVAQ_MINI_STAGE_MASK
typedef enum IVAQ_MINI_STAGE_MASK
{
   IVAQ_MINI_STAGE_1=1, /* Stage 1 enabled. | */
   IVAQ_MINI_STAGE_2=2, /* Stage 2 enabled. | */
   IVAQ_MINI_STAGE_3=4, /* Stage 3 enabled. | */
   IVAQ_MINI_STAGE_4=8, /* Stage 4 enabled. | */
   IVAQ_MINI_STAGE_MASK_ENUM_END=9, /*  | */
} IVAQ_MINI_STAGE_MASK;
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
#include "./mavlink_msg_ivaq_rx_mini_params.h"
#include "./mavlink_msg_ivaq_rx_mini_set_params.h"
#include "./mavlink_msg_ivaq_rx_mini_signal.h"

// base include
#include "../minimal/minimal.h"


#if MAVLINK_IVAQ_RX_MINI_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_SYSTEM_TIME, MAVLINK_MESSAGE_INFO_PROTOCOL_VERSION, MAVLINK_MESSAGE_INFO_IVAQ_RX_MINI_PARAMS, MAVLINK_MESSAGE_INFO_IVAQ_RX_MINI_SET_PARAMS, MAVLINK_MESSAGE_INFO_IVAQ_RX_MINI_SIGNAL}
# define MAVLINK_MESSAGE_NAMES {{ "HEARTBEAT", 0 }, { "IVAQ_RX_MINI_PARAMS", 61000 }, { "IVAQ_RX_MINI_SET_PARAMS", 61001 }, { "IVAQ_RX_MINI_SIGNAL", 61002 }, { "PROTOCOL_VERSION", 300 }, { "SYSTEM_TIME", 2 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_IVAQ_RX_MINI_H
