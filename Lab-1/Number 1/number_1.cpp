#include <iostream>
#include "number_1.h"
#include "cmath"
void number_1(){
    std::cout << "Номер 1" << std::endl;

    int x,y;
    std::cout << "Введите x, y: ";
    std::cin >> x >> y;

    std::cout << "а) " << (1 + std::abs(x*y))/(std::abs(x) + std::abs(y)) << std::endl;
    std::cout << "б) " << (x+ y)/sqrt(x*x + y*y) << std::endl;
    std::cout << "в) " << (x*y)/(std::abs(x) + std::abs(y)) << std::endl;
    std::cout << "г) " << sqrt(x*x + 1)/sqrt(std::abs(x) + std::abs(y)) << std::endl;
}