#!/bin/sh

src_path=/home/thepasto/Android/Test/CM7/CM7-Rc3

cd $src_path

patch -p1 < $src_path/device/acer/liquid/Patches/framework_patch.diff
patch -p1 < $src_path/device/acer/liquid/Patches/lnp_settings.diff
patch -p1 < $src_path/device/acer/liquid/Patches/init_patch.diff

sed '1i\
add_lunch_combo cyanogen_liquid-eng' $src_path/vendor/cyanogen/vendorsetup.sh > $src_path/vendor/cyanogen/vendorsetup.sh_tmp
mv $src_path/vendor/cyanogen/vendorsetup.sh_tmp $src_path/vendor/cyanogen/vendorsetup.sh

sed '2i\
    $(LOCAL_DIR)/cyanogen_liquid.mk \\' $src_path/vendor/cyanogen/products/AndroidProducts.mk > $src_path/vendor/cyanogen/products/AndroidProducts.mk_tmp
mv $src_path/vendor/cyanogen/products/AndroidProducts.mk_tmp $src_path/vendor/cyanogen/products/AndroidProducts.mk

mkdir -p $src_path/vendor/cyanogen/overlay/liquid/packages/apps/CMParts/res/values

cat >> $src_path/vendor/cyanogen/overlay/liquid/packages/apps/CMParts/res/values/config.xml <<EOF
<?xml version="1.0" encoding="utf-8"?>
<resources>
    <!-- Whether or not to display the trackball settings -->
    <bool name="has_trackball">false</bool>
    <bool name="has_camera_button">true</bool>
    <bool name="has_rgb_notification_led">false</bool>
    <bool name="has_led_flash">false</bool>
</resources>
EOF

cat >> $src_path/vendor/cyanogen/products/cyanogen_liquid.mk <<EOF
# Inherit AOSP device configuration for liquid.
\$(call inherit-product, device/acer/liquid/liquid.mk)

# Inherit some common cyanogenmod stuff.
\$(call inherit-product, vendor/cyanogen/products/common_full.mk)

# Include GSM stuff (not needed as custom Acer apns-list and Stk are used)
\$(call inherit-product, vendor/cyanogen/products/gsm.mk)

#
# Setup device specific product configuration.
#

TARGET_NO_KERNEL := true
PRODUCT_NAME := cyanogen_liquid  
PRODUCT_BRAND := acer
PRODUCT_DEVICE := liquid
PRODUCT_BUILD_PROP_OVERRIDES += PRODUCT_NAME=liquid BUILD_ID=GRJ22 BUILD_DISPLAY_ID=GRJ90 BUILD_FINGERPRINT=google/passion/passion:2.3.4/GRJ22/121341:user/release-keys PRIVATE_BUILD_DESC="passion-user 2.3.4 GRJ22 121341 release-keys"

# Extra Liquid overlay
PRODUCT_PACKAGE_OVERLAYS += vendor/cyanogen/overlay/liquid

# CYANOGEN_WITH_GOOGLE := true

# Use a precompiled kernel until the merge with cm-kernel
# TARGET_PREBUILT_KERNEL = device/acer/liquid/kernel/prebuilt-zImage

# Set ro.modversion
ifdef CYANOGEN_NIGHTLY
    PRODUCT_PROPERTY_OVERRIDES += \
        ro.modversion=CyanogenMod-7-\$(shell date +%m%d%Y)-NIGHTLY-Liquid
else
    ifdef CYANOGEN_RELEASE
        PRODUCT_PROPERTY_OVERRIDES += \
            ro.modversion=CyanogenMod-7.1.0-RC1-Liquid
    else
        PRODUCT_PROPERTY_OVERRIDES += \
            ro.modversion=CyanogenMod-7.1.0-RC1-Liquid-KANG
    endif
endif

# Copy HDPI prebuilt files
PRODUCT_COPY_FILES +=  \
    vendor/cyanogen/prebuilt/hdpi/media/bootanimation.zip:system/media/bootanimation.zip
EOF

