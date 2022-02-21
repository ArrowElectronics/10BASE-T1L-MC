
/* ================================================================================
     Project     :   ADIN1100
     File        :   ADIN1100_addr_rdef_22.h
     Description :   C header file contains macros for Registers' address relative to instances and plain bit-fields.


     Copyright (c) 2021 Analog Devices, Inc.  All Rights Reserved.
     This software is proprietary and confidential to Analog Devices, Inc. and
     its licensors.

     This file was auto-generated. Do not make local changes to this file.
   ================================================================================ */

#ifndef ADIN1100_ADDR_RDEF_22_H
#define ADIN1100_ADDR_RDEF_22_H


#if defined(_LANGUAGE_C) || (defined(__GNUC__) && !defined(__ASSEMBLER__))
#include <stdint.h>
#endif /* _LANGUAGE_C */

/* ====================================================================================================
        ADIN1100 Module Register Address Offset Definitions
   ==================================================================================================== */
#define ADDR_MI_CONTROL                                 (0X000000U)    /* MII Control Register */
#define ADDR_MI_STATUS                                  (0X000001U)    /* MII Status Register */
#define ADDR_MI_PHY_ID1                                 (0X000002U)    /* PHY Identifier 1 Register */
#define ADDR_MI_PHY_ID2                                 (0X000003U)    /* PHY Identifier 2 Register */
#define ADDR_MMD_ACCESS_CNTRL                           (0X00000DU)    /* MMD Access Control */
#define ADDR_MMD_ACCESS                                 (0X00000EU)    /* MMD Access */

/* ====================================================================================================
        ADIN1100 Module Register ResetValue Definitions
   ==================================================================================================== */
#define RSTVAL_MI_CONTROL                                 (0X1100)
#define RSTVAL_MI_STATUS                                  (0X1009)
#define RSTVAL_MI_PHY_ID1                                 (0X283)
#define RSTVAL_MI_PHY_ID2                                 (0XBC81)
#define RSTVAL_MMD_ACCESS_CNTRL                           (0X0)
#define RSTVAL_MMD_ACCESS                                 (0X0)

/* ====================================================================================================
        ADIN1100 Module Register BitPositions, Lengths, Masks and Enumerations Definitions
   ==================================================================================================== */

/* ----------------------------------------------------------------------------------------------------
          MI_CONTROL                                            Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_MI_CONTROL_MI_UNIDIR_EN                 (5U)           /* MII Unidirectional Enable */
#define BITL_MI_CONTROL_MI_UNIDIR_EN                 (1U)           /* MII Unidirectional Enable */
#define BITM_MI_CONTROL_MI_UNIDIR_EN                 (0X0020U)      /* MII Unidirectional Enable */
#define BITP_MI_CONTROL_MI_SPEED_SEL_MSB             (6U)           /* MII Speed Selection MSB */
#define BITL_MI_CONTROL_MI_SPEED_SEL_MSB             (1U)           /* MII Speed Selection MSB */
#define BITM_MI_CONTROL_MI_SPEED_SEL_MSB             (0X0040U)      /* MII Speed Selection MSB */
#define BITP_MI_CONTROL_MI_COLTEST                   (7U)           /* MII Collision Test */
#define BITL_MI_CONTROL_MI_COLTEST                   (1U)           /* MII Collision Test */
#define BITM_MI_CONTROL_MI_COLTEST                   (0X0080U)      /* MII Collision Test */
#define BITP_MI_CONTROL_MI_FULL_DUPLEX               (8U)           /* MII Full Duplex */
#define BITL_MI_CONTROL_MI_FULL_DUPLEX               (1U)           /* MII Full Duplex */
#define BITM_MI_CONTROL_MI_FULL_DUPLEX               (0X0100U)      /* MII Full Duplex */
#define BITP_MI_CONTROL_MI_ISOLATE                   (10U)          /* MII Isolate */
#define BITL_MI_CONTROL_MI_ISOLATE                   (1U)           /* MII Isolate */
#define BITM_MI_CONTROL_MI_ISOLATE                   (0X0400U)      /* MII Isolate */
#define BITP_MI_CONTROL_MI_SFT_PD                    (11U)          /* Software Powerdown */
#define BITL_MI_CONTROL_MI_SFT_PD                    (1U)           /* Software Powerdown */
#define BITM_MI_CONTROL_MI_SFT_PD                    (0X0800U)      /* Software Powerdown */
#define BITP_MI_CONTROL_MI_AN_EN                     (12U)          /* Autonegotiation Enable */
#define BITL_MI_CONTROL_MI_AN_EN                     (1U)           /* Autonegotiation Enable */
#define BITM_MI_CONTROL_MI_AN_EN                     (0X1000U)      /* Autonegotiation Enable */
#define BITP_MI_CONTROL_MI_SPEED_SEL_LSB             (13U)          /* MII Speed Selection LSB */
#define BITL_MI_CONTROL_MI_SPEED_SEL_LSB             (1U)           /* MII Speed Selection LSB */
#define BITM_MI_CONTROL_MI_SPEED_SEL_LSB             (0X2000U)      /* MII Speed Selection LSB */
#define BITP_MI_CONTROL_MI_LOOPBACK                  (14U)          /* Local Loopback (PCS) */
#define BITL_MI_CONTROL_MI_LOOPBACK                  (1U)           /* Local Loopback (PCS) */
#define BITM_MI_CONTROL_MI_LOOPBACK                  (0X4000U)      /* Local Loopback (PCS) */
#define BITP_MI_CONTROL_MI_SFT_RST                   (15U)          /* Software Reset */
#define BITL_MI_CONTROL_MI_SFT_RST                   (1U)           /* Software Reset */
#define BITM_MI_CONTROL_MI_SFT_RST                   (0X8000U)      /* Software Reset */

/* ----------------------------------------------------------------------------------------------------
          MI_STATUS                                             Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_MI_STATUS_MI_EXT_CAPABLE                (0U)           /* MII Extended Capability */
#define BITL_MI_STATUS_MI_EXT_CAPABLE                (1U)           /* MII Extended Capability */
#define BITM_MI_STATUS_MI_EXT_CAPABLE                (0X0001U)      /* MII Extended Capability */
#define BITP_MI_STATUS_MI_JABBER_DET                 (1U)           /* MII Jabber Detect */
#define BITL_MI_STATUS_MI_JABBER_DET                 (1U)           /* MII Jabber Detect */
#define BITM_MI_STATUS_MI_JABBER_DET                 (0X0002U)      /* MII Jabber Detect */
#define BITP_MI_STATUS_MI_LINK_STAT_LAT              (2U)           /* Link Status */
#define BITL_MI_STATUS_MI_LINK_STAT_LAT              (1U)           /* Link Status */
#define BITM_MI_STATUS_MI_LINK_STAT_LAT              (0X0004U)      /* Link Status */
#define BITP_MI_STATUS_MI_AN_ABLE                    (3U)           /* Autonegotiation Ability */
#define BITL_MI_STATUS_MI_AN_ABLE                    (1U)           /* Autonegotiation Ability */
#define BITM_MI_STATUS_MI_AN_ABLE                    (0X0008U)      /* Autonegotiation Ability */
#define BITP_MI_STATUS_MI_REM_FLT                    (4U)           /* Remote Fault */
#define BITL_MI_STATUS_MI_REM_FLT                    (1U)           /* Remote Fault */
#define BITM_MI_STATUS_MI_REM_FLT                    (0X0010U)      /* Remote Fault */
#define BITP_MI_STATUS_MI_AN_COMPLETE                (5U)           /* Autonegotiation Complete */
#define BITL_MI_STATUS_MI_AN_COMPLETE                (1U)           /* Autonegotiation Complete */
#define BITM_MI_STATUS_MI_AN_COMPLETE                (0X0020U)      /* Autonegotiation Complete */
#define BITP_MI_STATUS_MI_MF_PREAM_SUP_ABLE          (6U)           /* Management Preamble Suppression Ability */
#define BITL_MI_STATUS_MI_MF_PREAM_SUP_ABLE          (1U)           /* Management Preamble Suppression Ability */
#define BITM_MI_STATUS_MI_MF_PREAM_SUP_ABLE          (0X0040U)      /* Management Preamble Suppression Ability */
#define BITP_MI_STATUS_MI_UNIDIR_ABLE                (7U)           /* Unidirectional Ability */
#define BITL_MI_STATUS_MI_UNIDIR_ABLE                (1U)           /* Unidirectional Ability */
#define BITM_MI_STATUS_MI_UNIDIR_ABLE                (0X0080U)      /* Unidirectional Ability */
#define BITP_MI_STATUS_MI_EXT_STAT_SPRT              (8U)           /* Extended Status Support */
#define BITL_MI_STATUS_MI_EXT_STAT_SPRT              (1U)           /* Extended Status Support */
#define BITM_MI_STATUS_MI_EXT_STAT_SPRT              (0X0100U)      /* Extended Status Support */
#define BITP_MI_STATUS_MI_HD_T2_SPRT                 (9U)           /* Half Duplex 100BASE-T2- Ability */
#define BITL_MI_STATUS_MI_HD_T2_SPRT                 (1U)           /* Half Duplex 100BASE-T2- Ability */
#define BITM_MI_STATUS_MI_HD_T2_SPRT                 (0X0200U)      /* Half Duplex 100BASE-T2- Ability */
#define BITP_MI_STATUS_MI_FD_T2_SPRT                 (10U)          /* Full Duplex 100BASE-T2 Ability */
#define BITL_MI_STATUS_MI_FD_T2_SPRT                 (1U)           /* Full Duplex 100BASE-T2 Ability */
#define BITM_MI_STATUS_MI_FD_T2_SPRT                 (0X0400U)      /* Full Duplex 100BASE-T2 Ability */
#define BITP_MI_STATUS_MI_HD10_SPRT                  (11U)          /* Half Duplex 10 Mb/s Ability */
#define BITL_MI_STATUS_MI_HD10_SPRT                  (1U)           /* Half Duplex 10 Mb/s Ability */
#define BITM_MI_STATUS_MI_HD10_SPRT                  (0X0800U)      /* Half Duplex 10 Mb/s Ability */
#define BITP_MI_STATUS_MI_FD10_SPRT                  (12U)          /* Full Duplex 10 Mb/s Ability */
#define BITL_MI_STATUS_MI_FD10_SPRT                  (1U)           /* Full Duplex 10 Mb/s Ability */
#define BITM_MI_STATUS_MI_FD10_SPRT                  (0X1000U)      /* Full Duplex 10 Mb/s Ability */
#define BITP_MI_STATUS_MI_HD100_SPRT                 (13U)          /* Half Duplex 100BASE-X Ability */
#define BITL_MI_STATUS_MI_HD100_SPRT                 (1U)           /* Half Duplex 100BASE-X Ability */
#define BITM_MI_STATUS_MI_HD100_SPRT                 (0X2000U)      /* Half Duplex 100BASE-X Ability */
#define BITP_MI_STATUS_MI_FD100_SPRT                 (14U)          /* Full Duplex 100BASE-X Ability */
#define BITL_MI_STATUS_MI_FD100_SPRT                 (1U)           /* Full Duplex 100BASE-X Ability */
#define BITM_MI_STATUS_MI_FD100_SPRT                 (0X4000U)      /* Full Duplex 100BASE-X Ability */
#define BITP_MI_STATUS_MI_T4_SPRT                    (15U)          /* 100BASE-T4 Ability */
#define BITL_MI_STATUS_MI_T4_SPRT                    (1U)           /* 100BASE-T4 Ability */
#define BITM_MI_STATUS_MI_T4_SPRT                    (0X8000U)      /* 100BASE-T4 Ability */

/* ----------------------------------------------------------------------------------------------------
          MI_PHY_ID1                                            Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_MI_PHY_ID1_MI_PHY_ID1                   (0U)           /* No description provided */
#define BITL_MI_PHY_ID1_MI_PHY_ID1                   (16U)          /* No description provided */
#define BITM_MI_PHY_ID1_MI_PHY_ID1                   (0XFFFFU)      /* No description provided */

/* ----------------------------------------------------------------------------------------------------
          MI_PHY_ID2                                            Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_MI_PHY_ID2_MI_REV_NUM                   (0U)           /* Revision Number */
#define BITL_MI_PHY_ID2_MI_REV_NUM                   (4U)           /* Revision Number */
#define BITM_MI_PHY_ID2_MI_REV_NUM                   (0X000FU)      /* Revision Number */
#define BITP_MI_PHY_ID2_MI_MODEL_NUM                 (4U)           /* Model Number */
#define BITL_MI_PHY_ID2_MI_MODEL_NUM                 (6U)           /* Model Number */
#define BITM_MI_PHY_ID2_MI_MODEL_NUM                 (0X03F0U)      /* Model Number */
#define BITP_MI_PHY_ID2_MI_PHY_ID2_OUI               (10U)          /* OUI Bits [7:2] */
#define BITL_MI_PHY_ID2_MI_PHY_ID2_OUI               (6U)           /* OUI Bits [7:2] */
#define BITM_MI_PHY_ID2_MI_PHY_ID2_OUI               (0XFC00U)      /* OUI Bits [7:2] */

/* ----------------------------------------------------------------------------------------------------
          MMD_ACCESS_CNTRL                                      Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_MMD_ACCESS_CNTRL_MMD_ACR_DEVAD          (0U)           /* Device Address */
#define BITL_MMD_ACCESS_CNTRL_MMD_ACR_DEVAD          (5U)           /* Device Address */
#define BITM_MMD_ACCESS_CNTRL_MMD_ACR_DEVAD          (0X001FU)      /* Device Address */
#define BITP_MMD_ACCESS_CNTRL_MMD_ACR_FUNCTION       (14U)          /* Function */
#define BITL_MMD_ACCESS_CNTRL_MMD_ACR_FUNCTION       (2U)           /* Function */
#define BITM_MMD_ACCESS_CNTRL_MMD_ACR_FUNCTION       (0XC000U)      /* Function */

/* ----------------------------------------------------------------------------------------------------
          MMD_ACCESS                                            Value             Description
   ---------------------------------------------------------------------------------------------------- */
#define BITP_MMD_ACCESS_MMD_ACCESS                   (0U)           /* Access Address */
#define BITL_MMD_ACCESS_MMD_ACCESS                   (16U)          /* Access Address */
#define BITM_MMD_ACCESS_MMD_ACCESS                   (0XFFFFU)      /* Access Address */

#endif /* ADIN1100_ADDR_RDEF_22_H */

