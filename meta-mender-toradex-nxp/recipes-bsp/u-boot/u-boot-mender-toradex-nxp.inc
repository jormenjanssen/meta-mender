FILESEXTRAPATHS_prepend_mx6 := "${THISDIR}/files:"
BOOTENV_SIZE_mx6 ?= "0x2000"
SRC_URI_append_mx6 = " file://0001-configs-colibri_imx6-adjust-for-Mender-requirements.patch"
