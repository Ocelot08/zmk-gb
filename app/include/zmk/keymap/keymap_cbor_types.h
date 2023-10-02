/*
 * Generated using zcbor version 0.7.0-0.7.0
 * https://github.com/NordicSemiconductor/zcbor
 * at: 2023-10-02 18:01:25
 * Generated with a --default-max-qty of 256
 */

#ifndef KEYMAP_CBOR_TYPES_H__
#define KEYMAP_CBOR_TYPES_H__

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <zcbor_common.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Which value for --default-max-qty this file was created with.
 *
 *  The define is used in the other generated file to do a build-time
 *  compatibility check.
 *
 *  See `zcbor --help` for more information about --default-max-qty
 */
#define DEFAULT_MAX_QTY 256

struct key {
	struct zcbor_string _key_supported_behavior;
	struct zcbor_string _key_parameters_tstr[256];
	size_t _key_parameters_tstr_count;
};

struct layer {
	struct zcbor_string _layer_name;
	struct key _layer_keys__key[256];
	size_t _layer_keys__key_count;
};

struct keymap {
	struct zcbor_string _keymap_version;
	struct layer _keymap_layers__layer[256];
	size_t _keymap_layers__layer_count;
	struct zcbor_string _keymap_supported_behaviors_tstr[256];
	size_t _keymap_supported_behaviors_tstr_count;
};

#ifdef __cplusplus
}
#endif

#endif /* KEYMAP_CBOR_TYPES_H__ */
