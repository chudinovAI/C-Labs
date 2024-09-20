#include <iostream>
#include "number_2.h"
int filterArr(int size, int result[], const int arr1[], const int arr2[], const int arr3[], int threshold) {
    int k = 0;

    for (int i = 0; i < size; i++) result[k++] = arr1[i];
    for (int i = 0; i < size; i++) result[k++] = arr2[i];
    for (int i = 0; i < size; i++) result[k++] = arr3[i];

    int newSize = 0;

    for (int i = 0; i < size * 3; i++) {
        if (result[i] < threshold) {
            result[newSize++] = result[i];
        }
    }

    return newSize;
}

void splitArray(int newSize, int arr1[], int& arr1_size, int arr2[], int& arr2_size, int arr3[], int& arr3_size, const int result[]) {
    int baseSize = newSize / 3;
    int remaining = newSize % 3;

    for (int i = 0; i < baseSize; i++) {
        arr1[i] = result[i];
        arr2[i] = result[baseSize + i];
        arr3[i] = result[2 * baseSize + i];
    }

    if (remaining > 0) arr1[baseSize] = result[3 * baseSize];
    if (remaining > 1) arr2[baseSize] = result[3 * baseSize + 1];

    arr1_size = baseSize + (remaining > 0 ? 1 : 0);
    arr2_size = baseSize + (remaining > 1 ? 1 : 0);
    arr3_size = baseSize;
}

double calculateAverage(const int arr[], int size) {
    if (size == 0) return 0;
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (sum/ size);
}

void testFilterArray() {
    int size = 5;
    int arr1[size], arr2[size], arr3[size];
    int threshold;
    int result[size * 3]; // array for filtered values

    std::cout << "Введите элементы первого массива: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr1[i];
    }
    std::cout << "Введите элементы второго массива: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr2[i];
    }
    std::cout << "Введите элементы третьего массива: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr3[i];
    }
    std::cout << "Введите число: ";
    std::cin >> threshold;

    int newSize = filterArr(size, result, arr1, arr2, arr3, threshold);

    int new_arr1[size], new_arr2[size], new_arr3[size]; // new filtered arrays from origin
    int arr1_size = 0, arr2_size = 0, arr3_size = 0;
    splitArray(newSize, new_arr1, arr1_size, new_arr2, arr2_size, new_arr3, arr3_size, result);

    double result1 = calculateAverage(new_arr1, arr1_size);
    double result2 = calculateAverage(new_arr2, arr2_size);
    double result3 = calculateAverage(new_arr3, arr3_size);

    if (result1 == result2 && result2 == result3) {
        std::cout << "Средние арифметические всех массивов равны " << result1 << std::endl;
    } else if (result1 == result2) {
        std::cout << "Средние арифметические первого и второго массивов равны " << result1 << std::endl;
    } else if (result1 == result3) {
        std::cout << "Средние арифметические первого и третьего массивов равны " << result1 << std::endl;
    } else if (result2 == result3) {
        std::cout << "Средние арифметические второго и третьего массивов равны " << result2 << std::endl;
    } else {
        if (result1 > result2 && result1 > result3) {
            std::cout << "Наибольшее среднее арифметическое в первом массиве " << result1 << std::endl;
        } else if (result2 > result1 && result2 > result3) {
            std::cout << "Наибольшее среднее арифметическое во втором массиве " << result2 << std::endl;
        } else {
            std::cout << "Наибольшее среднее арифметическое в третьем массиве " << result3 << std::endl;
        }
    }
}