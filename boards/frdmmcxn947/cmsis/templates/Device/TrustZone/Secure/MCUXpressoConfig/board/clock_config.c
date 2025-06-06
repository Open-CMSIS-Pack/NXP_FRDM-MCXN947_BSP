/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/
/*
 * How to setup clock using clock driver functions:
 *
 * 1. Setup clock sources.
 *
 * 2. Set up wait states of the flash.
 *
 * 3. Set up all dividers.
 *
 * 4. Set up all selectors to provide selected clocks.
 *
 */

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Clocks v15.0
processor: MCXN947
package_id: MCXN947VDF
mcu_data: ksdk2_0
processor_version: 24.12.10
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

#include "fsl_clock.h"
#include "clock_config.h"
#include "fsl_spc.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Variables
 ******************************************************************************/
/* System clock frequency. */
extern uint32_t SystemCoreClock;

/*******************************************************************************
 ************************ BOARD_InitBootClocks function ************************
 ******************************************************************************/
void BOARD_InitBootClocks(void)
{
    BOARD_BootClockRUN();
}

/*******************************************************************************
 ********************** Configuration BOARD_BootClockRUN ***********************
 ******************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!Configuration
name: BOARD_BootClockRUN
called_from_default_init: true
outputs:
- {id: CLK_144M_clock.outFreq, value: 144 MHz}
- {id: CLK_48M_clock.outFreq, value: 48 MHz}
- {id: FREQME_reference_clock.outFreq, value: 144 MHz}
- {id: FREQME_target_clock.outFreq, value: 144 MHz}
- {id: FRO_12M_clock.outFreq, value: 12 MHz}
- {id: FRO_HF_clock.outFreq, value: 48 MHz}
- {id: MAIN_clock.outFreq, value: 48 MHz}
- {id: Slow_clock.outFreq, value: 12 MHz}
- {id: System_clock.outFreq, value: 48 MHz}
- {id: gdet_clock.outFreq, value: 48 MHz}
- {id: trng_clock.outFreq, value: 48 MHz}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/*******************************************************************************
 * Variables for BOARD_BootClockRUN configuration
 ******************************************************************************/
/*******************************************************************************
 * Code for BOARD_BootClockRUN configuration
 ******************************************************************************/
void BOARD_BootClockRUN(void)
{
    CLOCK_EnableClock(kCLOCK_Scg);                     /*!< Enable SCG clock */

    /* FRO OSC setup - begin, attach FRO12M to MainClock for safety switching */
    CLOCK_AttachClk(kFRO12M_to_MAIN_CLK);              /*!< Switch to FRO 12M first to ensure we can change the clock setting */

    /* Set the LDO_CORE VDD regulator to 1.0 V voltage level */
    spc_active_mode_core_ldo_option_t ldoOpt = {
      .CoreLDOVoltage       = kSPC_CoreLDO_MidDriveVoltage,
      .CoreLDODriveStrength = kSPC_CoreLDO_NormalDriveStrength,
    };
    SPC_SetActiveModeCoreLDORegulatorConfig(SPC0, &ldoOpt);
    /* Set the DCDC VDD regulator to 1.0 V voltage level */
    spc_active_mode_dcdc_option_t dcdcOpt = {
      .DCDCVoltage       = kSPC_DCDC_MidVoltage,
      .DCDCDriveStrength = kSPC_DCDC_NormalDriveStrength,
    };
    SPC_SetActiveModeDCDCRegulatorConfig(SPC0, &dcdcOpt);
    /* Configure Flash wait-states to support 1V voltage level and 48000000Hz frequency */;
    FMU0->FCTRL = (FMU0->FCTRL & ~((uint32_t)FMU_FCTRL_RWSC_MASK)) | (FMU_FCTRL_RWSC(0x1U));
    /* Specifies the 1V operating voltage for the SRAM's read/write timing margin */
    spc_sram_voltage_config_t sramCfg = {
      .operateVoltage       = kSPC_sramOperateAt1P0V,
      .requestVoltageUpdate = true,
    };
    SPC_SetSRAMOperateVoltage(SPC0, &sramCfg);

    CLOCK_SetupFROHFClocking(48000000U);               /*!< Enable FRO HF(48MHz) output */
    SCG0->SIRCCSR |= SCG_SIRCCSR_SIRC_CLK_PERIPH_EN_MASK; 
 
    /* Configure FREQME clock */
    SYSCON->CLOCK_CTRL |=
        SYSCON_CLOCK_CTRL_FRO_HF_ENA_MASK | SYSCON_CLOCK_CTRL_FRO12MHZ_ENA_MASK |
        SYSCON_CLOCK_CTRL_CLKIN_ENA_FM_USBH_LPT_MASK; /* Enable FRO 1M, 12M and HF to frequency measure module */
    CLOCK_EnableClock(kCLOCK_InputMux);
    INPUTMUX->FREQMEAS_REF = INPUTMUX_FREQMEAS_REF_INP(2);
    INPUTMUX->FREQMEAS_TAR = INPUTMUX_FREQMEAS_REF_INP(2);

    /*!< Set up clock selectors  */
    CLOCK_AttachClk(kFRO_HF_to_MAIN_CLK);
    CLOCK_AttachClk(kFRO_HF_to_FLEXSPI);                 /*!< Switch FLEXSPI to FRO_HF */

    /*!< Set up dividers */
    CLOCK_SetClkDiv(kCLOCK_DivAhbClk, 1U);           /*!< Set AHBCLKDIV divider to value 1 */

    /* Set SystemCoreClock variable */
    SystemCoreClock = BOARD_BOOTCLOCKRUN_CORE_CLOCK;
}

