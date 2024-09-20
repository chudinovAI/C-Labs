#include <iostream>
#include "number_2.h"
#include "cmath"
void number_2(){
    int x,y,z;
    std::cout << "Номер 2" << std::endl;

    std::cout << "a) Введите высоту, длину и ширину прямоугольного параллелепипеда: ";
    std::cin >> x >> y >> z;
    std::cout << "Объем равен: " << x*y*z <<std::endl;
    std::cout << "Площадь боковой поверхности: " << x*(y+z) <<std::endl;

    std::cout << "б) Введите площадь круга: ";
    std::cin >> x;
    std::cout << "Длина окружности равна: " << sqrt(x*4*M_PI) <<std::endl;

    std::cout << "в) Введите 3 стороны треугольника: ";
    std::cin >> x >> y >> z;
    const double p = (x + y + z) / 2.0;
    std::cout << sqrt(p*(p-x)*(p-y)*(p-z)) << std::endl;

    std::cout << "г) Введите две стороны параллелограмма: ";
    std::cin >> x >> y;
    std::cout << "Площадь: " << x*y*sin(M_PI/6) << std::endl;
    std::cout << "Периметр: " << x+y+x+y << std::endl;
}
