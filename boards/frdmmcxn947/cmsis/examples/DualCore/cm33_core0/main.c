/*---------------------------------------------------------------------------
 * Copyright (c) 2024-2025 Arm Limited (or its affiliates). All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *---------------------------------------------------------------------------*/

#include "RTE_Components.h"
#include  CMSIS_device_header
#include "cmsis_vio.h"

#include "clock_config.h"
#include "peripherals.h"
#include "pin_mux.h"

#include "main.h"
#include "fsl_gpio.h"

int main (void) {

  /* System initialization */
  BOARD_InitBootClocks();
  BOARD_InitBootPeripherals();
  BOARD_InitBootPins();

  /* Initialize Virtual I/O */
  vioInit();

  /* Enable non-secure control of GPIO0_27 */
  GPIO_EnablePinControlNonSecure(GPIO0, 1 << 27U);

  return (app_main());
}
