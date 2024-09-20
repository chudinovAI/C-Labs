#include <iostream>
#include "number_3.h"
void circle_coordinates()
{
    int radius;
    std:: cout << "Введите значение радиуса: ";
    std::cin >> radius;
    if (radius <= 0)
    {
        std::cout << "Радиус должен быть положителным числом";
        return;
    }
    int count = 0;
    for (int x = -radius; x <= radius; x++)
    {
        for (int y = -radius; y <= radius; y++)
        {
            if (x * x + y * y <= radius * radius)
            {
                count ++;
            }
        }
    }
    std::cout << count;
}