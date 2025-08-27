#include "object-input-functions.h"

namespace object_input_functions
{

template <typename T>
void store(T index, int value)
{
	int buffer[10];
	buffer[index] = value;
}


void oif_function_1(Type1 input)
{
    store(input.get_i(), 10);
}

void oif_function_2(Type1* input)
{
    store(input->get_i(), 10);
}

void oif_function_3(Type1 input)
{
    store(input->j, 10);
}


}