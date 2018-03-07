# Device ID (DID) configuration
[DID1]

# Primary Record - true or false (default)
# There can be only one primary record
primaryRecord = true

# Vendor ID '0xFFFF' indicates no Device ID Service Record is present in the device
# 0x000F = Broadcom Corporation (default)
#vendorId = 0x000F
vendorId = 0x0046

# Vendor ID Source
# 0x0001 = Bluetooth SIG assigned Device ID Vendor ID value (default)
# 0x0002 = USB Implementer’s Forum assigned Device ID Vendor ID value
#vendorIdSource = 0x0001

# Product ID & Product Version
# Per spec DID v1.3 0xJJMN for version is interpreted as JJ.M.N
# JJ: major version number, M: minor version number, N: sub-minor version number
# For example: 1200, v14.3.6
productId = 0x1200
version = 0x1436

# Optional attributes
#clientExecutableURL =
#serviceDescription =
#documentationURL =

#=================================================================================================#
# Device ID (DID) configuration
[DID2]

# Primary Record - true or false (default)
# There can be only one primary record
#primaryRecord = false

# Vendor ID '0xFFFF' indicates no Device ID Service Record is present in the device
# 0x000F = Broadcom Corporation (default)
#vendorId = 0x000F

# Vendor ID Source
# 0x0001 = Bluetooth SIG assigned Device ID Vendor ID value (default)
# 0x0002 = USB Implementer’s Forum assigned Device ID Vendor ID value
#vendorIdSource = 0x0001

# Product ID & Product Version
# Per spec DID v1.3 0xJJMN for version is interpreted as JJ.M.N
# JJ: major version number, M: minor version number, N: sub-minor version number
# Default: 0x0000, v00.0.0
#productId = 0x0000
#version = 0x0000

# Optional attributes
#clientExecutableURL =
#serviceDescription =
#documentationURL =

#=================================================================================================#
# Device ID (DID) configuration
[DID3]

# Primary Record - true or false (default)
# There can be only one primary record
#primaryRecord = false

# Vendor ID '0xFFFF' indicates no Device ID Service Record is present in the device
# 0x000F = Broadcom Corporation (default)
#vendorId = 0x000F

# Vendor ID Source
# 0x0001 = Bluetooth SIG assigned Device ID Vendor ID value (default)
# 0x0002 = USB Implementer’s Forum assigned Device ID Vendor ID value
#vendorIdSource = 0x0001

# Product ID & Product Version
# Per spec DID v1.3 0xJJMN for version is interpreted as JJ.M.N
# JJ: major version number, M: minor version number, N: sub-minor version number
# Default: 0x0000, v00.0.0
#productId = 0x0000
#version = 0x0000

# Optional attributes
#clientExecutableURL =
#serviceDescription =
#documentationURL =

#ifndef _BDROID_BUILDCFG_H
#define _BDROID_BUILDCFG_H

#define BTM_DEF_LOCAL_NAME   "Moto C Plus"
#define BTA_DISABLE_DELAY 1000 /* in milliseconds */
#define BLE_VND_INCLUDED   TRUE

#endif
