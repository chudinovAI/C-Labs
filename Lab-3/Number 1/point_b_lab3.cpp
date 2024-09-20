#include <iostream>
#include "number_1.h"
void point_b_lab3(){
    int count = 0;
    for (int i = 1000; i < 10000; i++)
    {
        if (i % 3 != 0 && i % 5 != 0)
        {
            count++;
        }
    }
    std::cout << count << std::endl;
}