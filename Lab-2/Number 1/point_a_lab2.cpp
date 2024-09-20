#include <iostream>
#include "number_1.h"
#include "cmath"
void point_a_lab2(){
    int x;
    std::cout << "a) Введите x: ";
    std::cin >> x;
    if (x < 0)
    {
        const int f = 5*x*x + 3*x;
        std::cout << "f(x) = " << f << std::endl;
    }
    else if (x >= 0 && x <= 5)
    {
        const double f = 6*sqrt(x);
        std::cout << "f(x) = " << f << std::endl;
    }
    else
    {
        const int f = -x + 107;
        std::cout << "f(x) = " << f << std::endl;
    }
}
