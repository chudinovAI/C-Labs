#include <iostream>
#include "number_1.h"
#include "cmath"
void point_b_lab2(){
    int x;
    std::cout << "b) Введите x: ";
    std::cin >> x;
    if (x < -2)
    {
        const int f = 5 * abs(x);
        std::cout << "f(x) = " << f << std::endl;
    }
    else if (x >= -2 && x <= 2)
    {
        const int f = 9*x;
        std::cout << "f(x) = " << f << std::endl;
    }
    else
    {
        const double f = cos(x); // x - rad or degrees?
        std::cout << "f(x) = " << f << std::endl;
    }
}
