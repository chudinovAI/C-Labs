#include <iostream>
#include <cmath>
#include "number_1.h"
double calculateSqrt(int array[], int size){
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        array[i] *= array[i];
        sum += array[i];
    }
    return sqrt(sum);
}

void sqrtArray(){
    int size = 5;
    int array[size];

    std::cout << "Введите 5 элементов одномерного массива: " << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    double result = calculateSqrt(array, size);
    std::cout << result;
}