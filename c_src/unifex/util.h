#pragma once

#include <erl_nif.h>
#include "unifex.h"

#define UNIFEX_UTIL_UNUSED(x) (void)(x)

// args parse helpers
ERL_NIF_TERM unifex_util_raise_args_error(ErlNifEnv* env, const char* field, const char *description);

// term manipulation helpers
ERL_NIF_TERM unifex_util_make_and_release_resource(ErlNifEnv* env, void* resource);
int unifex_util_payload_from_term(ErlNifEnv* env, ERL_NIF_TERM binary_term, UnifexPayload* payload);
UNIFEX_TERM unifex_payload_to_term(UnifexEnv* env, UnifexPayload * payload);
