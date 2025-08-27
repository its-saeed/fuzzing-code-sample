#pragma once

#include <cstddef>
#include <cstdint>
#include <ctime>

namespace object_input_functions
{

class Type1
{
public:
    Type1(int i)
    : i(i)
    {
    }

    int get_i()
    {
        return i;
    }

    int j;

private:
    int i;
};

void oif_function_1(Type1 input);
void oif_function_2(Type1* input);
void oif_function_3(Type1* input);

}