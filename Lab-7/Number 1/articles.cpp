#include <iostream>
#include "number_1.h"
void articles(){
    int a, b;
    int* ptrA = &a;
    int* ptrB = &b;
    std::cout << "Введите число A и B: " << std::endl;
    std::cin >> *ptrA >> *ptrB;
    std::cout << *ptrA + *ptrB;
}