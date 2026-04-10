/* -------------------------------------------------------------------------- 
 * Copyright (c) 2025-2026 Arm Limited (or its affiliates).
 * All rights reserved.
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
 *
 *
 * $Date:        16. February 2026
 * $Revision:    V1.1
 *
 * Project:      Ethernet Media Access (MAC) Definitions for NXP MCXN9xx
 * -------------------------------------------------------------------------- */

#ifndef EMAC_MCXN9XX_H_
#define EMAC_MCXN9XX_H_

#include <string.h>

#include "Driver_ETH_MAC.h"

#include "fsl_enet.h"
#include "pin_mux.h"

/* Configure Reduced-Media-Independent interface mode */
#ifndef ENET_RMII
#define ENET_RMII           1
#endif

/* EMAC Driver state flags */
#define EMAC_FLAG_INIT     (1U << 0)        // Driver initialized
#define EMAC_FLAG_POWER    (1U << 1)        // Driver power on
#define EMAC_FLAG_VLAN     (1U << 2)        // VLAN enabled

/* EMAC Driver Control Information */
typedef struct _EMAC_INFO {
  ARM_ETH_MAC_SignalEvent_t cb_event;       // Event callback
  uint8_t                   flags;          // Control and state flags
  uint8_t                   rx_index;       // Receive descriptor index
  uint8_t                   tx_index;       // Transmit descriptor index
  uint32_t                  tx_len;         // Length of assembled frame fragments
} EMAC_INFO;

/* Global functions and variables exported by the driver */
extern ARM_DRIVER_ETH_MAC Driver_ETH_MAC0;

#define ENET_RXDESCRIP_LEN_TYPE_MASK        (7UL << 16)
/* Length/Type packet values */
#define ENET_RXDESCRIP_LEN_TYPE_LEN         (0UL << 16)
#define ENET_RXDESCRIP_LEN_TYPE_TYPE        (1UL << 16)
#define ENET_RXDESCRIP_LEN_TYPE_ARP_RQ      (3UL << 16)
#define ENET_RXDESCRIP_LEN_TYPE_VLAN        (4UL << 16)
#define ENET_RXDESCRIP_LEN_TYPE_DBL_VLAN    (5UL << 16)
#define ENET_RXDESCRIP_LEN_TYPE_MAC_CTRL    (6UL << 16)
#define ENET_RXDESCRIP_LEN_TYPE_MAC_OAM     (7UL << 16)

#endif /* EMAC_MCXN9XX_H_ */
