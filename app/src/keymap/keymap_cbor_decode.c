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

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include "zcbor_decode.h"
#include "zmk/keymap/keymap_cbor_decode.h"

#if DEFAULT_MAX_QTY != 256
#error "The type file was generated with a different default_max_qty than this file"
#endif

static bool decode_key(zcbor_state_t *state, struct key *result);
static bool decode_layer(zcbor_state_t *state, struct layer *result);
static bool decode_keymap(zcbor_state_t *state, struct keymap *result);


static bool decode_key(
		zcbor_state_t *state, struct key *result)
{
	zcbor_print("%s\r\n", __func__);
	struct zcbor_string tmp_str;

	bool tmp_result = (((zcbor_map_start_decode(state) && (((((zcbor_tstr_expect(state, ((tmp_str.value = (uint8_t *)"supported_behavior", tmp_str.len = sizeof("supported_behavior") - 1, &tmp_str)))))
	&& (zcbor_tstr_decode(state, (&(*result)._key_supported_behavior))))
	&& (((zcbor_tstr_expect(state, ((tmp_str.value = (uint8_t *)"parameters", tmp_str.len = sizeof("parameters") - 1, &tmp_str)))))
	&& (zcbor_list_start_decode(state) && ((zcbor_multi_decode(1, 256, &(*result)._key_parameters_tstr_count, (zcbor_decoder_t *)zcbor_tstr_decode, state, (&(*result)._key_parameters_tstr), sizeof(struct zcbor_string))) || (zcbor_list_map_end_force_decode(state), false)) && zcbor_list_end_decode(state)))) || (zcbor_list_map_end_force_decode(state), false)) && zcbor_map_end_decode(state))));

	if (!tmp_result)
		zcbor_trace();

	return tmp_result;
}

static bool decode_layer(
		zcbor_state_t *state, struct layer *result)
{
	zcbor_print("%s\r\n", __func__);
	struct zcbor_string tmp_str;

	bool tmp_result = (((zcbor_map_start_decode(state) && (((((zcbor_tstr_expect(state, ((tmp_str.value = (uint8_t *)"name", tmp_str.len = sizeof("name") - 1, &tmp_str)))))
	&& (zcbor_tstr_decode(state, (&(*result)._layer_name))))
	&& (((zcbor_tstr_expect(state, ((tmp_str.value = (uint8_t *)"keys", tmp_str.len = sizeof("keys") - 1, &tmp_str)))))
	&& (zcbor_list_start_decode(state) && ((zcbor_multi_decode(1, 256, &(*result)._layer_keys__key_count, (zcbor_decoder_t *)decode_key, state, (&(*result)._layer_keys__key), sizeof(struct key))) || (zcbor_list_map_end_force_decode(state), false)) && zcbor_list_end_decode(state)))) || (zcbor_list_map_end_force_decode(state), false)) && zcbor_map_end_decode(state))));

	if (!tmp_result)
		zcbor_trace();

	return tmp_result;
}

static bool decode_keymap(
		zcbor_state_t *state, struct keymap *result)
{
	zcbor_print("%s\r\n", __func__);
	struct zcbor_string tmp_str;

	bool tmp_result = (((zcbor_map_start_decode(state) && (((((zcbor_tstr_expect(state, ((tmp_str.value = (uint8_t *)"version", tmp_str.len = sizeof("version") - 1, &tmp_str)))))
	&& (zcbor_tstr_decode(state, (&(*result)._keymap_version))))
	&& (((zcbor_tstr_expect(state, ((tmp_str.value = (uint8_t *)"layers", tmp_str.len = sizeof("layers") - 1, &tmp_str)))))
	&& (zcbor_list_start_decode(state) && ((zcbor_multi_decode(1, 256, &(*result)._keymap_layers__layer_count, (zcbor_decoder_t *)decode_layer, state, (&(*result)._keymap_layers__layer), sizeof(struct layer))) || (zcbor_list_map_end_force_decode(state), false)) && zcbor_list_end_decode(state)))
	&& (((zcbor_tstr_expect(state, ((tmp_str.value = (uint8_t *)"supported_behaviors", tmp_str.len = sizeof("supported_behaviors") - 1, &tmp_str)))))
	&& (zcbor_list_start_decode(state) && ((zcbor_multi_decode(1, 256, &(*result)._keymap_supported_behaviors_tstr_count, (zcbor_decoder_t *)zcbor_tstr_decode, state, (&(*result)._keymap_supported_behaviors_tstr), sizeof(struct zcbor_string))) || (zcbor_list_map_end_force_decode(state), false)) && zcbor_list_end_decode(state)))) || (zcbor_list_map_end_force_decode(state), false)) && zcbor_map_end_decode(state))));

	if (!tmp_result)
		zcbor_trace();

	return tmp_result;
}



int cbor_decode_keymap(
		const uint8_t *payload, size_t payload_len,
		struct keymap *result,
		size_t *payload_len_out)
{
	zcbor_state_t states[8];

	zcbor_new_state(states, sizeof(states) / sizeof(zcbor_state_t), payload, payload_len, 1);

	bool ret = decode_keymap(states, result);

	if (ret && (payload_len_out != NULL)) {
		*payload_len_out = MIN(payload_len,
				(size_t)states[0].payload - (size_t)payload);
	}

	if (!ret) {
		int err = zcbor_pop_error(states);

		zcbor_print("Return error: %d\r\n", err);
		return (err == ZCBOR_SUCCESS) ? ZCBOR_ERR_UNKNOWN : err;
	}
	return ZCBOR_SUCCESS;
}


int cbor_decode_layer(
		const uint8_t *payload, size_t payload_len,
		struct layer *result,
		size_t *payload_len_out)
{
	zcbor_state_t states[6];

	zcbor_new_state(states, sizeof(states) / sizeof(zcbor_state_t), payload, payload_len, 1);

	bool ret = decode_layer(states, result);

	if (ret && (payload_len_out != NULL)) {
		*payload_len_out = MIN(payload_len,
				(size_t)states[0].payload - (size_t)payload);
	}

	if (!ret) {
		int err = zcbor_pop_error(states);

		zcbor_print("Return error: %d\r\n", err);
		return (err == ZCBOR_SUCCESS) ? ZCBOR_ERR_UNKNOWN : err;
	}
	return ZCBOR_SUCCESS;
}


int cbor_decode_key(
		const uint8_t *payload, size_t payload_len,
		struct key *result,
		size_t *payload_len_out)
{
	zcbor_state_t states[4];

	zcbor_new_state(states, sizeof(states) / sizeof(zcbor_state_t), payload, payload_len, 1);

	bool ret = decode_key(states, result);

	if (ret && (payload_len_out != NULL)) {
		*payload_len_out = MIN(payload_len,
				(size_t)states[0].payload - (size_t)payload);
	}

	if (!ret) {
		int err = zcbor_pop_error(states);

		zcbor_print("Return error: %d\r\n", err);
		return (err == ZCBOR_SUCCESS) ? ZCBOR_ERR_UNKNOWN : err;
	}
	return ZCBOR_SUCCESS;
}
