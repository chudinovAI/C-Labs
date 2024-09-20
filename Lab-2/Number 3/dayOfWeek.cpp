#include <iostream>
#include "number_3.h"
void dayOfWeek(){
    int day;

    std::cout << "2) Введите номер дня недели (1 - Понедельник, 7 - Воскресенье): ";
    std::cin >> day;
    switch (day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            std::cout << "Это рабочий день!" << std::endl;
            break;
        case 6:
        case 7:
            std::cout << "Это выходной день!" << std::endl;
            break;
        default:
            std::cout << "Ошибка: введите число от 1 до 7" << std::endl;
    }
}
