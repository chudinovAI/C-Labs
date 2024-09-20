#include <iostream>
#include "number_3.h"
void mass(){
    int unit;
    double M, massInKg = 0;

    std::cout << "4) Введите номер единицы массы (1 - килограмм, 2 - миллиграмм, 3 - грамм, 4 - тонна): ";
    std::cin >> unit;

    std::cout << "Введите массу тела: ";
    std::cin >> M;

    switch (unit) {
        case 1:
            massInKg = M;
            break;
        case 2:
            massInKg = M / 1e6;
            break;
        case 3:
            massInKg = M / 1000;
            break;
        case 4:
            massInKg = M * 1000;
            break;
        default:
            std::cout << "Ошибка: введите корректный номер единицы массы (от 1 до 4)." << std::endl;
            break;
    }

    std::cout << "Масса в килограммах: " << massInKg << " кг" << std::endl;
}