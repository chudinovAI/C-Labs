#include <iostream>
#include "number_3.h"

bool isValidTime(const int h, const int m) {
    return (h >= 0 && h < 24 && m >= 0 && m < 60);
}

int calculateDuration(const int startMinutes, const int endMinutes) {
    if (endMinutes >= startMinutes) {
        return endMinutes - startMinutes;
    }
    return (24 * 60 - startMinutes) + endMinutes;
}

void number_3(){
    int h1, min1, h2, min2;

    std::cout << "Номер 3" << std::endl;
    std::cout << "Введите начальное время (часы минуты): ";
    std::cin >> h1 >> min1;

    if (!isValidTime(h1, min1)) {
        std::cout << "Ошибка: Неверное значение времени!" << std::endl;
        return;
    }

    std::cout << "Введите конечное время (часы минуты): ";
    std::cin >> h2 >> min2;

    if (!isValidTime(h2, min2)) {
        std::cout << "Ошибка: Неверное значение времени!" << std::endl;
        return;
    }

    const int startMinutes = h1 * 60 + min1;
    const int endMinutes = h2 * 60 + min2;

    int durationMinutes = calculateDuration(startMinutes, endMinutes);
    const int durationHours = durationMinutes / 60;
    durationMinutes = durationMinutes % 60;

    std::cout << "Студент решал задачи: " << durationHours << " часов и " << durationMinutes << " минут." << std::endl;
}
