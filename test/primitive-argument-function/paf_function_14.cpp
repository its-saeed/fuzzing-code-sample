#include <primitive-argument-function.h>
#include <fuzzer/FuzzedDataProvider.h>

#include <cstdint>
#include <cstddef>
#include <cstdio>

using namespace primitive_argument_functions;

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    FuzzedDataProvider fdp(data, size);

    double input = fdp.ConsumeFloatingPoint<double>();
    int a = fdp.ConsumeIntegral<int>();
    char b = fdp.ConsumeIntegral<char>();     
    size_t s = fdp.ConsumeIntegral<size_t>();
    uint16_t u = fdp.ConsumeIntegral<uint16_t>();

	paf_function_14(input, a, b, s, u);
	return 0;
}	