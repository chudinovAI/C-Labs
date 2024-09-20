#include <iostream>
#include "number_2.h"
void bank(){
    double startSum;
    double passedSum;
    std::cout << "Введите сумму начального вклада: ";
    std::cin >> startSum;
    std::cout << "Введите желаемую сумму: ";
    std::cin >> passedSum;
    if (startSum <= 0 || passedSum <= 0 || startSum >= passedSum) {
        std::cout << "Начальный вклад должен быть меньше желаемой суммы и оба значения должны быть положительными" << std::endl;
        return;
    }
    int count = 0;
    while (startSum <= passedSum)
    {
        startSum *= 1 + 0.04;
        count++;
        std::cout << startSum << std::endl;
    }
    std::cout << count;
}