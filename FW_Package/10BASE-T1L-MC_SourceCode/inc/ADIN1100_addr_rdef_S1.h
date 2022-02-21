
/* ================================================================================
     Project     :   ADIN1100
     File        :   ADIN1100_addr_rdef.h
     Description :   C header file contains macros for Registers' address relative to instances and plain bit-fields.


     Copyright (c) 2020 Analog Devices, Inc.  All Rights Reserved.
     This software is proprietary and confidential to Analog Devices, Inc. and
     its licensors.

     This file was auto-generated. Do not make local changes to this file.
   ================================================================================ */

#ifndef ADIN1100_ADDR_RDEF_H
#define ADIN1100_ADDR_RDEF_H


#if defined(_LANGUAGE_C) || (defined(__GNUC__) && !defined(__ASSEMBLER__))
#include <stdint.h>
#endif /* _LANGUAGE_C */

/* ====================================================================================================
        ADIN1100 Module Instances Address and Mask Definitions
   ==================================================================================================== */


#ifndef ADIN1100_ADDR_RDEF_H_
#define ADIN1100_ADDR_RDEF_H_    /* ADIN1100: 10BASE-T1L Single Pair Ethernet PHY core */


/* ====================================================================================================
        ADIN1100 Module Register Address Offset Definitions
   ==================================================================================================== */
#define ADDR_PMA_PMD_BT1_ABILITY                                 (0X010012U)    /* BASE-T1 PMA/PMD Extended Ability Register */
#define ADDR_PMA_PMD_BT1_CONTROL                                 (0X010834U)    /* BASE-T1 PMA/PMD Control Register */
#define ADDR_B10L_PMA_CNTRL                                      (0X0108F6U)    /* 10BASE-T1L PMA Control Register */
#define ADDR_B10L_PMA_STAT                                       (0X0108F7U)    /* 10BASE-T1L PMA Status Register */
#define ADDR_B10L_TEST_MODE_CNTRL                                (0X0108F8U)    /* 10BASE-T1L Test Mode Control Register */
#define ADDR_B10L_PMA_LINK_STAT                                  (0X018302U)    /* 10BASE-T1L PMA Link Status Register */
#define ADDR_B10L_PCS_CNTRL                                      (0X0308E6U)    /* 10BASE-T1L PCS Control Register */
#define ADDR_AN_CONTROL                                          (0X070200U)    /* BASE-T1 Autonegotiation Control Register */
#define ADDR_AN_STATUS                                           (0X070201U)    /* BASE-T1 Autonegotiation Status Register */
#define ADDR_AN_ADV_ABILITY_L                                    (0X070202U)    /* BASE-T1 Autonegotiation Advertisement [15:0] Register */
#define ADDR_AN_ADV_ABILITY_M                                    (0X070203U)    /* BASE-T1 Autonegotiation Advertisement [31:16] Register */
#define ADDR_AN_ADV_ABILITY_H                                    (0X070204U)    /* BASE-T1 Autonegotiation Advertisement [47:32] Register */
#define ADDR_AN_LP_ADV_ABILITY_L                                 (0X070205U)    /* BASE-T1 Autonegotiation Link Partner Base Page Ability [15:0] Register */
#define ADDR_AN_LP_ADV_ABILITY_M                                 (0X070206U)    /* BASE-T1 Autonegotiation Link Partner Base Page Ability [31:16] Register */
#define ADDR_AN_LP_ADV_ABILITY_H                                 (0X070207U)    /* BASE-T1 Autonegotiation Link Partner Base Page Ability [47:32] Register */
#define ADDR_AN_NEXT_PAGE_L                                      (0X070208U)    /* BASE-T1 Autonegotiation Next Page Transmit [15:0] Register */
#define ADDR_AN_NEXT_PAGE_M                                      (0X070209U)    /* BASE-T1 Autonegotiation Next Page Transmit [31:16] Register */
#define ADDR_AN_NEXT_PAGE_H                                      (0X07020AU)    /* BASE-T1 Autonegotiation Next Page Transmit [47:32] Register */
#define ADDR_AN_LP_NEXT_PAGE_L                                   (0X07020BU)    /* BASE-T1 Autonegotiation Link Partner Next Page Ability [15:0] Register */
#define ADDR_AN_LP_NEXT_PAGE_M                                   (0X07020CU)    /* BASE-T1 Autonegotiation Link Partner Next Page Ability [31:16] Register */
#define ADDR_AN_LP_NEXT_PAGE_H                                   (0X07020DU)    /* BASE-T1 Autonegotiation Link Partner Next Page Ability [47:32] Register */
#define ADDR_AN_STATUS_EXTRA                                     (0X078001U)    /* Extra Autonegotiation Status Register */
#define ADDR_MMD1_DEV_ID1                                        (0X1E0002U)    /* Vendor Specific MMD 1 Device Identifier High Register */
#define ADDR_MMD1_DEV_ID2                                        (0X1E0003U)    /* Vendor Specific MMD 1 Device Identifier Low Register */
#define ADDR_CRSM_IRQ_STATUS                                     (0X1E0010U)    /* System Interrupt Status Register */
#define ADDR_PHY_SUBSYS_IRQ_STATUS                               (0X1E0011U)    /* PHY Subsystem Interrupt Status Register */
#define ADDR_CRSM_IRQ_MASK                                       (0X1E0020U)    /* System Interrupt Mask Register */
#define ADDR_PHY_SUBSYS_IRQ_MASK                                 (0X1E0021U)    /* PHY Subsystem Interrupt Mask Register */
#define ADDR_FC_EN                                               (0X1E8001U)    /* Frame Checker Enable Register */
#define ADDR_FC_IRQ_EN                                           (0X1E8004U)    /* Frame Checker Interrupt Enable Register */
#define ADDR_FC_TX_SEL                                           (0X1E8005U)    /* Frame Checker Transmit Select Register */
#define ADDR_RX_ERR_CNT                                          (0X1E8008U)    /* Receive Error Count Register */
#define ADDR_FC_FRM_CNT_H                                        (0X1E8009U)    /* Frame Checker Count High Register */
#define ADDR_FC_FRM_CNT_L                                        (0X1E800AU)    /* Frame Checker Count Low Register */
#define ADDR_FC_LEN_ERR_CNT                                      (0X1E800BU)    /* Frame Checker Length Error Count Register */
#define ADDR_FC_ALGN_ERR_CNT                                     (0X1E800CU)    /* Frame Checker Alignment Error Count Register */
#define ADDR_FC_SYMB_ERR_CNT                                     (0X1E800DU)    /* Frame Checker Symbol Error Count Register */
#define ADDR_FC_OSZ_CNT                                          (0X1E800EU)    /* Frame Checker Oversized Frame Count Register */
#define ADDR_FC_USZ_CNT                                          (0X1E800FU)    /* Frame Checker Undersized Frame Count Register */
#define ADDR_FC_ODD_CNT                                          (0X1E8010U)    /* Frame Checker Odd Nibble Frame Count Register */
#define ADDR_FC_ODD_PRE_CNT                                      (0X1E8011U)    /* Frame Checker Odd Preamble Packet Count Register */
#define ADDR_FC_FALSE_CARRIER_CNT                                (0X1E8013U)    /* Frame Checker False Carrier Count Register */
#define ADDR_FG_EN                                               (0X1E8015U)    /* Frame Generator Enable Register */
#define ADDR_FG_CNTRL_RSTRT                                      (0X1E8016U)    /* Frame Generator Control/Restart Register */
#define ADDR_FG_CONT_MODE_EN                                     (0X1E8017U)    /* Frame Generator Continuous Mode Enable Register */
#define ADDR_FG_IRQ_EN                                           (0X1E8018U)    /* Frame Generator Interrupt Enable Register */
#define ADDR_FG_FRM_LEN                                          (0X1E801AU)    /* Frame Generator Frame Length Register */
#define ADDR_FG_NFRM_H                                           (0X1E801CU)    /* Frame Generator Number of Frames High Register */
#define ADDR_FG_NFRM_L                                           (0X1E801DU)    /* Frame Generator Number of Frames Low Register */
#define ADDR_FG_DONE                                             (0X1E801EU)    /* Frame Generator Done Register */
#define ADDR_RMII_CFG                                            (0X1E8038U)    /* RMII Configuration Register */
#define ADDR_MAC_IF_LOOPBACK                                     (0X1E803DU)    /* MAC Interface Loopbacks Configuration Register */
#define ADDR_CRSM_SFT_RST                                        (0X1E8810U)    /* Software Reset Register */
#define ADDR_CRSM_SFT_PD_CNTRL                                   (0X1E8812U)    /* Software Power-down Control Register */
#define ADDR_CRSM_PHY_SUBSYS_RST                                 (0X1E8814U)    /* PHY Subsystem Reset Register */
#define ADDR_CRSM_MAC_IF_RST                                     (0X1E8815U)    /* PHY MAC Interface Reset Register */
#define ADDR_CRSM_STAT                                           (0X1E8818U)    /* System Status Register */
#define ADDR_CRSM_MAC_IF_CFG                                     (0X1E882BU)    /* MAC Interface Configuration Register */
#define ADDR_LED0_BLINK_TIME_CNTRL				  (0X1E8C80U)	/* LED0 Blink Time Control Register */
#define ADDR_LED1_BLINK_TIME_CNTRL				  (0X1E8C81U)	/* LED1 Blink Time Control Register */
#define ADDR_DIGIO_PINMUX					  (0X1E8C56U)	/* Pinmux Configuration 1 Register */
#define ADDR_LED_CNTRL						  (0X1E8C82U)	/* LED Control Register */
#define ADDR_LED_POLARITY					  (0X1E8C83U)	/* LED Polarity Control Register */



/* ====================================================================================================
        ADIN1100 Module Register ResetValue Definitions
   ==================================================================================================== */
#define RSTVAL_PMA_PMD_BT1_ABILITY                                 (0X4)
#define RSTVAL_PMA_PMD_BT1_CONTROL                                 (0X8002)
#define RSTVAL_B10L_PMA_CNTRL                                      (0X0)
#define RSTVAL_B10L_PMA_STAT                                       (0X2000)
#define RSTVAL_B10L_TEST_MODE_CNTRL                                (0X0)
#define RSTVAL_B10L_PMA_LINK_STAT                                  (0X0)
#define RSTVAL_B10L_PCS_CNTRL                                      (0X0)
#define RSTVAL_AN_CONTROL                                          (0X1000)
#define RSTVAL_AN_STATUS                                           (0X8)
#define RSTVAL_AN_ADV_ABILITY_L                                    (0X1)
#define RSTVAL_AN_ADV_ABILITY_M                                    (0X4000)
#define RSTVAL_AN_ADV_ABILITY_H                                    (0X0)
#define RSTVAL_AN_LP_ADV_ABILITY_L                                 (0X0)
#define RSTVAL_AN_LP_ADV_ABILITY_M                                 (0X0)
#define RSTVAL_AN_LP_ADV_ABILITY_H                                 (0X0)
#define RSTVAL_AN_NEXT_PAGE_L                                      (0X2001)
#define RSTVAL_AN_NEXT_PAGE_M                                      (0X0)
#define RSTVAL_AN_NEXT_PAGE_H                                      (0X0)
#define RSTVAL_AN_LP_NEXT_PAGE_L                                   (0X0)
#define RSTVAL_AN_LP_NEXT_PAGE_M                                   (0X0)
#define RSTVAL_AN_LP_NEXT_PAGE_H                                   (0X0)
#define RSTVAL_AN_STATUS_EXTRA                                     (0X0)
#define RSTVAL_MMD1_DEV_ID1                                        (0X283)
#define RSTVAL_MMD1_DEV_ID2                                        (0XBC80)
#define RSTVAL_CRSM_IRQ_STATUS                                     (0X800)
#define RSTVAL_PHY_SUBSYS_IRQ_STATUS                               (0X0)
#define RSTVAL_CRSM_IRQ_MASK                                       (0XFFF)
#define RSTVAL_PHY_SUBSYS_IRQ_MASK                                 (0X2403)
#define RSTVAL_FC_EN                                               (0X1)
#define RSTVAL_FC_IRQ_EN                                           (0X1)
#define RSTVAL_FC_TX_SEL                                           (0X0)
#define RSTVAL_RX_ERR_CNT                                          (0X0)
#define RSTVAL_FC_FRM_CNT_H                                        (0X0)
#define RSTVAL_FC_FRM_CNT_L                                        (0X0)
#define RSTVAL_FC_LEN_ERR_CNT                                      (0X0)
#define RSTVAL_FC_ALGN_ERR_CNT                                     (0X0)
#define RSTVAL_FC_SYMB_ERR_CNT                                     (0X0)
#define RSTVAL_FC_OSZ_CNT                                          (0X0)
#define RSTVAL_FC_USZ_CNT                                          (0X0)
#define RSTVAL_FC_ODD_CNT                                          (0X0)
#define RSTVAL_FC_ODD_PRE_CNT                                      (0X0)
#define RSTVAL_FC_FALSE_CARRIER_CNT                                (0X0)
#define RSTVAL_FG_EN                                               (0X0)
#define RSTVAL_FG_CNTRL_RSTRT                                      (0X1)
#define RSTVAL_FG_CONT_MODE_EN                                     (0X0)
#define RSTVAL_FG_IRQ_EN                                           (0X0)
#define RSTVAL_FG_FRM_LEN                                          (0X6B)
#define RSTVAL_FG_NFRM_H                                           (0X0)
#define RSTVAL_FG_NFRM_L                                           (0X100)
#define RSTVAL_FG_DONE                                             (0X0)
#define RSTVAL_RMII_CFG                                            (0X6)
#define RSTVAL_MAC_IF_LOOPBACK                                     (0XA)
#define RSTVAL_CRSM_SFT_RST                                        (0X0)
#define RSTVAL_CRSM_SFT_PD_CNTRL                                   (0X0)
#define RSTVAL_CRSM_PHY_SUBSYS_RST                                 (0X0)
#define RSTVAL_CRSM_MAC_IF_RST                                     (0X0)
#define RSTVAL_CRSM_STAT                                           (0X0)
#define RSTVAL_CRSM_MAC_IF_CFG                                     (0X0)
#define RSTVAL_LED_BLINK_TIME_CNTRL                                (0X505)
#define RSTVAL_LED_CNTRL                                           (0X0)

/* ====================================================================================================
        ADIN1100 Module Register BitPositions, Lengths, Masks and Enumerations Definitions
   ==================================================================================================== */

/* ----------------------------------------------------------------------------------------------------
          PMA_PMD_BT1_ABILITY                                   Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_PMA_PMD_BT1_ABILITY_B100_ABILITY                 (0U)           /* 100BASE-T1 Ability. */
#define BITL_PMA_PMD_BT1_ABILITY_B100_ABILITY                 (1U)           /* 100BASE-T1 Ability. */
#define BITM_PMA_PMD_BT1_ABILITY_B100_ABILITY                 (0X0001U)      /* 100BASE-T1 Ability. */
#define BITP_PMA_PMD_BT1_ABILITY_B1000_ABILITY                (1U)           /* 1000BASE-T1 Ability. */
#define BITL_PMA_PMD_BT1_ABILITY_B1000_ABILITY                (1U)           /* 1000BASE-T1 Ability. */
#define BITM_PMA_PMD_BT1_ABILITY_B1000_ABILITY                (0X0002U)      /* 1000BASE-T1 Ability. */
#define BITP_PMA_PMD_BT1_ABILITY_B10L_ABILITY                 (2U)           /* 10BASE-T1L Ability. */
#define BITL_PMA_PMD_BT1_ABILITY_B10L_ABILITY                 (1U)           /* 10BASE-T1L Ability. */
#define BITM_PMA_PMD_BT1_ABILITY_B10L_ABILITY                 (0X0004U)      /* 10BASE-T1L Ability. */
#define BITP_PMA_PMD_BT1_ABILITY_B10S_ABILITY                 (3U)           /* 10BASE-T1S Ability. */
#define BITL_PMA_PMD_BT1_ABILITY_B10S_ABILITY                 (1U)           /* 10BASE-T1S Ability. */
#define BITM_PMA_PMD_BT1_ABILITY_B10S_ABILITY                 (0X0008U)      /* 10BASE-T1S Ability. */

/* ----------------------------------------------------------------------------------------------------
          PMA_PMD_BT1_CONTROL                                   Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_PMA_PMD_BT1_CONTROL_TYPE_SEL                     (0U)           /* Type Selection */
#define BITL_PMA_PMD_BT1_CONTROL_TYPE_SEL                     (4U)           /* Type Selection */
#define BITM_PMA_PMD_BT1_CONTROL_TYPE_SEL                     (0X000FU)      /* Type Selection */
#define BITP_PMA_PMD_BT1_CONTROL_CFG_MST                      (14U)          /* Master-slave Config. */
#define BITL_PMA_PMD_BT1_CONTROL_CFG_MST                      (1U)           /* Master-slave Config. */
#define BITM_PMA_PMD_BT1_CONTROL_CFG_MST                      (0X4000U)      /* Master-slave Config. */

#define ENUM_PMA_PMD_BT1_CONTROL_TYPE_SEL_TS_B10L             (0X0002U)      /* 10BASE-T1L */

/* ----------------------------------------------------------------------------------------------------
          B10L_PMA_CNTRL                                        Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_B10L_PMA_CNTRL_B10L_LB_PMA_LOC_EN                (0U)           /* 10BASE-T1L PMA Loopback. */
#define BITL_B10L_PMA_CNTRL_B10L_LB_PMA_LOC_EN                (1U)           /* 10BASE-T1L PMA Loopback. */
#define BITM_B10L_PMA_CNTRL_B10L_LB_PMA_LOC_EN                (0X0001U)      /* 10BASE-T1L PMA Loopback. */
#define BITP_B10L_PMA_CNTRL_B10L_TX_LVL_HI                    (12U)          /* 10BASE-T1L Transmit Voltage Amplitude Control. */
#define BITL_B10L_PMA_CNTRL_B10L_TX_LVL_HI                    (1U)           /* 10BASE-T1L Transmit Voltage Amplitude Control. */
#define BITM_B10L_PMA_CNTRL_B10L_TX_LVL_HI                    (0X1000U)      /* 10BASE-T1L Transmit Voltage Amplitude Control. */
#define BITP_B10L_PMA_CNTRL_B10L_TX_DIS_MODE_EN               (14U)          /* 10BASE-T1L Transmit Disable Mode. */
#define BITL_B10L_PMA_CNTRL_B10L_TX_DIS_MODE_EN               (1U)           /* 10BASE-T1L Transmit Disable Mode. */
#define BITM_B10L_PMA_CNTRL_B10L_TX_DIS_MODE_EN               (0X4000U)      /* 10BASE-T1L Transmit Disable Mode. */

/* ----------------------------------------------------------------------------------------------------
          B10L_PMA_STAT                                         Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_B10L_PMA_STAT_B10L_POL_INV                       (2U)           /* 10BASE-T1L Polarity Inverse */
#define BITL_B10L_PMA_STAT_B10L_POL_INV                       (1U)           /* 10BASE-T1L Polarity Inverse */
#define BITM_B10L_PMA_STAT_B10L_POL_INV                       (0X0004U)      /* 10BASE-T1L Polarity Inverse */
#define BITP_B10L_PMA_STAT_B10L_TX_LVL_HI_ABLE                (12U)          /* 10BASE-T1L High Voltage Tx Ability */
#define BITL_B10L_PMA_STAT_B10L_TX_LVL_HI_ABLE                (1U)           /* 10BASE-T1L High Voltage Tx Ability */
#define BITM_B10L_PMA_STAT_B10L_TX_LVL_HI_ABLE                (0X1000U)      /* 10BASE-T1L High Voltage Tx Ability */
#define BITP_B10L_PMA_STAT_B10L_LB_PMA_LOC_ABLE               (13U)          /* 10BASE-T1L PMA Loopback Ability */
#define BITL_B10L_PMA_STAT_B10L_LB_PMA_LOC_ABLE               (1U)           /* 10BASE-T1L PMA Loopback Ability */
#define BITM_B10L_PMA_STAT_B10L_LB_PMA_LOC_ABLE               (0X2000U)      /* 10BASE-T1L PMA Loopback Ability */

/* ----------------------------------------------------------------------------------------------------
          B10L_TEST_MODE_CNTRL                                  Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_B10L_TEST_MODE_CNTRL_B10L_TX_TEST_MODE           (13U)          /* 10BASE-T1L Transmitter Test Mode. */
#define BITL_B10L_TEST_MODE_CNTRL_B10L_TX_TEST_MODE           (3U)           /* 10BASE-T1L Transmitter Test Mode. */
#define BITM_B10L_TEST_MODE_CNTRL_B10L_TX_TEST_MODE           (0XE000U)      /* 10BASE-T1L Transmitter Test Mode. */

#define ENUM_B10L_TEST_MODE_CNTRL_B10L_TX_TEST_MODE_TX_TM_NONE (0X0000U)      /* Normal operation. */
#define ENUM_B10L_TEST_MODE_CNTRL_B10L_TX_TEST_MODE_TX_TM_JITTER (0X0001U)      /* Test mode 1 - Transmitter output voltage and timing jitter test mode.  When test mode 1 is enabled, the PHY shall repeatedly transmit the data symbol sequence (+1, -1). */
#define ENUM_B10L_TEST_MODE_CNTRL_B10L_TX_TEST_MODE_TX_TM_DROOP (0X0002U)      /* Test mode 2 - Transmitter output droop test mode.  When test mode 2 is enabled, the PHY shall transmit ten "+1" symbols followed by ten "-1" symbols. */
#define ENUM_B10L_TEST_MODE_CNTRL_B10L_TX_TEST_MODE_TX_TM_IDLE (0X0003U)      /* Test mode 3 - Normal operation in Idle mode.  When test mode 3 is enabled, the PHY shall transmit as in non-test operation and in the MASTER data mode with data set to normal Inter-Frame idle signals. */

/* ----------------------------------------------------------------------------------------------------
          B10L_PMA_LINK_STAT                                    Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_B10L_PMA_LINK_STAT_B10L_LINK_STAT_OK             (0U)           /* Link Status OK */
#define BITL_B10L_PMA_LINK_STAT_B10L_LINK_STAT_OK             (1U)           /* Link Status OK */
#define BITM_B10L_PMA_LINK_STAT_B10L_LINK_STAT_OK             (0X0001U)      /* Link Status OK */
#define BITP_B10L_PMA_LINK_STAT_B10L_LINK_STAT_OK_LL          (1U)           /* Link Status Ok Latch Low */
#define BITL_B10L_PMA_LINK_STAT_B10L_LINK_STAT_OK_LL          (1U)           /* Link Status Ok Latch Low */
#define BITM_B10L_PMA_LINK_STAT_B10L_LINK_STAT_OK_LL          (0X0002U)      /* Link Status Ok Latch Low */
#define BITP_B10L_PMA_LINK_STAT_B10L_DSCR_STAT_OK             (8U)           /* 10BASE-T1L Descrambler Status Ok */
#define BITL_B10L_PMA_LINK_STAT_B10L_DSCR_STAT_OK             (1U)           /* 10BASE-T1L Descrambler Status Ok */
#define BITM_B10L_PMA_LINK_STAT_B10L_DSCR_STAT_OK             (0X0100U)      /* 10BASE-T1L Descrambler Status Ok */
#define BITP_B10L_PMA_LINK_STAT_B10L_DSCR_STAT_OK_LL          (9U)           /* BASE-T1L Descrambler Status Ok Latch Low */
#define BITL_B10L_PMA_LINK_STAT_B10L_DSCR_STAT_OK_LL          (1U)           /* BASE-T1L Descrambler Status Ok Latch Low */
#define BITM_B10L_PMA_LINK_STAT_B10L_DSCR_STAT_OK_LL          (0X0200U)      /* BASE-T1L Descrambler Status Ok Latch Low */
#define BITP_B10L_PMA_LINK_STAT_B10L_LOC_RCVR_STAT_OK         (10U)          /* 10BASE-T1L Local Receiver Status Ok */
#define BITL_B10L_PMA_LINK_STAT_B10L_LOC_RCVR_STAT_OK         (1U)           /* 10BASE-T1L Local Receiver Status Ok */
#define BITM_B10L_PMA_LINK_STAT_B10L_LOC_RCVR_STAT_OK         (0X0400U)      /* 10BASE-T1L Local Receiver Status Ok */
#define BITP_B10L_PMA_LINK_STAT_B10L_LOC_RCVR_STAT_OK_LL      (11U)          /* 10BASE-T1L Local Receiver Status Ok Latch Low */
#define BITL_B10L_PMA_LINK_STAT_B10L_LOC_RCVR_STAT_OK_LL      (1U)           /* 10BASE-T1L Local Receiver Status Ok Latch Low */
#define BITM_B10L_PMA_LINK_STAT_B10L_LOC_RCVR_STAT_OK_LL      (0X0800U)      /* 10BASE-T1L Local Receiver Status Ok Latch Low */
#define BITP_B10L_PMA_LINK_STAT_B10L_REM_RCVR_STAT_OK         (12U)          /* 10BASE-T1L Remote Receiver Status Ok */
#define BITL_B10L_PMA_LINK_STAT_B10L_REM_RCVR_STAT_OK         (1U)           /* 10BASE-T1L Remote Receiver Status Ok */
#define BITM_B10L_PMA_LINK_STAT_B10L_REM_RCVR_STAT_OK         (0X1000U)      /* 10BASE-T1L Remote Receiver Status Ok */
#define BITP_B10L_PMA_LINK_STAT_B10L_REM_RCVR_STAT_OK_LL      (13U)          /* 10BASE-T1L Remote Receiver Status Ok Latch Low */
#define BITL_B10L_PMA_LINK_STAT_B10L_REM_RCVR_STAT_OK_LL      (1U)           /* 10BASE-T1L Remote Receiver Status Ok Latch Low */
#define BITM_B10L_PMA_LINK_STAT_B10L_REM_RCVR_STAT_OK_LL      (0X2000U)      /* 10BASE-T1L Remote Receiver Status Ok Latch Low */

/* ----------------------------------------------------------------------------------------------------
          B10L_PCS_CNTRL                                        Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_B10L_PCS_CNTRL_B10L_LB_PCS_EN                    (14U)          /* PCS Loopback Enable */
#define BITL_B10L_PCS_CNTRL_B10L_LB_PCS_EN                    (1U)           /* PCS Loopback Enable */
#define BITM_B10L_PCS_CNTRL_B10L_LB_PCS_EN                    (0X4000U)      /* PCS Loopback Enable */

/* ----------------------------------------------------------------------------------------------------
          AN_CONTROL                                            Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_CONTROL_AN_RESTART                            (9U)           /* Autonegotiation Restart */
#define BITL_AN_CONTROL_AN_RESTART                            (1U)           /* Autonegotiation Restart */
#define BITM_AN_CONTROL_AN_RESTART                            (0X0200U)      /* Autonegotiation Restart */
#define BITP_AN_CONTROL_AN_EN                                 (12U)          /* Autonegotiation Enable. */
#define BITL_AN_CONTROL_AN_EN                                 (1U)           /* Autonegotiation Enable. */
#define BITM_AN_CONTROL_AN_EN                                 (0X1000U)      /* Autonegotiation Enable. */

/* ----------------------------------------------------------------------------------------------------
          AN_STATUS                                             Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_STATUS_AN_LINK_STATUS                         (2U)           /* Link Status. */
#define BITL_AN_STATUS_AN_LINK_STATUS                         (1U)           /* Link Status. */
#define BITM_AN_STATUS_AN_LINK_STATUS                         (0X0004U)      /* Link Status. */
#define BITP_AN_STATUS_AN_ABLE                                (3U)           /* Autonegotiation Ability. */
#define BITL_AN_STATUS_AN_ABLE                                (1U)           /* Autonegotiation Ability. */
#define BITM_AN_STATUS_AN_ABLE                                (0X0008U)      /* Autonegotiation Ability. */
#define BITP_AN_STATUS_AN_COMPLETE                            (5U)           /* Autonegotiation Complete. */
#define BITL_AN_STATUS_AN_COMPLETE                            (1U)           /* Autonegotiation Complete. */
#define BITM_AN_STATUS_AN_COMPLETE                            (0X0020U)      /* Autonegotiation Complete. */
#define BITP_AN_STATUS_AN_PAGE_RX                             (6U)           /* Page Received */
#define BITL_AN_STATUS_AN_PAGE_RX                             (1U)           /* Page Received */
#define BITM_AN_STATUS_AN_PAGE_RX                             (0X0040U)      /* Page Received */

/* ----------------------------------------------------------------------------------------------------
          AN_ADV_ABILITY_L                                      Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_ADV_ABILITY_L_AN_ADV_SELECTOR                 (0U)           /* Selector. */
#define BITL_AN_ADV_ABILITY_L_AN_ADV_SELECTOR                 (5U)           /* Selector. */
#define BITM_AN_ADV_ABILITY_L_AN_ADV_SELECTOR                 (0X001FU)      /* Selector. */
#define BITP_AN_ADV_ABILITY_L_AN_ADV_PAUSE                    (10U)          /* Pause Ability. */
#define BITL_AN_ADV_ABILITY_L_AN_ADV_PAUSE                    (2U)           /* Pause Ability. */
#define BITM_AN_ADV_ABILITY_L_AN_ADV_PAUSE                    (0X0C00U)      /* Pause Ability. */
#define BITP_AN_ADV_ABILITY_L_AN_ADV_FORCE_MS                 (12U)          /* Force Master/slave Configuration. */
#define BITL_AN_ADV_ABILITY_L_AN_ADV_FORCE_MS                 (1U)           /* Force Master/slave Configuration. */
#define BITM_AN_ADV_ABILITY_L_AN_ADV_FORCE_MS                 (0X1000U)      /* Force Master/slave Configuration. */
#define BITP_AN_ADV_ABILITY_L_AN_ADV_REMOTE_FAULT             (13U)          /* Remote Fault. */
#define BITL_AN_ADV_ABILITY_L_AN_ADV_REMOTE_FAULT             (1U)           /* Remote Fault. */
#define BITM_AN_ADV_ABILITY_L_AN_ADV_REMOTE_FAULT             (0X2000U)      /* Remote Fault. */
#define BITP_AN_ADV_ABILITY_L_AN_ADV_ACK                      (14U)          /* Acknowledge (ACK). */
#define BITL_AN_ADV_ABILITY_L_AN_ADV_ACK                      (1U)           /* Acknowledge (ACK). */
#define BITM_AN_ADV_ABILITY_L_AN_ADV_ACK                      (0X4000U)      /* Acknowledge (ACK). */
#define BITP_AN_ADV_ABILITY_L_AN_ADV_NEXT_PAGE_REQ            (15U)          /* Next Page Request. */
#define BITL_AN_ADV_ABILITY_L_AN_ADV_NEXT_PAGE_REQ            (1U)           /* Next Page Request. */
#define BITM_AN_ADV_ABILITY_L_AN_ADV_NEXT_PAGE_REQ            (0X8000U)      /* Next Page Request. */

/* ----------------------------------------------------------------------------------------------------
          AN_ADV_ABILITY_M                                      Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_ADV_ABILITY_M_AN_ADV_MST                      (4U)           /* Master/slave Configuration. */
#define BITL_AN_ADV_ABILITY_M_AN_ADV_MST                      (1U)           /* Master/slave Configuration. */
#define BITM_AN_ADV_ABILITY_M_AN_ADV_MST                      (0X0010U)      /* Master/slave Configuration. */
#define BITP_AN_ADV_ABILITY_M_AN_ADV_B10L                     (14U)          /* 10BASE-T1L Ability. */
#define BITL_AN_ADV_ABILITY_M_AN_ADV_B10L                     (1U)           /* 10BASE-T1L Ability. */
#define BITM_AN_ADV_ABILITY_M_AN_ADV_B10L                     (0X4000U)      /* 10BASE-T1L Ability. */

/* ----------------------------------------------------------------------------------------------------
          AN_ADV_ABILITY_H                                      Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_ADV_ABILITY_H_AN_ADV_B10L_TX_LVL_HI_REQ       (12U)          /* 10BASE-T1L High Level Transmit Operating Mode Request. */
#define BITL_AN_ADV_ABILITY_H_AN_ADV_B10L_TX_LVL_HI_REQ       (1U)           /* 10BASE-T1L High Level Transmit Operating Mode Request. */
#define BITM_AN_ADV_ABILITY_H_AN_ADV_B10L_TX_LVL_HI_REQ       (0X1000U)      /* 10BASE-T1L High Level Transmit Operating Mode Request. */
#define BITP_AN_ADV_ABILITY_H_AN_ADV_B10L_TX_LVL_HI_ABL       (13U)          /* 10BASE-T1L High Level Transmit Operating Mode Ability. */
#define BITL_AN_ADV_ABILITY_H_AN_ADV_B10L_TX_LVL_HI_ABL       (1U)           /* 10BASE-T1L High Level Transmit Operating Mode Ability. */
#define BITM_AN_ADV_ABILITY_H_AN_ADV_B10L_TX_LVL_HI_ABL       (0X2000U)      /* 10BASE-T1L High Level Transmit Operating Mode Ability. */

/* ----------------------------------------------------------------------------------------------------
          AN_LP_ADV_ABILITY_L                                   Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_LP_ADV_ABILITY_L_AN_LP_ADV_SELECTOR           (0U)           /* Link Partner Selector. */
#define BITL_AN_LP_ADV_ABILITY_L_AN_LP_ADV_SELECTOR           (5U)           /* Link Partner Selector. */
#define BITM_AN_LP_ADV_ABILITY_L_AN_LP_ADV_SELECTOR           (0X001FU)      /* Link Partner Selector. */
#define BITP_AN_LP_ADV_ABILITY_L_AN_LP_ADV_PAUSE              (10U)          /* Link Partner Pause Ability. */
#define BITL_AN_LP_ADV_ABILITY_L_AN_LP_ADV_PAUSE              (2U)           /* Link Partner Pause Ability. */
#define BITM_AN_LP_ADV_ABILITY_L_AN_LP_ADV_PAUSE              (0X0C00U)      /* Link Partner Pause Ability. */
#define BITP_AN_LP_ADV_ABILITY_L_AN_LP_ADV_FORCE_MS           (12U)          /* Link Partner Force Master/slave Configuration. */
#define BITL_AN_LP_ADV_ABILITY_L_AN_LP_ADV_FORCE_MS           (1U)           /* Link Partner Force Master/slave Configuration. */
#define BITM_AN_LP_ADV_ABILITY_L_AN_LP_ADV_FORCE_MS           (0X1000U)      /* Link Partner Force Master/slave Configuration. */
#define BITP_AN_LP_ADV_ABILITY_L_AN_LP_ADV_REMOTE_FAULT       (13U)          /* Link Partner Remote Fault. */
#define BITL_AN_LP_ADV_ABILITY_L_AN_LP_ADV_REMOTE_FAULT       (1U)           /* Link Partner Remote Fault. */
#define BITM_AN_LP_ADV_ABILITY_L_AN_LP_ADV_REMOTE_FAULT       (0X2000U)      /* Link Partner Remote Fault. */
#define BITP_AN_LP_ADV_ABILITY_L_AN_LP_ADV_ACK                (14U)          /* Link Partner Acknowledge (ACK). */
#define BITL_AN_LP_ADV_ABILITY_L_AN_LP_ADV_ACK                (1U)           /* Link Partner Acknowledge (ACK). */
#define BITM_AN_LP_ADV_ABILITY_L_AN_LP_ADV_ACK                (0X4000U)      /* Link Partner Acknowledge (ACK). */
#define BITP_AN_LP_ADV_ABILITY_L_AN_LP_ADV_NEXT_PAGE_REQ      (15U)          /* Link Partner Next Page Request. */
#define BITL_AN_LP_ADV_ABILITY_L_AN_LP_ADV_NEXT_PAGE_REQ      (1U)           /* Link Partner Next Page Request. */
#define BITM_AN_LP_ADV_ABILITY_L_AN_LP_ADV_NEXT_PAGE_REQ      (0X8000U)      /* Link Partner Next Page Request. */

/* ----------------------------------------------------------------------------------------------------
          AN_LP_ADV_ABILITY_M                                   Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_LP_ADV_ABILITY_M_AN_LP_ADV_MST                (4U)           /* Link Partner Master/Slave Configuration. */
#define BITL_AN_LP_ADV_ABILITY_M_AN_LP_ADV_MST                (1U)           /* Link Partner Master/Slave Configuration. */
#define BITM_AN_LP_ADV_ABILITY_M_AN_LP_ADV_MST                (0X0010U)      /* Link Partner Master/Slave Configuration. */
#define BITP_AN_LP_ADV_ABILITY_M_AN_LP_ADV_B100               (5U)           /* Link Partner 100BASE-T1 Ability. */
#define BITL_AN_LP_ADV_ABILITY_M_AN_LP_ADV_B100               (1U)           /* Link Partner 100BASE-T1 Ability. */
#define BITM_AN_LP_ADV_ABILITY_M_AN_LP_ADV_B100               (0X0020U)      /* Link Partner 100BASE-T1 Ability. */
#define BITP_AN_LP_ADV_ABILITY_M_AN_LP_ADV_B10S_FD            (6U)           /* Link Partner 10BASE-T1S Full Duplex Ability. */
#define BITL_AN_LP_ADV_ABILITY_M_AN_LP_ADV_B10S_FD            (1U)           /* Link Partner 10BASE-T1S Full Duplex Ability. */
#define BITM_AN_LP_ADV_ABILITY_M_AN_LP_ADV_B10S_FD            (0X0040U)      /* Link Partner 10BASE-T1S Full Duplex Ability. */
#define BITP_AN_LP_ADV_ABILITY_M_AN_LP_ADV_B1000              (7U)           /* Link Partner 1000BASE-T1 Ability. */
#define BITL_AN_LP_ADV_ABILITY_M_AN_LP_ADV_B1000              (1U)           /* Link Partner 1000BASE-T1 Ability. */
#define BITM_AN_LP_ADV_ABILITY_M_AN_LP_ADV_B1000              (0X0080U)      /* Link Partner 1000BASE-T1 Ability. */
#define BITP_AN_LP_ADV_ABILITY_M_AN_LP_ADV_B10L               (14U)          /* Link Partner 10BASE-T1L Ability. */
#define BITL_AN_LP_ADV_ABILITY_M_AN_LP_ADV_B10L               (1U)           /* Link Partner 10BASE-T1L Ability. */
#define BITM_AN_LP_ADV_ABILITY_M_AN_LP_ADV_B10L               (0X4000U)      /* Link Partner 10BASE-T1L Ability. */

/* ----------------------------------------------------------------------------------------------------
          AN_LP_ADV_ABILITY_H                                   Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_LP_ADV_ABILITY_H_AN_LP_ADV_B10S_HD            (11U)          /* Link Partner 10BASE-T1S Half Duplex Ability. */
#define BITL_AN_LP_ADV_ABILITY_H_AN_LP_ADV_B10S_HD            (1U)           /* Link Partner 10BASE-T1S Half Duplex Ability. */
#define BITM_AN_LP_ADV_ABILITY_H_AN_LP_ADV_B10S_HD            (0X0800U)      /* Link Partner 10BASE-T1S Half Duplex Ability. */
#define BITP_AN_LP_ADV_ABILITY_H_AN_LP_ADV_B10L_TX_LVL_HI_REQ (12U)          /* Link Partner 10BASE-T1L High Level Transmit Operating Mode Request. */
#define BITL_AN_LP_ADV_ABILITY_H_AN_LP_ADV_B10L_TX_LVL_HI_REQ (1U)           /* Link Partner 10BASE-T1L High Level Transmit Operating Mode Request. */
#define BITM_AN_LP_ADV_ABILITY_H_AN_LP_ADV_B10L_TX_LVL_HI_REQ (0X1000U)      /* Link Partner 10BASE-T1L High Level Transmit Operating Mode Request. */
#define BITP_AN_LP_ADV_ABILITY_H_AN_LP_ADV_B10L_TX_LVL_HI_ABL (13U)          /* Link Partner 10BASE-T1L High Level Transmit Operating Mode Ability. */
#define BITL_AN_LP_ADV_ABILITY_H_AN_LP_ADV_B10L_TX_LVL_HI_ABL (1U)           /* Link Partner 10BASE-T1L High Level Transmit Operating Mode Ability. */
#define BITM_AN_LP_ADV_ABILITY_H_AN_LP_ADV_B10L_TX_LVL_HI_ABL (0X2000U)      /* Link Partner 10BASE-T1L High Level Transmit Operating Mode Ability. */
#define BITP_AN_LP_ADV_ABILITY_H_AN_LP_ADV_B10L_EEE           (14U)          /* Link Partner 10BASE-T1L EEE Ability. */
#define BITL_AN_LP_ADV_ABILITY_H_AN_LP_ADV_B10L_EEE           (1U)           /* Link Partner 10BASE-T1L EEE Ability. */
#define BITM_AN_LP_ADV_ABILITY_H_AN_LP_ADV_B10L_EEE           (0X4000U)      /* Link Partner 10BASE-T1L EEE Ability. */

/* ----------------------------------------------------------------------------------------------------
          AN_NEXT_PAGE_L                                        Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_NEXT_PAGE_L_AN_NP_MESSAGE_CODE                (0U)           /* Message/unformatted Code Field. */
#define BITL_AN_NEXT_PAGE_L_AN_NP_MESSAGE_CODE                (11U)          /* Message/unformatted Code Field. */
#define BITM_AN_NEXT_PAGE_L_AN_NP_MESSAGE_CODE                (0X07FFU)      /* Message/unformatted Code Field. */
#define BITP_AN_NEXT_PAGE_L_AN_NP_TOGGLE                      (11U)          /* Toggle Bit. */
#define BITL_AN_NEXT_PAGE_L_AN_NP_TOGGLE                      (1U)           /* Toggle Bit. */
#define BITM_AN_NEXT_PAGE_L_AN_NP_TOGGLE                      (0X0800U)      /* Toggle Bit. */
#define BITP_AN_NEXT_PAGE_L_AN_NP_ACK2                        (12U)          /* Acknowledge 2. */
#define BITL_AN_NEXT_PAGE_L_AN_NP_ACK2                        (1U)           /* Acknowledge 2. */
#define BITM_AN_NEXT_PAGE_L_AN_NP_ACK2                        (0X1000U)      /* Acknowledge 2. */
#define BITP_AN_NEXT_PAGE_L_AN_NP_MESSAGE_PAGE                (13U)          /* Next Page Encoding. */
#define BITL_AN_NEXT_PAGE_L_AN_NP_MESSAGE_PAGE                (1U)           /* Next Page Encoding. */
#define BITM_AN_NEXT_PAGE_L_AN_NP_MESSAGE_PAGE                (0X2000U)      /* Next Page Encoding. */
#define BITP_AN_NEXT_PAGE_L_AN_NP_ACK                         (14U)          /* Next Page Acknowledge. */
#define BITL_AN_NEXT_PAGE_L_AN_NP_ACK                         (1U)           /* Next Page Acknowledge. */
#define BITM_AN_NEXT_PAGE_L_AN_NP_ACK                         (0X4000U)      /* Next Page Acknowledge. */
#define BITP_AN_NEXT_PAGE_L_AN_NP_NEXT_PAGE_REQ               (15U)          /* Next Page Request. */
#define BITL_AN_NEXT_PAGE_L_AN_NP_NEXT_PAGE_REQ               (1U)           /* Next Page Request. */
#define BITM_AN_NEXT_PAGE_L_AN_NP_NEXT_PAGE_REQ               (0X8000U)      /* Next Page Request. */

#define ENUM_AN_NEXT_PAGE_L_AN_NP_MESSAGE_PAGE_NP_UNFORMATTED_NEXT_PAGE (0X0000U)      /* Unformatted next page */
#define ENUM_AN_NEXT_PAGE_L_AN_NP_MESSAGE_PAGE_NP_MESSAGE_NEXT_PAGE (0X0001U)      /* Message next page */
#define ENUM_AN_NEXT_PAGE_L_AN_NP_MESSAGE_CODE_NP_MESSAGE_NULL (0X0001U)      /* Null Message */
#define ENUM_AN_NEXT_PAGE_L_AN_NP_MESSAGE_CODE_NP_MESSAGE_OUI (0X0005U)      /* Organizationally Unique Identifier Tagged Message */
#define ENUM_AN_NEXT_PAGE_L_AN_NP_MESSAGE_CODE_NP_MESSAGE_AN_DEV_ID (0X0006U)      /* AN Device Identifier Tag Code */

/* ----------------------------------------------------------------------------------------------------
          AN_NEXT_PAGE_M                                        Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_NEXT_PAGE_M_AN_NP_UNFORMATTED1                (0U)           /* Unformatted Code Field 1 */
#define BITL_AN_NEXT_PAGE_M_AN_NP_UNFORMATTED1                (16U)          /* Unformatted Code Field 1 */
#define BITM_AN_NEXT_PAGE_M_AN_NP_UNFORMATTED1                (0XFFFFU)      /* Unformatted Code Field 1 */

/* ----------------------------------------------------------------------------------------------------
          AN_NEXT_PAGE_H                                        Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_NEXT_PAGE_H_AN_NP_UNFORMATTED2                (0U)           /* Unformatted Code Field 2 */
#define BITL_AN_NEXT_PAGE_H_AN_NP_UNFORMATTED2                (16U)          /* Unformatted Code Field 2 */
#define BITM_AN_NEXT_PAGE_H_AN_NP_UNFORMATTED2                (0XFFFFU)      /* Unformatted Code Field 2 */

/* ----------------------------------------------------------------------------------------------------
          AN_LP_NEXT_PAGE_L                                     Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_LP_NEXT_PAGE_L_AN_LP_NP_MESSAGE_CODE          (0U)           /* Link Partner Message/unformatted Code Field. */
#define BITL_AN_LP_NEXT_PAGE_L_AN_LP_NP_MESSAGE_CODE          (11U)          /* Link Partner Message/unformatted Code Field. */
#define BITM_AN_LP_NEXT_PAGE_L_AN_LP_NP_MESSAGE_CODE          (0X07FFU)      /* Link Partner Message/unformatted Code Field. */
#define BITP_AN_LP_NEXT_PAGE_L_AN_LP_NP_TOGGLE                (11U)          /* Link Partner Toggle Bit. */
#define BITL_AN_LP_NEXT_PAGE_L_AN_LP_NP_TOGGLE                (1U)           /* Link Partner Toggle Bit. */
#define BITM_AN_LP_NEXT_PAGE_L_AN_LP_NP_TOGGLE                (0X0800U)      /* Link Partner Toggle Bit. */
#define BITP_AN_LP_NEXT_PAGE_L_AN_LP_NP_ACK2                  (12U)          /* Link Partner Acknowledge 2. */
#define BITL_AN_LP_NEXT_PAGE_L_AN_LP_NP_ACK2                  (1U)           /* Link Partner Acknowledge 2. */
#define BITM_AN_LP_NEXT_PAGE_L_AN_LP_NP_ACK2                  (0X1000U)      /* Link Partner Acknowledge 2. */
#define BITP_AN_LP_NEXT_PAGE_L_AN_LP_NP_MESSAGE_PAGE          (13U)          /* Link Partner Next Page Encoding. */
#define BITL_AN_LP_NEXT_PAGE_L_AN_LP_NP_MESSAGE_PAGE          (1U)           /* Link Partner Next Page Encoding. */
#define BITM_AN_LP_NEXT_PAGE_L_AN_LP_NP_MESSAGE_PAGE          (0X2000U)      /* Link Partner Next Page Encoding. */
#define BITP_AN_LP_NEXT_PAGE_L_AN_LP_NP_ACK                   (14U)          /* Link Partner Next Page Acknowledge. */
#define BITL_AN_LP_NEXT_PAGE_L_AN_LP_NP_ACK                   (1U)           /* Link Partner Next Page Acknowledge. */
#define BITM_AN_LP_NEXT_PAGE_L_AN_LP_NP_ACK                   (0X4000U)      /* Link Partner Next Page Acknowledge. */
#define BITP_AN_LP_NEXT_PAGE_L_AN_LP_NP_NEXT_PAGE_REQ         (15U)          /* Next Page Request. */
#define BITL_AN_LP_NEXT_PAGE_L_AN_LP_NP_NEXT_PAGE_REQ         (1U)           /* Next Page Request. */
#define BITM_AN_LP_NEXT_PAGE_L_AN_LP_NP_NEXT_PAGE_REQ         (0X8000U)      /* Next Page Request. */

#define ENUM_AN_LP_NEXT_PAGE_L_AN_LP_NP_MESSAGE_PAGE_NP_UNFORMATTED_NEXT_PAGE (0X0000U)      /* Unformatted next page */
#define ENUM_AN_LP_NEXT_PAGE_L_AN_LP_NP_MESSAGE_PAGE_NP_MESSAGE_NEXT_PAGE (0X0001U)      /* Message next page */
#define ENUM_AN_LP_NEXT_PAGE_L_AN_LP_NP_MESSAGE_CODE_NP_MESSAGE_NULL (0X0001U)      /* Null Message */
#define ENUM_AN_LP_NEXT_PAGE_L_AN_LP_NP_MESSAGE_CODE_NP_MESSAGE_OUI (0X0005U)      /* Organizationally Unique Identifier Tagged Message */
#define ENUM_AN_LP_NEXT_PAGE_L_AN_LP_NP_MESSAGE_CODE_NP_MESSAGE_AN_DEV_ID (0X0006U)      /* AN Device Identifier Tag Code */

/* ----------------------------------------------------------------------------------------------------
          AN_LP_NEXT_PAGE_M                                     Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_LP_NEXT_PAGE_M_AN_LP_NP_UNFORMATTED1          (0U)           /* Link Partner Unformatted Code Field 1 */
#define BITL_AN_LP_NEXT_PAGE_M_AN_LP_NP_UNFORMATTED1          (16U)          /* Link Partner Unformatted Code Field 1 */
#define BITM_AN_LP_NEXT_PAGE_M_AN_LP_NP_UNFORMATTED1          (0XFFFFU)      /* Link Partner Unformatted Code Field 1 */

/* ----------------------------------------------------------------------------------------------------
          AN_LP_NEXT_PAGE_H                                     Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_LP_NEXT_PAGE_H_AN_LP_NP_UNFORMATTED2          (0U)           /* Link Partner Unformatted Code Field 2 */
#define BITL_AN_LP_NEXT_PAGE_H_AN_LP_NP_UNFORMATTED2          (16U)          /* Link Partner Unformatted Code Field 2 */
#define BITM_AN_LP_NEXT_PAGE_H_AN_LP_NP_UNFORMATTED2          (0XFFFFU)      /* Link Partner Unformatted Code Field 2 */

/* ----------------------------------------------------------------------------------------------------
          AN_STATUS_EXTRA                                       Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_AN_STATUS_EXTRA_AN_LINK_GOOD                     (0U)           /* Autonegotiation Complete Indication. */
#define BITL_AN_STATUS_EXTRA_AN_LINK_GOOD                     (1U)           /* Autonegotiation Complete Indication. */
#define BITM_AN_STATUS_EXTRA_AN_LINK_GOOD                     (0X0001U)      /* Autonegotiation Complete Indication. */
#define BITP_AN_STATUS_EXTRA_AN_HCD_TECH                      (1U)           /* Highest Common Denominator (HCD) PHY Technology. */
#define BITL_AN_STATUS_EXTRA_AN_HCD_TECH                      (4U)           /* Highest Common Denominator (HCD) PHY Technology. */
#define BITM_AN_STATUS_EXTRA_AN_HCD_TECH                      (0X001EU)      /* Highest Common Denominator (HCD) PHY Technology. */
#define BITP_AN_STATUS_EXTRA_AN_MS_CONFIG_RSLTN               (5U)           /* Master/slave Resolution Result. */
#define BITL_AN_STATUS_EXTRA_AN_MS_CONFIG_RSLTN               (2U)           /* Master/slave Resolution Result. */
#define BITM_AN_STATUS_EXTRA_AN_MS_CONFIG_RSLTN               (0X0060U)      /* Master/slave Resolution Result. */
#define BITP_AN_STATUS_EXTRA_AN_INC_LINK                      (7U)           /* Incompatible Link Indication. */
#define BITL_AN_STATUS_EXTRA_AN_INC_LINK                      (1U)           /* Incompatible Link Indication. */
#define BITM_AN_STATUS_EXTRA_AN_INC_LINK                      (0X0080U)      /* Incompatible Link Indication. */
#define BITP_AN_STATUS_EXTRA_AN_LP_NP_RX                      (8U)           /* Next Page Request Received from Link Partner. */
#define BITL_AN_STATUS_EXTRA_AN_LP_NP_RX                      (1U)           /* Next Page Request Received from Link Partner. */
#define BITM_AN_STATUS_EXTRA_AN_LP_NP_RX                      (0X0100U)      /* Next Page Request Received from Link Partner. */

#define ENUM_AN_STATUS_EXTRA_AN_MS_CONFIG_RSLTN_MS_NOT_RUN    (0X0000U)      /* Not run */
#define ENUM_AN_STATUS_EXTRA_AN_MS_CONFIG_RSLTN_MS_FAULT      (0X0001U)      /* Configuration fault */
#define ENUM_AN_STATUS_EXTRA_AN_MS_CONFIG_RSLTN_MS_SLAVE      (0X0002U)      /* Success, PHY is configured as SLAVE */
#define ENUM_AN_STATUS_EXTRA_AN_MS_CONFIG_RSLTN_MS_MASTER     (0X0003U)      /* Success, PHY is configured as MASTER */
#define ENUM_AN_STATUS_EXTRA_AN_HCD_TECH_HCD_NULL             (0X0000U)      /* NULL (not run) */
#define ENUM_AN_STATUS_EXTRA_AN_HCD_TECH_HCD_B10L             (0X0001U)      /* 10BASE-T1L */

/* ----------------------------------------------------------------------------------------------------
          MMD1_DEV_ID1                                          Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_MMD1_DEV_ID1_MMD1_DEV_ID1                        (0U)           /* Organizationally Unique Identifier */
#define BITL_MMD1_DEV_ID1_MMD1_DEV_ID1                        (16U)          /* Organizationally Unique Identifier */
#define BITM_MMD1_DEV_ID1_MMD1_DEV_ID1                        (0XFFFFU)      /* Organizationally Unique Identifier */

/* ----------------------------------------------------------------------------------------------------
          MMD1_DEV_ID2                                          Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_MMD1_DEV_ID2_MMD1_REV_NUM                        (0U)           /* Revision Number */
#define BITL_MMD1_DEV_ID2_MMD1_REV_NUM                        (4U)           /* Revision Number */
#define BITM_MMD1_DEV_ID2_MMD1_REV_NUM                        (0X000FU)      /* Revision Number */
#define BITP_MMD1_DEV_ID2_MMD1_MODEL_NUM                      (4U)           /* Model Number */
#define BITL_MMD1_DEV_ID2_MMD1_MODEL_NUM                      (6U)           /* Model Number */
#define BITM_MMD1_DEV_ID2_MMD1_MODEL_NUM                      (0X03F0U)      /* Model Number */
#define BITP_MMD1_DEV_ID2_MMD1_DEV_ID2_OUI                    (10U)          /* Organizationally Unique Identifier */
#define BITL_MMD1_DEV_ID2_MMD1_DEV_ID2_OUI                    (6U)           /* Organizationally Unique Identifier */
#define BITM_MMD1_DEV_ID2_MMD1_DEV_ID2_OUI                    (0XFC00U)      /* Organizationally Unique Identifier */

/* ----------------------------------------------------------------------------------------------------
          CRSM_IRQ_STATUS                                       Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_CRSM_IRQ_STATUS_CRSM_HRD_RST_IRQ_LH              (11U)          /* Hardware Reset Interrupt */
#define BITL_CRSM_IRQ_STATUS_CRSM_HRD_RST_IRQ_LH              (1U)           /* Hardware Reset Interrupt */
#define BITM_CRSM_IRQ_STATUS_CRSM_HRD_RST_IRQ_LH              (0X0800U)      /* Hardware Reset Interrupt */
#define BITP_CRSM_IRQ_STATUS_CRSM_SW_IRQ_LH                   (15U)          /* Software Requested Interrupt Event. */
#define BITL_CRSM_IRQ_STATUS_CRSM_SW_IRQ_LH                   (1U)           /* Software Requested Interrupt Event. */
#define BITM_CRSM_IRQ_STATUS_CRSM_SW_IRQ_LH                   (0X8000U)      /* Software Requested Interrupt Event. */

/* ----------------------------------------------------------------------------------------------------
          PHY_SUBSYS_IRQ_STATUS                                 Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_PHY_SUBSYS_IRQ_STATUS_LINK_STAT_CHNG_LH          (1U)           /* Link Status Change. */
#define BITL_PHY_SUBSYS_IRQ_STATUS_LINK_STAT_CHNG_LH          (1U)           /* Link Status Change. */
#define BITM_PHY_SUBSYS_IRQ_STATUS_LINK_STAT_CHNG_LH          (0X0002U)      /* Link Status Change. */
#define BITP_PHY_SUBSYS_IRQ_STATUS_AN_STAT_CHNG_IRQ_LH        (11U)          /* Autonegotiation Status Change Interrupt. */
#define BITL_PHY_SUBSYS_IRQ_STATUS_AN_STAT_CHNG_IRQ_LH        (1U)           /* Autonegotiation Status Change Interrupt. */
#define BITM_PHY_SUBSYS_IRQ_STATUS_AN_STAT_CHNG_IRQ_LH        (0X0800U)      /* Autonegotiation Status Change Interrupt. */
#define BITP_PHY_SUBSYS_IRQ_STATUS_MAC_IF_EBUF_ERR_IRQ_LH     (13U)          /* Mac Interface Buffers Overflow/underflow Interrupt */
#define BITL_PHY_SUBSYS_IRQ_STATUS_MAC_IF_EBUF_ERR_IRQ_LH     (1U)           /* Mac Interface Buffers Overflow/underflow Interrupt */
#define BITM_PHY_SUBSYS_IRQ_STATUS_MAC_IF_EBUF_ERR_IRQ_LH     (0X2000U)      /* Mac Interface Buffers Overflow/underflow Interrupt */
#define BITP_PHY_SUBSYS_IRQ_STATUS_MAC_IF_FC_FG_IRQ_LH        (14U)          /* Mac Interface Frame Checker/Generator Interrupt */
#define BITL_PHY_SUBSYS_IRQ_STATUS_MAC_IF_FC_FG_IRQ_LH        (1U)           /* Mac Interface Frame Checker/Generator Interrupt */
#define BITM_PHY_SUBSYS_IRQ_STATUS_MAC_IF_FC_FG_IRQ_LH        (0X4000U)      /* Mac Interface Frame Checker/Generator Interrupt */

/* ----------------------------------------------------------------------------------------------------
          CRSM_IRQ_MASK                                         Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_CRSM_IRQ_MASK_CRSM_HRD_RST_IRQ_EN                (11U)          /* Enable Hardware Reset Interrupt. */
#define BITL_CRSM_IRQ_MASK_CRSM_HRD_RST_IRQ_EN                (1U)           /* Enable Hardware Reset Interrupt. */
#define BITM_CRSM_IRQ_MASK_CRSM_HRD_RST_IRQ_EN                (0X0800U)      /* Enable Hardware Reset Interrupt. */
#define BITP_CRSM_IRQ_MASK_CRSM_SW_IRQ_REQ                    (15U)          /* Software Interrupt Request. */
#define BITL_CRSM_IRQ_MASK_CRSM_SW_IRQ_REQ                    (1U)           /* Software Interrupt Request. */
#define BITM_CRSM_IRQ_MASK_CRSM_SW_IRQ_REQ                    (0X8000U)      /* Software Interrupt Request. */

/* ----------------------------------------------------------------------------------------------------
          PHY_SUBSYS_IRQ_MASK                                   Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_PHY_SUBSYS_IRQ_MASK_LINK_STAT_CHNG_IRQ_EN        (1U)           /* Enable Link Status Change Interrupt. */
#define BITL_PHY_SUBSYS_IRQ_MASK_LINK_STAT_CHNG_IRQ_EN        (1U)           /* Enable Link Status Change Interrupt. */
#define BITM_PHY_SUBSYS_IRQ_MASK_LINK_STAT_CHNG_IRQ_EN        (0X0002U)      /* Enable Link Status Change Interrupt. */
#define BITP_PHY_SUBSYS_IRQ_MASK_AN_STAT_CHNG_IRQ_EN          (11U)          /* Enable Autonegotiation Status Change Interrupt. */
#define BITL_PHY_SUBSYS_IRQ_MASK_AN_STAT_CHNG_IRQ_EN          (1U)           /* Enable Autonegotiation Status Change Interrupt. */
#define BITM_PHY_SUBSYS_IRQ_MASK_AN_STAT_CHNG_IRQ_EN          (0X0800U)      /* Enable Autonegotiation Status Change Interrupt. */
#define BITP_PHY_SUBSYS_IRQ_MASK_MAC_IF_EBUF_ERR_IRQ_EN       (13U)          /* Enable Mac Interface Buffers Overflow/underflow Interrupt */
#define BITL_PHY_SUBSYS_IRQ_MASK_MAC_IF_EBUF_ERR_IRQ_EN       (1U)           /* Enable Mac Interface Buffers Overflow/underflow Interrupt */
#define BITM_PHY_SUBSYS_IRQ_MASK_MAC_IF_EBUF_ERR_IRQ_EN       (0X2000U)      /* Enable Mac Interface Buffers Overflow/underflow Interrupt */
#define BITP_PHY_SUBSYS_IRQ_MASK_MAC_IF_FC_FG_IRQ_EN          (14U)          /* Enable Mac Interface Frame Checker/Generator Interrupt */
#define BITL_PHY_SUBSYS_IRQ_MASK_MAC_IF_FC_FG_IRQ_EN          (1U)           /* Enable Mac Interface Frame Checker/Generator Interrupt */
#define BITM_PHY_SUBSYS_IRQ_MASK_MAC_IF_FC_FG_IRQ_EN          (0X4000U)      /* Enable Mac Interface Frame Checker/Generator Interrupt */

/* ----------------------------------------------------------------------------------------------------
          FC_EN                                                 Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FC_EN_FC_EN                                      (0U)           /* Frame Checker Enable */
#define BITL_FC_EN_FC_EN                                      (1U)           /* Frame Checker Enable */
#define BITM_FC_EN_FC_EN                                      (0X0001U)      /* Frame Checker Enable */

/* ----------------------------------------------------------------------------------------------------
          FC_IRQ_EN                                             Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FC_IRQ_EN_FC_IRQ_EN                              (0U)           /* Frame Checker Interrupt Enable */
#define BITL_FC_IRQ_EN_FC_IRQ_EN                              (1U)           /* Frame Checker Interrupt Enable */
#define BITM_FC_IRQ_EN_FC_IRQ_EN                              (0X0001U)      /* Frame Checker Interrupt Enable */

/* ----------------------------------------------------------------------------------------------------
          FC_TX_SEL                                             Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FC_TX_SEL_FC_TX_SEL                              (0U)           /* Frame Checker Transmit Select */
#define BITL_FC_TX_SEL_FC_TX_SEL                              (1U)           /* Frame Checker Transmit Select */
#define BITM_FC_TX_SEL_FC_TX_SEL                              (0X0001U)      /* Frame Checker Transmit Select */

/* ----------------------------------------------------------------------------------------------------
          RX_ERR_CNT                                            Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_RX_ERR_CNT_RX_ERR_CNT                            (0U)           /* Receive Error Count */
#define BITL_RX_ERR_CNT_RX_ERR_CNT                            (16U)          /* Receive Error Count */
#define BITM_RX_ERR_CNT_RX_ERR_CNT                            (0XFFFFU)      /* Receive Error Count */

/* ----------------------------------------------------------------------------------------------------
          FC_FRM_CNT_H                                          Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FC_FRM_CNT_H_FC_FRM_CNT_H                        (0U)           /* Bits [31:16] of Latched Copy of the Number of Received Frames */
#define BITL_FC_FRM_CNT_H_FC_FRM_CNT_H                        (16U)          /* Bits [31:16] of Latched Copy of the Number of Received Frames */
#define BITM_FC_FRM_CNT_H_FC_FRM_CNT_H                        (0XFFFFU)      /* Bits [31:16] of Latched Copy of the Number of Received Frames */

/* ----------------------------------------------------------------------------------------------------
          FC_FRM_CNT_L                                          Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FC_FRM_CNT_L_FC_FRM_CNT_L                        (0U)           /* Bits [15:0] of Latched Copy of the Number of Received Frames */
#define BITL_FC_FRM_CNT_L_FC_FRM_CNT_L                        (16U)          /* Bits [15:0] of Latched Copy of the Number of Received Frames */
#define BITM_FC_FRM_CNT_L_FC_FRM_CNT_L                        (0XFFFFU)      /* Bits [15:0] of Latched Copy of the Number of Received Frames */

/* ----------------------------------------------------------------------------------------------------
          FC_LEN_ERR_CNT                                        Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FC_LEN_ERR_CNT_FC_LEN_ERR_CNT                    (0U)           /* Latched Copy of the Frame Length Error Counter */
#define BITL_FC_LEN_ERR_CNT_FC_LEN_ERR_CNT                    (16U)          /* Latched Copy of the Frame Length Error Counter */
#define BITM_FC_LEN_ERR_CNT_FC_LEN_ERR_CNT                    (0XFFFFU)      /* Latched Copy of the Frame Length Error Counter */

/* ----------------------------------------------------------------------------------------------------
          FC_ALGN_ERR_CNT                                       Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FC_ALGN_ERR_CNT_FC_ALGN_ERR_CNT                  (0U)           /* Latched Copy of the Frame Alignment Error Counter */
#define BITL_FC_ALGN_ERR_CNT_FC_ALGN_ERR_CNT                  (16U)          /* Latched Copy of the Frame Alignment Error Counter */
#define BITM_FC_ALGN_ERR_CNT_FC_ALGN_ERR_CNT                  (0XFFFFU)      /* Latched Copy of the Frame Alignment Error Counter */

/* ----------------------------------------------------------------------------------------------------
          FC_SYMB_ERR_CNT                                       Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FC_SYMB_ERR_CNT_FC_SYMB_ERR_CNT                  (0U)           /* Latched Copy of the Symbol Error Counter */
#define BITL_FC_SYMB_ERR_CNT_FC_SYMB_ERR_CNT                  (16U)          /* Latched Copy of the Symbol Error Counter */
#define BITM_FC_SYMB_ERR_CNT_FC_SYMB_ERR_CNT                  (0XFFFFU)      /* Latched Copy of the Symbol Error Counter */

/* ----------------------------------------------------------------------------------------------------
          FC_OSZ_CNT                                            Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FC_OSZ_CNT_FC_OSZ_CNT                            (0U)           /* Latched copy of the Overisized Frame Error Counter */
#define BITL_FC_OSZ_CNT_FC_OSZ_CNT                            (16U)          /* Latched copy of the Overisized Frame Error Counter */
#define BITM_FC_OSZ_CNT_FC_OSZ_CNT                            (0XFFFFU)      /* Latched copy of the Overisized Frame Error Counter */

/* ----------------------------------------------------------------------------------------------------
          FC_USZ_CNT                                            Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FC_USZ_CNT_FC_USZ_CNT                            (0U)           /* Latched Copy of the Undersized Frame Error Counter */
#define BITL_FC_USZ_CNT_FC_USZ_CNT                            (16U)          /* Latched Copy of the Undersized Frame Error Counter */
#define BITM_FC_USZ_CNT_FC_USZ_CNT                            (0XFFFFU)      /* Latched Copy of the Undersized Frame Error Counter */

/* ----------------------------------------------------------------------------------------------------
          FC_ODD_CNT                                            Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FC_ODD_CNT_FC_ODD_CNT                            (0U)           /* Latched Copy of the Odd Nibble Counter */
#define BITL_FC_ODD_CNT_FC_ODD_CNT                            (16U)          /* Latched Copy of the Odd Nibble Counter */
#define BITM_FC_ODD_CNT_FC_ODD_CNT                            (0XFFFFU)      /* Latched Copy of the Odd Nibble Counter */

/* ----------------------------------------------------------------------------------------------------
          FC_ODD_PRE_CNT                                        Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FC_ODD_PRE_CNT_FC_ODD_PRE_CNT                    (0U)           /* Latched Copy of the Odd Preamble Packet Counter */
#define BITL_FC_ODD_PRE_CNT_FC_ODD_PRE_CNT                    (16U)          /* Latched Copy of the Odd Preamble Packet Counter */
#define BITM_FC_ODD_PRE_CNT_FC_ODD_PRE_CNT                    (0XFFFFU)      /* Latched Copy of the Odd Preamble Packet Counter */

/* ----------------------------------------------------------------------------------------------------
          FC_FALSE_CARRIER_CNT                                  Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FC_FALSE_CARRIER_CNT_FC_FALSE_CARRIER_CNT        (0U)           /* Latched Copy of the False Carrier Events Counter */
#define BITL_FC_FALSE_CARRIER_CNT_FC_FALSE_CARRIER_CNT        (16U)          /* Latched Copy of the False Carrier Events Counter */
#define BITM_FC_FALSE_CARRIER_CNT_FC_FALSE_CARRIER_CNT        (0XFFFFU)      /* Latched Copy of the False Carrier Events Counter */

/* ----------------------------------------------------------------------------------------------------
          FG_EN                                                 Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FG_EN_FG_EN                                      (0U)           /* Frame Generator Enable */
#define BITL_FG_EN_FG_EN                                      (1U)           /* Frame Generator Enable */
#define BITM_FG_EN_FG_EN                                      (0X0001U)      /* Frame Generator Enable */

/* ----------------------------------------------------------------------------------------------------
          FG_CNTRL_RSTRT                                        Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FG_CNTRL_RSTRT_FG_CNTRL                          (0U)           /* Frame Generator Control */
#define BITL_FG_CNTRL_RSTRT_FG_CNTRL                          (3U)           /* Frame Generator Control */
#define BITM_FG_CNTRL_RSTRT_FG_CNTRL                          (0X0007U)      /* Frame Generator Control */
#define BITP_FG_CNTRL_RSTRT_FG_RSTRT                          (3U)           /* Frame Generator Restart */
#define BITL_FG_CNTRL_RSTRT_FG_RSTRT                          (1U)           /* Frame Generator Restart */
#define BITM_FG_CNTRL_RSTRT_FG_RSTRT                          (0X0008U)      /* Frame Generator Restart */

#define ENUM_FG_CNTRL_RSTRT_FG_CNTRL_FG_GEN_NONE              (0X0000U)      /* No description provided */
#define ENUM_FG_CNTRL_RSTRT_FG_CNTRL_FG_GEN_RANDOM_PAYLOAD    (0X0001U)      /* No description provided */
#define ENUM_FG_CNTRL_RSTRT_FG_CNTRL_FG_GEN_0X00_PAYLOAD      (0X0002U)      /* No description provided */
#define ENUM_FG_CNTRL_RSTRT_FG_CNTRL_FG_GEN_0XFF_PAYLOAD      (0X0003U)      /* No description provided */
#define ENUM_FG_CNTRL_RSTRT_FG_CNTRL_FG_GEN_0X55_PAYLOAD      (0X0004U)      /* No description provided */
#define ENUM_FG_CNTRL_RSTRT_FG_CNTRL_FG_GEN_DECR_PAYLOAD      (0X0005U)      /* No description provided */

/* ----------------------------------------------------------------------------------------------------
          FG_CONT_MODE_EN                                       Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FG_CONT_MODE_EN_FG_CONT_MODE_EN                  (0U)           /* No description provided */
#define BITL_FG_CONT_MODE_EN_FG_CONT_MODE_EN                  (1U)           /* No description provided */
#define BITM_FG_CONT_MODE_EN_FG_CONT_MODE_EN                  (0X0001U)      /* No description provided */

/* ----------------------------------------------------------------------------------------------------
          FG_IRQ_EN                                             Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FG_IRQ_EN_FG_IRQ_EN                              (0U)           /* Frame  Generator Interrupt Enable */
#define BITL_FG_IRQ_EN_FG_IRQ_EN                              (1U)           /* Frame  Generator Interrupt Enable */
#define BITM_FG_IRQ_EN_FG_IRQ_EN                              (0X0001U)      /* Frame  Generator Interrupt Enable */

/* ----------------------------------------------------------------------------------------------------
          FG_FRM_LEN                                            Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FG_FRM_LEN_FG_FRM_LEN                            (0U)           /* The Data Field Frame Length in Bytes */
#define BITL_FG_FRM_LEN_FG_FRM_LEN                            (16U)          /* The Data Field Frame Length in Bytes */
#define BITM_FG_FRM_LEN_FG_FRM_LEN                            (0XFFFFU)      /* The Data Field Frame Length in Bytes */

/* ----------------------------------------------------------------------------------------------------
          FG_NFRM_H                                             Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FG_NFRM_H_FG_NFRM_H                              (0U)           /* Bits [31:16] of the Number of Frames to be Generated */
#define BITL_FG_NFRM_H_FG_NFRM_H                              (16U)          /* Bits [31:16] of the Number of Frames to be Generated */
#define BITM_FG_NFRM_H_FG_NFRM_H                              (0XFFFFU)      /* Bits [31:16] of the Number of Frames to be Generated */

/* ----------------------------------------------------------------------------------------------------
          FG_NFRM_L                                             Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FG_NFRM_L_FG_NFRM_L                              (0U)           /* Bits [15:0] of the Number of Frames to be Generated */
#define BITL_FG_NFRM_L_FG_NFRM_L                              (16U)          /* Bits [15:0] of the Number of Frames to be Generated */
#define BITM_FG_NFRM_L_FG_NFRM_L                              (0XFFFFU)      /* Bits [15:0] of the Number of Frames to be Generated */

/* ----------------------------------------------------------------------------------------------------
          FG_DONE                                               Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_FG_DONE_FG_DONE                                  (0U)           /* Frame Generator Done */
#define BITL_FG_DONE_FG_DONE                                  (1U)           /* Frame Generator Done */
#define BITM_FG_DONE_FG_DONE                                  (0X0001U)      /* Frame Generator Done */

/* ----------------------------------------------------------------------------------------------------
          RMII_CFG                                              Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_RMII_CFG_RMII_TXD_CHK_EN                         (0U)           /* RMII TXD Check Enable */
#define BITL_RMII_CFG_RMII_TXD_CHK_EN                         (1U)           /* RMII TXD Check Enable */
#define BITM_RMII_CFG_RMII_TXD_CHK_EN                         (0X0001U)      /* RMII TXD Check Enable */

/* ----------------------------------------------------------------------------------------------------
          MAC_IF_LOOPBACK                                       Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_MAC_IF_LOOPBACK_MAC_IF_LB_EN                     (0U)           /* MAC Interface Loopback Enable. */
#define BITL_MAC_IF_LOOPBACK_MAC_IF_LB_EN                     (1U)           /* MAC Interface Loopback Enable. */
#define BITM_MAC_IF_LOOPBACK_MAC_IF_LB_EN                     (0X0001U)      /* MAC Interface Loopback Enable. */
#define BITP_MAC_IF_LOOPBACK_MAC_IF_LB_TX_SUP_EN              (1U)           /* Suppress Transmission Enable. */
#define BITL_MAC_IF_LOOPBACK_MAC_IF_LB_TX_SUP_EN              (1U)           /* Suppress Transmission Enable. */
#define BITM_MAC_IF_LOOPBACK_MAC_IF_LB_TX_SUP_EN              (0X0002U)      /* Suppress Transmission Enable. */
#define BITP_MAC_IF_LOOPBACK_MAC_IF_REM_LB_EN                 (2U)           /* MAC Interface Remote Loopback Enable. */
#define BITL_MAC_IF_LOOPBACK_MAC_IF_REM_LB_EN                 (1U)           /* MAC Interface Remote Loopback Enable. */
#define BITM_MAC_IF_LOOPBACK_MAC_IF_REM_LB_EN                 (0X0004U)      /* MAC Interface Remote Loopback Enable. */
#define BITP_MAC_IF_LOOPBACK_MAC_IF_REM_LB_RX_SUP_EN          (3U)           /* Suppress RX Enable */
#define BITL_MAC_IF_LOOPBACK_MAC_IF_REM_LB_RX_SUP_EN          (1U)           /* Suppress RX Enable */
#define BITM_MAC_IF_LOOPBACK_MAC_IF_REM_LB_RX_SUP_EN          (0X0008U)      /* Suppress RX Enable */

/* ----------------------------------------------------------------------------------------------------
          CRSM_SFT_RST                                          Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_CRSM_SFT_RST_CRSM_SFT_RST                        (0U)           /* Software Reset Register. */
#define BITL_CRSM_SFT_RST_CRSM_SFT_RST                        (1U)           /* Software Reset Register. */
#define BITM_CRSM_SFT_RST_CRSM_SFT_RST                        (0X0001U)      /* Software Reset Register. */

/* ----------------------------------------------------------------------------------------------------
          CRSM_SFT_PD_CNTRL                                     Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_CRSM_SFT_PD_CNTRL_CRSM_SFT_PD                    (0U)           /* Software Power-down */
#define BITL_CRSM_SFT_PD_CNTRL_CRSM_SFT_PD                    (1U)           /* Software Power-down */
#define BITM_CRSM_SFT_PD_CNTRL_CRSM_SFT_PD                    (0X0001U)      /* Software Power-down */

/* ----------------------------------------------------------------------------------------------------
          CRSM_PHY_SUBSYS_RST                                   Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_CRSM_PHY_SUBSYS_RST_CRSM_PHY_SUBSYS_RST          (0U)           /* PHY Subsystem Reset */
#define BITL_CRSM_PHY_SUBSYS_RST_CRSM_PHY_SUBSYS_RST          (1U)           /* PHY Subsystem Reset */
#define BITM_CRSM_PHY_SUBSYS_RST_CRSM_PHY_SUBSYS_RST          (0X0001U)      /* PHY Subsystem Reset */

/* ----------------------------------------------------------------------------------------------------
          CRSM_MAC_IF_RST                                       Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_CRSM_MAC_IF_RST_CRSM_MAC_IF_RST                  (0U)           /* PHY MAC Interface Reset */
#define BITL_CRSM_MAC_IF_RST_CRSM_MAC_IF_RST                  (1U)           /* PHY MAC Interface Reset */
#define BITM_CRSM_MAC_IF_RST_CRSM_MAC_IF_RST                  (0X0001U)      /* PHY MAC Interface Reset */

/* ----------------------------------------------------------------------------------------------------
          CRSM_STAT                                             Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_CRSM_STAT_CRSM_SYS_RDY                           (0U)           /* System Ready */
#define BITL_CRSM_STAT_CRSM_SYS_RDY                           (1U)           /* System Ready */
#define BITM_CRSM_STAT_CRSM_SYS_RDY                           (0X0001U)      /* System Ready */
#define BITP_CRSM_STAT_CRSM_SFT_PD_RDY                        (1U)           /* Software Power-down Status */
#define BITL_CRSM_STAT_CRSM_SFT_PD_RDY                        (1U)           /* Software Power-down Status */
#define BITM_CRSM_STAT_CRSM_SFT_PD_RDY                        (0X0002U)      /* Software Power-down Status */

/* ----------------------------------------------------------------------------------------------------
          CRSM_MAC_IF_CFG                                       Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_CRSM_MAC_IF_CFG_CRSM_RMII_MEDIA_CNV_EN           (8U)           /* Media Converter Enable */
#define BITL_CRSM_MAC_IF_CFG_CRSM_RMII_MEDIA_CNV_EN           (1U)           /* Media Converter Enable */
#define BITM_CRSM_MAC_IF_CFG_CRSM_RMII_MEDIA_CNV_EN           (0X0100U)      /* Media Converter Enable */

/* ----------------------------------------------------------------------------------------------------
          LED_BLINK_TIME_CNTRL                                  Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_LED_BLINK_TIME_CNTRL_LED_OFF_N4MS                (0U)           /* LED off Blink Time */
#define BITL_LED_BLINK_TIME_CNTRL_LED_OFF_N4MS                (8U)           /* LED off Blink Time */
#define BITM_LED_BLINK_TIME_CNTRL_LED_OFF_N4MS                (0X00FFU)      /* LED off Blink Time */
#define BITP_LED_BLINK_TIME_CNTRL_LED_ON_N4MS                 (8U)           /* LED on Blink Time */
#define BITL_LED_BLINK_TIME_CNTRL_LED_ON_N4MS                 (8U)           /* LED on Blink Time */
#define BITM_LED_BLINK_TIME_CNTRL_LED_ON_N4MS                 (0XFF00U)      /* LED on Blink Time */

/* ----------------------------------------------------------------------------------------------------
          LED_CNTRL                                             Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_LED_CNTRL_LED_EN                                 (0U)           /* LED Enable. */
#define BITL_LED_CNTRL_LED_EN                                 (1U)           /* LED Enable. */
#define BITM_LED_CNTRL_LED_EN                                 (0X0001U)      /* LED Enable. */

#endif  /* end ifndef ADIN1100_ADDR_RDEF_H_ */

#endif /* ADIN1100_ADDR_RDEF_H */

