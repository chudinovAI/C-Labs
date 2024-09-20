#include <iostream>
#include "number_1.h"
void sumElements(){
    int size = 10;
    int arr[size];
    int sum = 0;

    std::cout << "Номер 1" << std::endl;
    std::cout << "Введите 10 целых чисел(элементы одномерного массива): " << std::endl;
    for (int i = 0; i < size; i++){
        std::cin >> arr[i];
        sum += arr[i];
    }

    std::cout << "Сумма элементов массива равна: " << sum;
}
