#include <iostream>
#include "number_2.h"

void reverseSort(int size, int array[]){
    for (int i = 1; i < size; ++i) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] < key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void dynamicArray(){
    int size;
    std::cout << "Введите размер одномерного массива: ";
    std::cin >> size;
    int* array = new int[size];
    std::cout << "Введите элементы массива: " << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }
    reverseSort(size, array);

    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    delete[] array;
}