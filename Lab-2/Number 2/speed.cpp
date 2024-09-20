#include <iostream>
#include "number_2.h"
void speed(){
    const double speed = 40;
    double time;
    double distance1, distance2, distance3;

    std::cout << "2) Введите время (в часах), которое теплоход продержится на плаву: ";
    std::cin >> time;
    std::cout << "Введите расстояние до первого судна (в морских милях): ";
    std::cin >> distance1;
    std::cout << "Введите расстояние до второго судна (в морских милях): ";
    std::cin >> distance2;
    std::cout << "Введите расстояние до третьего судна (в морских милях): ";
    std::cin >> distance3;

    const double time1 = distance1/speed;
    const double time2 = distance2/speed;
    const double time3 = distance3/speed;

    int count = 0;
    if (time1 <= time)
    {
        count++;
    }
    if (time2 <= time)
    {
        count++;
    }
    if (time3 <= time)
    {
        count++;
    }

    if (count >= 2) {
        std::cout << "Пассажиры будут спасены!" << std::endl;
    } else {
        std::cout << "Пассажиры не будут спасены." << std::endl;
    }
}