#
# Copyright (c) 2023 The ZMK Contributors
#
# SPDX-License-Identifier: MIT
#

zcbor code \
    --cddl ./keymap.cddl \
    --encode \
    --decode \
    -t keymap layer key \
    --time-header \
    --git-sha-header \
    --default-max-qty 256 \
    --output-c ../../src/keymap/keymap_cbor.c \
    --output-h ../../include/zmk/keymap/keymap_cbor.h \
    --include-prefix zmk/keymap \
    --file-header "

 Copyright (c) 2023 The ZMK Contributors

SPDX-License-Identifier: MIT

 "
