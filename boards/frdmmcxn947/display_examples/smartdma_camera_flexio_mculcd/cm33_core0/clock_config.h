/*
 * Copyright 2022-2023 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _CLOCK_CONFIG_H_
#define _CLOCK_CONFIG_H_

#include "fsl_common.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define BOARD_XTAL0_CLK_HZ                         24000000U  /*!< Board xtal0 frequency in Hz */

/*******************************************************************************
 ************************ BOARD_InitBootClocks function ************************
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes default configuration of clocks.
 *
 */
void BOARD_InitBootClocks(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ******************** Configuration BOARD_BootClockFRO12M **********************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockFRO12M configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKFRO12M_CORE_CLOCK           12000000U  /*!< Core clock frequency: 12000000Hz */
#define BOARD_BOOTCLOCKFRO12M_ROSC_CLOCK                  0U  /*!< ROSC clock frequency: 0Hz */


/*******************************************************************************
 * API for BOARD_BootClockFRO12M configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockFRO12M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ******************* Configuration BOARD_BootClockFROHF48M *********************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockFROHF48M configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKFROHF48M_CORE_CLOCK         48000000U  /*!< Core clock frequency: 48000000Hz */
#define BOARD_BOOTCLOCKFROHF48M_ROSC_CLOCK                0U  /*!< ROSC clock frequency: 0Hz */


/*******************************************************************************
 * API for BOARD_BootClockFROHF48M configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockFROHF48M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ******************* Configuration BOARD_BootClockFROHF144M ********************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockFROHF144M configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKFROHF144M_CORE_CLOCK       144000000U  /*!< Core clock frequency: 144000000Hz */
#define BOARD_BOOTCLOCKFROHF144M_ROSC_CLOCK               0U  /*!< ROSC clock frequency: 0Hz */


/*******************************************************************************
 * API for BOARD_BootClockFROHF144M configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockFROHF144M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ******************** Configuration BOARD_BootClockPLL150M *********************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockPLL150M configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKPLL150M_CORE_CLOCK         150000000U  /*!< Core clock frequency: 150000000Hz */
#define BOARD_BOOTCLOCKPLL150M_ROSC_CLOCK                 0U  /*!< ROSC clock frequency: 0Hz */


/*******************************************************************************
 * API for BOARD_BootClockPLL150M configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockPLL150M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

/*******************************************************************************
 ******************** Configuration BOARD_BootClockPLL100M *********************
 ******************************************************************************/
/*******************************************************************************
 * Definitions for BOARD_BootClockPLL100M configuration
 ******************************************************************************/
#define BOARD_BOOTCLOCKPLL100M_CORE_CLOCK         100000000U  /*!< Core clock frequency: 100000000Hz */
#define BOARD_BOOTCLOCKPLL100M_ROSC_CLOCK                 0U  /*!< ROSC clock frequency: 0Hz */


/*******************************************************************************
 * API for BOARD_BootClockPLL100M configuration
 ******************************************************************************/
#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*!
 * @brief This function executes configuration of clocks.
 *
 */
void BOARD_BootClockPLL100M(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

#endif /* _CLOCK_CONFIG_H_ */
