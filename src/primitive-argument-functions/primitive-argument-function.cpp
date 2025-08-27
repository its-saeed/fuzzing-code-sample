#include "primitive-argument-function.h"

namespace primitive_argument_functions
{

template <typename T>
void store(T index, int value)
{
	int buffer[10];
	buffer[index] = value;
}

void paf_function_1(int input)
{
	store(input, 100);
}

void paf_function_2(short int input)
{
	store(input, 100);
}

void paf_function_3(long int input)
{
	store(input, 100);
}

void paf_function_4(long long int input)
{
	store(input, 100);
}

void paf_function_5(unsigned int input)
{
	store(input, 100);
}

void paf_function_6(uint8_t input)
{
	store(input, 100);
}

void paf_function_7(uint16_t input)
{
	store(input, 100);
}

void paf_function_8(uint32_t input)
{
	store(input, 100);
}

void paf_function_9(uint64_t input)
{
	store(input, 100);
}

void paf_function_10(size_t input)
{
	store(input, 100);
}

void paf_function_11(time_t input)
{
	store(input, 100);
}

void paf_function_12(float input)
{
	store((int)input, 100);
}

void paf_function_13(double input)
{
	store((int)input, 100);
}

void paf_function_14(double input, int a, char b, size_t s, uint64_t u)
{
	store((int)input + a + b + s + u, 100);
}

}
