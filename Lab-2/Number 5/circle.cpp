#include <iostream>
#include <cmath>
#include "number_5.h"
void circle(){
    int radius;
    int part;
    int degree;
    std::cout << "Введите радиус шара: ";
    std::cin >> radius;
    std::cout << "Введите сторону ромбообразного отверстия: ";
    std::cin >> part;
    std::cout << "Введите острый угол в градусах: ";
    std::cin >> degree;

    const double radiant = degree*M_PI/180;
    const double diagonal1 = part*sqrt(2 + 2*cos(radiant));
    const double diagonal2 = part*sqrt(2 - 2*cos(radiant));
    const double height = diagonal1*diagonal2/(2*part);

    if (2*radius <= height)
    {
        std::cout << "Шар может пройти через ромбообразное отверстие" << std::endl;
    }
    else
    {
        std::cout << "Шар не может пройти через ромбообразное отверстие" << std::endl;
    }
}
