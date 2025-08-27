#include "pointer-based-functions.h"
#include <fuzzer/FuzzedDataProvider.h>

#include <cstdint>
#include <cstddef>
#include <cstdio>

using namespace pointer_based_functions;

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
    FuzzedDataProvider fdp(data, size);
    
    size_t input = fdp.ConsumeIntegral<size_t>();
    //pbf_function_10(&input);
    return 0;
}	
