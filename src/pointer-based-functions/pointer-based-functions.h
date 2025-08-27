#pragma once

#include <cstddef>
#include <cstdint>
#include <ctime>

namespace pointer_based_functions
{

void pbf_function_1(int* input);
void pbf_function_2(short int* input);
void pbf_function_3(long int* input);
void pbf_function_4(long long int* input);
void pbf_function_5(unsigned int* input);
void pbf_function_6(uint8_t* input);
void pbf_function_7(uint16_t* input);
void pbf_function_8(uint32_t* input);
void pbf_function_9(uint64_t* input);
void pbf_function_11(size_t* input);
void pbf_function_12(time_t* input);
void pbf_function_13(float* input);
void pbf_function_14(double* input);
void pbf_function_15(double* input, int* a, char* b, size_t* s, uint64_t* u);

}