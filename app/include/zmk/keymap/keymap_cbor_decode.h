/*
 * Generated using zcbor version 0.7.0-0.7.0
 * https://github.com/NordicSemiconductor/zcbor
 * at: 2023-10-02 17:22:57
 * Generated with a --default-max-qty of 99
 */

#ifndef KEYMAP_CBOR_DECODE_H__
#define KEYMAP_CBOR_DECODE_H__

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include <zmk/keymap/keymap_cbor_types.h>

#ifdef __cplusplus
extern "C" {
#endif

#if DEFAULT_MAX_QTY != 99
#error "The type file was generated with a different default_max_qty than this file"
#endif


int cbor_decode_keymap(
		const uint8_t *payload, size_t payload_len,
		struct keymap *result,
		size_t *payload_len_out);


int cbor_decode_layer(
		const uint8_t *payload, size_t payload_len,
		struct layer *result,
		size_t *payload_len_out);


int cbor_decode_key(
		const uint8_t *payload, size_t payload_len,
		struct key *result,
		size_t *payload_len_out);


#ifdef __cplusplus
}
#endif

#endif /* KEYMAP_CBOR_DECODE_H__ */
