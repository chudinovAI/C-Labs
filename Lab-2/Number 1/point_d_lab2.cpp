#include <iostream>
#include "number_1.h"
#include "cmath"
void point_d_lab2(){
    int x;
    std::cout << "d) Введите x: ";
    std::cin >> x;
    if (x < -2)
    {
        const int f = abs(2*x - 2);
        std::cout << "f(x) = " << f << std::endl;
    }
    else if (x >= -2 && x <= 5)
    {
        const double f = sin(x); //
        std::cout << "f(x) = " << f << std::endl;
    }
    else
    {
        const double f = pow(x, 8);
        std::cout << "f(x) = " << f << std::endl;
    }
}