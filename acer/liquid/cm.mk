# Inherit AOSP device configuration for passion.
$(call inherit-product, device/acer/liquid/liquid.mk)

# Inherit some common cyanogenmod stuff.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

# Include GSM stuff
$(call inherit-product, vendor/cm/config/gsm.mk)

#
# Setup device specific product configuration.
#
PRODUCT_NAME := cm_liquid
PRODUCT_BRAND := acer
PRODUCT_DEVICE := liquid
PRODUCT_MODEL := a1
PRODUCT_MANUFACTURER := Acer
PRODUCT_BUILD_PROP_OVERRIDES += PRODUCT_NAME=salsa BUILD_ID=GRK39F \
BUILD_FINGERPRINT=acer/liquid/liquid:4.0.3/GRK39F/189904:user/release-keys \
PRIVATE_BUILD_DESC="liquid-user 4.0.3 GRK39F 189904 release-keys"

# Release name and versioning
PRODUCT_RELEASE_NAME := a1
PRODUCT_VERSION_DEVICE_SPECIFIC := -after_silence-$(shell date +%m%d%Y)

PRODUCT_PACKAGES += \
    Camera
#    UsbMassStorage
#    CMSettings \

# Get eng stuff on our userdebug builds
ADDITIONAL_BUILD_PROPERTIES += ro.kernel.android.checkjni=1
ADDITIONAL_DEFAULT_PROPERTIES += ro.secure=0
ADDITIONAL_DEFAULT_PROPERTIES += ro.allow.mock.location=1
# Disable visual strict mode, even on eng builds
#PRODUCT_DEFAULT_PROPERTY += persist.sys.strictmode.visual=0
ADDITIONAL_DEFAULT_PROPERTIES += persist.sys.strictmode.override=1
# USB
#ADDITIONAL_DEFAULT_PROPERTIES += persist.sys.usb.config=mass_storage,adb
#ADDITIONAL_DEFAULT_PROPERTIES += persist.sys.usb.config=mtp,adb

# Get some Gapps
#$(call inherit-product-if-exists, gapps/gapps.mk)
