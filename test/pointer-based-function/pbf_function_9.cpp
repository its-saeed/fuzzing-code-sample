#include <primitive-argument-function.h>
#include <fuzzer/FuzzedDataProvider.h>

#include <cstdint>
#include <cstddef>
#include <cstdio>

using namespace primitive_argument_functions;

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    FuzzedDataProvider fdp(data, size);

    uint64_t input = fdp.ConsumeIntegral<uint64_t>();

	paf_function_9(input);
	return 0;
}	