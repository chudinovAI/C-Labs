#include <iostream>
#include "number_1.h"
void point_d_lab3(){
    int x;
    std::cout << "Введите x: ";
    std::cin >> x;
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        if (i % 10 != 5)
        {
            count++;
        }
    }
    std::cout << count << std::endl;
}
