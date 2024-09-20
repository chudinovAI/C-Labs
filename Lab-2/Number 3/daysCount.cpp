#include <iostream>
#include "number_3.h"
void daysCount(){
    int month;

    std::cout << "3) Введите номер месяца (1 - Январь, 12 - Декабрь): ";
    std::cin >> month;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            std::cout << "31 день." << std::endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            std::cout << "30 дней." << std::endl;
            break;
        case 2:
            std::cout << "28 или 29 дней (в зависимости от високосного года." << std::endl;
            break;
        default:
            std::cout << "Ошибка: введите число от 1 до 12" << std::endl;
    }
}