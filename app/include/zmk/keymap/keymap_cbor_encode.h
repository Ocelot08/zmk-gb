/*
 * Copyright (c) 2023 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 *
 * Generated using zcbor version 0.7.0-0.7.0
 * https://github.com/NordicSemiconductor/zcbor
 * at: 2023-10-02 18:11:13
 * Generated with a --default-max-qty of 256
 */

#ifndef KEYMAP_CBOR_ENCODE_H__
#define KEYMAP_CBOR_ENCODE_H__

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include "zmk/keymap/keymap_cbor_types.h"

#ifdef __cplusplus
extern "C" {
#endif

#if DEFAULT_MAX_QTY != 256
#error "The type file was generated with a different default_max_qty than this file"
#endif


int cbor_encode_keymap(
		uint8_t *payload, size_t payload_len,
		const struct keymap *input,
		size_t *payload_len_out);


int cbor_encode_layer(
		uint8_t *payload, size_t payload_len,
		const struct layer *input,
		size_t *payload_len_out);


int cbor_encode_key(
		uint8_t *payload, size_t payload_len,
		const struct key *input,
		size_t *payload_len_out);


#ifdef __cplusplus
}
#endif

#endif /* KEYMAP_CBOR_ENCODE_H__ */
