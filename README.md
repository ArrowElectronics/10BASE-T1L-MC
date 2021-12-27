# 10BASE-T1L-MC: 10BASE-T1L to 10BASE-T Media Converter Platform 

This repository is dedicated to the 10BASE-T1L Media Converter including the source code, HW package files for Development, User Guides. 

The media converter (“10BASE-T1L-MC”) is a plug and play solution which enables seamlessly interfacing from single twisted pair (SPE) long reach Industrial Ethernet (“10BASET1L”)
to standard Ethernet (“10BASE-T”).

The 10BASE-T1L-MC is built using the industry leading PHY technology from Analog Devices ADI Chronous Family, namely the ADIN1100, 10BASE-T1L PHY and the ADIN1200, 10BASE-T PHY.

## 10BASE-T1L Software Package

The software package includes the configuration of both the PHY ADIN1100 and ADIN1200 with the MAX32660 MCU.

- Both the PHYs are configured with MCU over MDIO Interface GPIO Bit Banging.
- The PHYs has been programmmed to configure it in auto-negotiation, full-duplex mode, and speed at 10 Mbps. 
- The Device is programmmed with LED indication in case of various events like Power LED of MCU, Link Status LED and Activity Status LED for ADIN1100 and ADIN1200.  
- Debug UART hase been programmmed to show logs for Board Info and PHYs configuration status. 

## 10BASE-T1L Hardware Package

Hardware Package of 10BASE-T1L-MC contains Architectural Level Block Diagram, Gerber, BoM, Schematics for the development purpose, Pre-Scan Reports.

## 10BASE-T1L Mechanical Package

Mechanical Packages inlcudes CAD Data, Mechanical BoM, Mechanical Drawing, Packaging Instructions.


