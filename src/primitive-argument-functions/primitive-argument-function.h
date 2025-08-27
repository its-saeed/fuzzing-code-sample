
#pragma once

#include <cstddef>
#include <cstdint>
#include <ctime>

namespace primitive_argument_functions
{

void paf_function_1(int input);
void paf_function_2(short int input);
void paf_function_3(long int input);
void paf_function_4(long long int input);
void paf_function_5(unsigned int input);
void paf_function_6(uint8_t input);
void paf_function_7(uint16_t input);
void paf_function_8(uint32_t input);
void paf_function_9(uint64_t input);
void paf_function_10(size_t input);
void paf_function_11(time_t input);
void paf_function_12(float input);
void paf_function_13(double input);
void paf_function_14(double input, int a, char b, size_t s, uint64_t u);

}
