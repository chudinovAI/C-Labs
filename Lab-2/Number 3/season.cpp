#include <iostream>
#include "number_3.h"
void season(){
    int month;
    std::cout << "1) Введите номер месяца (1 — январь, 12 — декабрь): ";
    std::cin >> month;

    switch (month) {
        case 12:
        case 1:
        case 2:
            std::cout << "Зима" << std::endl;
            break;
        case 3:
        case 4:
        case 5:
            std::cout << "Весна" << std::endl;
            break;
        case 6:
        case 7:
        case 8:
            std::cout << "Лето" << std::endl;
            break;
        case 9:
        case 10:
        case 11:
            std::cout << "Осень" << std::endl;
            break;
        default:
            std::cout << "Неверный номер месяца." << std::endl;
    }
}