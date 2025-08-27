#include "pointer-based-functions.h"

namespace pointer_based_functions
{

template <typename T>
void store(T index, int value)
{
	int buffer[10];
	buffer[index] = value;
}

void pbf_function_1(int* input)
{
    store(*input, 100);
}

void pbf_function_2(short int* input)
{
    store(*input, 100);
}

void pbf_function_3(long int* input)
{
    store(*input, 100);
}

void pbf_function_4(long long int* input)
{
    store(*input, 100);
}

void pbf_function_5(unsigned int* input)
{
    store(*input, 100);
}

void pbf_function_6(uint8_t* input)
{
    store(*input, 100);
}

void pbf_function_7(uint16_t* input)
{
    store(*input, 100);
}

void pbf_function_8(uint32_t* input)
{
    store(*input, 100);
}

void pbf_function_9(uint64_t* input)
{
    store(*input, 100);
}

void pbf_function_11(size_t* input)
{
    store(*input, 100);
}

void pbf_function_12(time_t* input)
{
    store(*input, 100);
}

void pbf_function_13(float* input)
{
    store((int)*input, 100);
}

void pbf_function_14(double* input)
{
    store((int)*input, 100);
}

void pbf_function_15(double* input, int* a, char* b, size_t* s, uint64_t* u)
{
	store((int)*input + *a + *b + *s + *u, 100);
}

}