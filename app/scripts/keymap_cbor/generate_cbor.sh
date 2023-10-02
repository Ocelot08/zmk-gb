zcbor code \
    --cddl ./keymap.cddl \
    --encode \
    --decode \
    -t keymap layer key \
    --time-header \
    --git-sha-header \
    --default-max-qty 99 \
    --output-c ../../src/keymap/keymap_cbor.c \
    --output-h ../../include/zmk/keymap/keymap_cbor.h \

