/*
 * Generated using zcbor version 0.7.0-0.7.0
 * https://github.com/NordicSemiconductor/zcbor
 * at: 2023-10-02 17:22:57
 * Generated with a --default-max-qty of 99
 */

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include <zcbor_encode.h>
#include <zmk/keymap/keymap_cbor_encode.h>

#if DEFAULT_MAX_QTY != 99
#error "The type file was generated with a different default_max_qty than this file"
#endif

static bool encode_key(zcbor_state_t *state, const struct key *input);
static bool encode_layer(zcbor_state_t *state, const struct layer *input);
static bool encode_keymap(zcbor_state_t *state, const struct keymap *input);


static bool encode_key(
		zcbor_state_t *state, const struct key *input)
{
	zcbor_print("%s\r\n", __func__);
	struct zcbor_string tmp_str;

	bool tmp_result = (((zcbor_map_start_encode(state, 2) && (((((zcbor_tstr_encode(state, ((tmp_str.value = (uint8_t *)"supported_behavior", tmp_str.len = sizeof("supported_behavior") - 1, &tmp_str)))))
	&& (zcbor_tstr_encode(state, (&(*input)._key_supported_behavior))))
	&& (((zcbor_tstr_encode(state, ((tmp_str.value = (uint8_t *)"parameters", tmp_str.len = sizeof("parameters") - 1, &tmp_str)))))
	&& (zcbor_list_start_encode(state, 99) && ((zcbor_multi_encode_minmax(1, 99, &(*input)._key_parameters_tstr_count, (zcbor_encoder_t *)zcbor_tstr_encode, state, (&(*input)._key_parameters_tstr), sizeof(struct zcbor_string))) || (zcbor_list_map_end_force_encode(state), false)) && zcbor_list_end_encode(state, 99)))) || (zcbor_list_map_end_force_encode(state), false)) && zcbor_map_end_encode(state, 2))));

	if (!tmp_result)
		zcbor_trace();

	return tmp_result;
}

static bool encode_layer(
		zcbor_state_t *state, const struct layer *input)
{
	zcbor_print("%s\r\n", __func__);
	struct zcbor_string tmp_str;

	bool tmp_result = (((zcbor_map_start_encode(state, 2) && (((((zcbor_tstr_encode(state, ((tmp_str.value = (uint8_t *)"name", tmp_str.len = sizeof("name") - 1, &tmp_str)))))
	&& (zcbor_tstr_encode(state, (&(*input)._layer_name))))
	&& (((zcbor_tstr_encode(state, ((tmp_str.value = (uint8_t *)"keys", tmp_str.len = sizeof("keys") - 1, &tmp_str)))))
	&& (zcbor_list_start_encode(state, 99) && ((zcbor_multi_encode_minmax(1, 99, &(*input)._layer_keys__key_count, (zcbor_encoder_t *)encode_key, state, (&(*input)._layer_keys__key), sizeof(struct key))) || (zcbor_list_map_end_force_encode(state), false)) && zcbor_list_end_encode(state, 99)))) || (zcbor_list_map_end_force_encode(state), false)) && zcbor_map_end_encode(state, 2))));

	if (!tmp_result)
		zcbor_trace();

	return tmp_result;
}

static bool encode_keymap(
		zcbor_state_t *state, const struct keymap *input)
{
	zcbor_print("%s\r\n", __func__);
	struct zcbor_string tmp_str;

	bool tmp_result = (((zcbor_map_start_encode(state, 3) && (((((zcbor_tstr_encode(state, ((tmp_str.value = (uint8_t *)"version", tmp_str.len = sizeof("version") - 1, &tmp_str)))))
	&& (zcbor_tstr_encode(state, (&(*input)._keymap_version))))
	&& (((zcbor_tstr_encode(state, ((tmp_str.value = (uint8_t *)"layers", tmp_str.len = sizeof("layers") - 1, &tmp_str)))))
	&& (zcbor_list_start_encode(state, 99) && ((zcbor_multi_encode_minmax(1, 99, &(*input)._keymap_layers__layer_count, (zcbor_encoder_t *)encode_layer, state, (&(*input)._keymap_layers__layer), sizeof(struct layer))) || (zcbor_list_map_end_force_encode(state), false)) && zcbor_list_end_encode(state, 99)))
	&& (((zcbor_tstr_encode(state, ((tmp_str.value = (uint8_t *)"supported_behaviors", tmp_str.len = sizeof("supported_behaviors") - 1, &tmp_str)))))
	&& (zcbor_list_start_encode(state, 99) && ((zcbor_multi_encode_minmax(1, 99, &(*input)._keymap_supported_behaviors_tstr_count, (zcbor_encoder_t *)zcbor_tstr_encode, state, (&(*input)._keymap_supported_behaviors_tstr), sizeof(struct zcbor_string))) || (zcbor_list_map_end_force_encode(state), false)) && zcbor_list_end_encode(state, 99)))) || (zcbor_list_map_end_force_encode(state), false)) && zcbor_map_end_encode(state, 3))));

	if (!tmp_result)
		zcbor_trace();

	return tmp_result;
}



int cbor_encode_keymap(
		uint8_t *payload, size_t payload_len,
		const struct keymap *input,
		size_t *payload_len_out)
{
	zcbor_state_t states[8];

	zcbor_new_state(states, sizeof(states) / sizeof(zcbor_state_t), payload, payload_len, 1);

	bool ret = encode_keymap(states, input);

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


int cbor_encode_layer(
		uint8_t *payload, size_t payload_len,
		const struct layer *input,
		size_t *payload_len_out)
{
	zcbor_state_t states[6];

	zcbor_new_state(states, sizeof(states) / sizeof(zcbor_state_t), payload, payload_len, 1);

	bool ret = encode_layer(states, input);

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


int cbor_encode_key(
		uint8_t *payload, size_t payload_len,
		const struct key *input,
		size_t *payload_len_out)
{
	zcbor_state_t states[4];

	zcbor_new_state(states, sizeof(states) / sizeof(zcbor_state_t), payload, payload_len, 1);

	bool ret = encode_key(states, input);

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
