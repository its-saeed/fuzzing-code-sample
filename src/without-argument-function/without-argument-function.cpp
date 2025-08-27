#include "without-argument-function.h"

namespace without_argument_functions
{

int store(int index, int value)
{
	int buffer[1];
    buffer[index] = value;
	return 0;
}

void waf_function_1()
{
	store(10000, 200);
}

}
