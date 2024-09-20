#include <iostream>
#include "number_2.h"
void bacteria(){
    int start, end, count = 0;
    std::cout << "Введите количество бактерий в начальный момент: ";
    std::cin >> start;
    std::cout << "Введите интересующее количество бактерий: ";
    std::cin >> end;
    if (start < 0 || end < 0 || start > end)
    {
        std::cout << "Введите коректное количество бактерий";
        return;
    }
    while (start < end)
    {
        start *= 2;
        count++;
    }
    std::cout << count;
}