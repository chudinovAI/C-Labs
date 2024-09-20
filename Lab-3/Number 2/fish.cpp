#include <iostream>
#include "number_2.h"
void fish()
{
    double stock;
    const double fishIncrease = 1.15;
    double year_plan;
    std::cout << "Введите запас рыбы в пруду(в тоннах): ";
    std::cin >> stock;
    std::cout << "Введите ежегодный план отлова(в тоннах): ";
    std::cin >> year_plan;

    if (year_plan <= 0 || stock <= 0)
    {
        std::cout << "Объем рыбы и план отлова должны быть положительными числами" << std::endl;
        return;
    }
    int count = 0;
    while (stock > 0)
    {
        stock *= fishIncrease;
        stock -= year_plan;
        count++;
        if (stock <= 0)
        {
            std::cout << count << std::endl;
            return;
        }
    }
}