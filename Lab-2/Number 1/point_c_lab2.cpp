#include <iostream>
#include "number_1.h"
#include "cmath"
void point_c_lab2(){
    int x;
    std::cout << "c) Введите x: ";
    std::cin >> x;
    if (x < 0)
    {
        const double f = pow(sin(x), 2) - 3*pow(cos(x), 2); // x - rad or degrees?
        std::cout << "f(x) = " << f << std::endl;
    }
    else if (x >= 0 && x <= 2)
    {
        const double f = pow(3*x + 2, 2);
        std::cout << "f(x) = " << f << std::endl;
    }
    else
    {
        const double f = pow(x, 2) - pow(x, 3); // x - rad or degrees?
        std::cout << "f(x) = " << f << std::endl;
    }
}