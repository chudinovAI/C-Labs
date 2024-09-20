#include <iostream>
#include "number_1.h"
void point_c_lab3(){
    int count = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (i % 13 == 0 && i % 2 != 0)
        {
            count++;
        }
    }
    std::cout << count << std::endl;
}
