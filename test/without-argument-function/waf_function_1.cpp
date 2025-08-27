#include "without-argument-function.h"

#include <cstdint>
#include <cstddef>
#include <cstdio>

using namespace without_argument_functions;

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
	waf_function_1();
	return 0;
}	
