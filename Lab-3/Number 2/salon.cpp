#include <iostream>
#include "number_2.h"
void salon()
{
    int work_time, during_time;
    std::cout << "Введите рабочий день мастера(в часах): ";
    std::cin >> work_time;
    std::cout << "Введите продолжительность обслуживания клиента(в минутах): ";
    std::cin >> during_time;
    const int minutes = work_time*60;
    std::cout << minutes/during_time;

}