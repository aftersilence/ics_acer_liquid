# Copyright (c) 2009, Code Aurora Forum.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
# config.mk
#
# Product-specific compile-time definitions.
#
#######   for use when building CyanogenMod
USE_CAMERA_STUB := false
#######

TARGET_BOOTLOADER_BOARD_NAME := salsa
TARGET_NO_BOOTLOADER := true
TARGET_NO_KERNEL := true
TARGET_NO_RADIOIMAGE := true

# QSD8250
TARGET_BOARD_PLATFORM := qsd8k
TARGET_BOARD_PLATFORM_GPU := qcom-adreno200

TARGET_CPU_ABI  := armeabi-v7a
TARGET_CPU_ABI2 := armeabi

# Neon stuff
TARGET_ARCH_VARIANT := armv7-a-neon
ARCH_ARM_HAVE_TLS_REGISTER := true

# FPU compilation flags
TARGET_GLOBAL_CFLAGS += -mtune=cortex-a8 -mfpu=neon -mfloat-abi=softfp
TARGET_GLOBAL_CPPFLAGS += -mtune=cortex-a8 -mfpu=neon -mfloat-abi=softfp

# Wifi related defines
BOARD_WPA_SUPPLICANT_DRIVER := WEXT
WPA_SUPPLICANT_VERSION      := VER_0_5_X
BOARD_WLAN_DEVICE           := bcm4325
WIFI_DRIVER_MODULE_PATH     := "/system/lib/modules/bcm4329.ko"
WIFI_DRIVER_FW_STA_PATH := "/etc/wifi/BCM4325.bin"
WIFI_DRIVER_FW_AP_PATH := "/etc/wifi/BCM4325_apsta.bin"
WIFI_DRIVER_MODULE_ARG := "firmware_path=/etc/wifi/BCM4325.bin nvram_path=/etc/wifi/nvram.txt"
WIFI_DRIVER_MODULE_NAME := "bcm4329"

BOARD_USES_GENERIC_AUDIO := false

BOARD_HAVE_BLUETOOTH := true
BOARD_HAVE_BLUETOOTH_BCM := true
BOARD_HAVE_FM_RADIO := false
BOARD_VENDOR_QCOM_AMSS_VERSION := 6225
BOARD_USES_QCOM_LIBS := true
BOARD_USES_QCOM_LIBRPC := true
BOARD_USES_QCOM_HARDWARE := true
BOARD_USES_QCOM_GPS := true
TARGET_PROVIDES_LIBAUDIO := true
TARGET_USES_OLD_LIBSENSORS_HAL := true

TARGET_PROVIDES_LIBRIL := true

BOARD_USE_USB_MASS_STORAGE_SWITCH := true
TARGET_USE_CUSTOM_LUN_FILE_PATH := "/sys/devices/platform/msm_hsusb/gadget/lun"
BOARD_CUSTOM_USB_CONTROLLER := ../../device/acer/liquid/UsbController.cpp

# Call headers from msm-3.0: needed to build libs in hardware/qcom/display
TARGET_SPECIFIC_HEADER_PATH := device/acer/liquid/include

# Vibrator
#BOARD_HAS_VIBRATOR_IMPLEMENTATION := ../../device/acer/liquid/vibrator.c

#TARGET_PROXIMITY_SENSOR_LIMIT := 32717
#VOLD_EMMC_SHARES_DEV_MAJOR := true
#TARGET_PROVIDES_LIBRIL := 
#BOARD_USES_OLD_CAMERA_HACK := true
#BOARD_USE_FROYO_LIBCAMERA := true
#BOARD_CAMERA_USE_GETBUFFERINFO := true
#TARGET_LIBAGL_USE_GRALLOC_COPYBITS  := true
# For Koush's recovery
#BOARD_HAS_NO_SELECT_BUTTON := true

# # cat /proc/mtd
# dev:   size   erasesize  name
# mtd0: 000a0000 00020000 "misc"
# mtd1: 00500000 00020000 "recovery"
# mtd2: 00500000 00020000 "boot"
# mtd3: 0c800000 00020000 "userdata"
# mtd4: 0c800000 00020000 "system"
# mtd5: 029e0000 00020000 "cache"
#BOARD_BOOTIMAGE_PARTITION_SIZE := 0x00500000
#BOARD_RECOVERYIMAGE_PARTITION_SIZE := 0x00500000
#BOARD_SYSTEMIMAGE_PARTITION_SIZE := 0x0c800000
#BOARD_USERDATAIMAGE_PARTITION_SIZE := 0x0c800000

#TARGET_PREBUILT_RECOVERY_KERNEL := device/acer/liquid/recovery_kernel

BOARD_KERNEL_BASE    := 0x20000000
BOARD_NAND_PAGE_SIZE := 2048
BOARD_PAGE_SIZE := 0x00001000

TARGET_PREBUILT_KERNEL := device/acer/liquid/kernel

BOARD_KERNEL_CMDLINE := console=ttyDCC0 androidboot.hardware=qcom
BOARD_EGL_CFG := device/acer/liquid/egl.cfg
BOARD_USES_OVERLAY := true
BOARD_AVOID_DRAW_TEXTURE_EXTENSION := true
TARGET_SKIA_USE_MORE_MEMORY := true

#BOARD_USES_HGL := true
COMMON_GLOBAL_CFLAGS += -DMISSING_EGL_EXTERNAL_IMAGE -DMISSING_EGL_PIXEL_FORMAT_YV12 -DMISSING_GRALLOC_BUFFERS

# to enable the GPS HAL
BOARD_VENDOR_QCOM_GPS_LOC_API_HARDWARE := salsa
# AMSS version to use for GPS
BOARD_VENDOR_QCOM_GPS_LOC_API_AMSS_VERSION := 1240

