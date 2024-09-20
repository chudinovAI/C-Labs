#include <iostream>
#include "number_1.h"
void point_a_lab3(){
    int count = 0;
    for (int i = 100; i < 1000; i++)
    {
        if (i % 2 == 0 && i % 7 == 0)
        {
            count++;
        }
    }
    std::cout << count << std::endl;
}
