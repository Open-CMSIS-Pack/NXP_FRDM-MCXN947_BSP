/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Peripherals v15.0
processor: MCXN947
package_id: MCXN947VDF
mcu_data: ksdk2_0
processor_version: 24.12.10
board: FRDM-MCXN947
functionalGroups:
- name: BOARD_InitPeripherals
  UUID: 5e271651-63a3-4c90-a121-a23da3522d5c
  called_from_default_init: true
  selectedCore: cm33_core0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'system'
- type_id: 'system_54b53072540eeeb8f8e9343e71f28176'
- global_system_definitions:
  - user_definitions: ''
  - user_includes: ''
  - global_init: ''
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'uart_cmsis_common'
- type_id: 'uart_cmsis_common_9cb8e302497aa696fdbb5a4fd622c2a8'
- global_USART_CMSIS_common:
  - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
component:
- type: 'gpio_adapter_common'
- type_id: 'gpio_adapter_common_57579b9ac814fe26bf95df0a384c36b6'
- global_gpio_adapter_common:
  - quick_selection: 'default'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/***********************************************************************************************************************
 * Included files
 **********************************************************************************************************************/
#include "peripherals.h"

/***********************************************************************************************************************
 * BOARD_InitPeripherals functional group
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * NVIC initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'NVIC'
- type: 'nvic'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'nvic'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'NVIC'
- config_sets:
  - nvic:
    - interrupt_table: []
    - interrupts: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

/* Empty initialization function (commented out)
static void NVIC_init(void) {
} */

/***********************************************************************************************************************
 * GPIO0_custom_init initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'GPIO0_custom_init'
- type: 'custom_init'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'custom_init'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'GPIO0'
- config_sets:
  - general:
    - user_includes: '#include "clock_config.h"'
    - user_definitions: ''
    - global_init: ''
    - user_code: '  \/\* Enable the clock for GPIO0 \*\/\n  CLOCK_EnableClock(kCLOCK_Gpio0);'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

static void GPIO0_custom_init_init(void) {
  /* Enable the clock for GPIO0 */
  CLOCK_EnableClock(kCLOCK_Gpio0);
}

/***********************************************************************************************************************
 * GPIO1_custom_init initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'GPIO1_custom_init'
- type: 'custom_init'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'custom_init'
- functional_group: 'BOARD_InitPeripherals'
- peripheral: 'GPIO1'
- config_sets:
  - general:
    - user_includes: '#include "clock_config.h"'
    - user_definitions: ''
    - global_init: ''
    - user_code: '  \/\* Enable the clock for GPIO1 \*\/\n  CLOCK_EnableClock(kCLOCK_Gpio1);'
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

static void GPIO1_custom_init_init(void) {
  /* Enable the clock for GPIO1 */
  CLOCK_EnableClock(kCLOCK_Gpio1);
}

/***********************************************************************************************************************
 * DebugConsole initialization code
 **********************************************************************************************************************/
/* clang-format off */
/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
instance:
- name: 'DebugConsole'
- type: 'debug_console'
- mode: 'general'
- custom_name_enabled: 'false'
- type_id: 'debug_console_1.0.0'
- functional_group: 'BOARD_InitPeripherals'
- config_sets:
  - fsl_debug_console:
    - config:
      - SDK_DEBUGCONSOLE: 'DEBUGCONSOLE_REDIRECT_TO_SDK'
      - SDK_DEBUGCONSOLE_UART: 'semihost'
      - DEBUG_CONSOLE_RX_ENABLE: 'true'
      - DEBUG_CONSOLE_PRINTF_MAX_LOG_LEN: '128'
      - DEBUG_CONSOLE_SCANF_MAX_LOG_LEN: '20'
      - DEBUG_CONSOLE_ENABLE_ECHO: 'false'
      - PRINTF_FLOAT_ENABLE: 'false'
      - SCANF_FLOAT_ENABLE: 'false'
      - PRINTF_ADVANCED_ENABLE: 'false'
      - SCANF_ADVANCED_ENABLE: 'false'
      - DEBUG_CONSOLE_TRANSFER_NON_BLOCKING: 'false'
      - DEBUG_CONSOLE_TRANSMIT_BUFFER_LEN: '512'
      - DEBUG_CONSOLE_RECEIVE_BUFFER_LEN: '1024'
      - DEBUG_CONSOLE_TX_RELIABLE_ENABLE: 'true'
      - DEBUG_CONSOLE_DISABLE_RTOS_SYNCHRONIZATION: 'false'
    - peripheral_config:
      - serial_port_type: 'kSerialPort_Uart'
      - uart_config:
        - peripheralUART: 'LP_FLEXCOMM4'
        - clockSource: 'genericUartClockSource'
        - clockSourceFreq: 'ClocksTool_DefaultInit'
        - baudRate_Bps: '115200'
    - debug_console_codegenerator: []
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
/* clang-format on */

static void DebugConsole_init(void) {
  /* Debug console initialization */
  DbgConsole_Init(DEBUGCONSOLE_INSTANCE, DEBUGCONSOLE_BAUDRATE, DEBUGCONSOLE_TYPE, DEBUGCONSOLE_CLK_FREQ);
}

/***********************************************************************************************************************
 * Initialization functions
 **********************************************************************************************************************/
void BOARD_InitPeripherals(void)
{
  /* Initialize components */
  GPIO0_custom_init_init();
  GPIO1_custom_init_init();
  DebugConsole_init();
}

/***********************************************************************************************************************
 * BOARD_InitBootPeripherals function
 **********************************************************************************************************************/
void BOARD_InitBootPeripherals(void)
{
  BOARD_InitPeripherals();
}
