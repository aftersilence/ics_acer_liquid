# Copy kernel modules
PRODUCT_COPY_FILES += \
device/acer/liquid/modules/fs/jbd/jbd.ko:system/lib/modules/jbd.ko \
device/acer/liquid/modules/fs/cifs/cifs.ko:system/lib/modules/cifs.ko \
device/acer/liquid/modules/fs/jbd2/jbd2.ko:system/lib/modules/jbd2.ko \
device/acer/liquid/modules/fs/ext3/ext3.ko:system/lib/modules/ext3.ko \
device/acer/liquid/modules/fs/nilfs/nilfs2.ko:system/lib/modules/nilfs2.ko \
device/acer/liquid/modules/fs/ext4/ext4.ko:system/lib/modules/ext4.ko \
device/acer/liquid/modules/net/netfilter/xt_TCPMSS.ko:system/lib/modules/xt_TCPMSS.ko \
device/acer/liquid/modules/net/netfilter/xt_hashlimit.ko:system/lib/modules/xt_hashlimit.ko \
device/acer/liquid/modules/net/ipv4/tunnel4.ko:system/lib/modules/tunnel4.ko \
device/acer/liquid/modules/net/ipv6/xfrm6_mode_transport.ko:system/lib/modules/xfrm6_mode_transport.ko \
device/acer/liquid/modules/net/ipv6/mip6.ko:system/lib/modules/mip6.ko \
device/acer/liquid/modules/net/ipv6/ipv6.ko:system/lib/modules/ipv6.ko \
device/acer/liquid/modules/net/ipv6/xfrm6_mode_ro.ko:system/lib/modules/xfrm6_mode_ro.ko \
device/acer/liquid/modules/net/ipv6/ip6_tunnel.ko:system/lib/modules/ip6_tunnel.ko \
device/acer/liquid/modules/net/ipv6/xfrm6_mode_tunnel.ko:system/lib/modules/xfrm6_mode_tunnel.ko \
device/acer/liquid/modules/net/ipv6/sit.ko:system/lib/modules/sit.ko \
device/acer/liquid/modules/net/ipv6/netfilter/ip6_tables.ko:system/lib/modules/ip6_tables.ko \
device/acer/liquid/modules/net/ipv6/xfrm6_mode_beet.ko:system/lib/modules/xfrm6_mode_beet.ko \
device/acer/liquid/modules/net/ipv6/tunnel6.ko:system/lib/modules/tunnel6.ko \
device/acer/liquid/modules/drivers/net/tun.ko:system/lib/modules/tun.ko \
device/acer/liquid/modules/drivers/staging/ramzswap/ramzswap.ko:system/lib/modules/ramzswap.ko \
device/acer/liquid/modules/bcm4329.ko:system/lib/modules/bcm4329.ko
