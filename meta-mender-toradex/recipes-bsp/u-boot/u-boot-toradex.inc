FILESEXTRAPATHS_prepend_toradex := "${THISDIR}/patches:"

#SRC_URI_append_toradex = " file://0001-BBB-Use-Mender-boot-code-for-selecting-boot-device-a.patch"

BOOTENV_SIZE_toradex ?= "0x20000"
