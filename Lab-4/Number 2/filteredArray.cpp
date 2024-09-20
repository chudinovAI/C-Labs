#include <iostream>
#include "number_2.h"
double filterBelowThreshold(const int arr[], int size, int threshold){
    int count = 0;
    double sum = 0;
    double result = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < threshold) {
            count++;
            sum += arr[i];
        }
    }
    result = sum/count;
    if (count == 0){
        result = 0;
    }
    return (result);
}

void filteredArray(){
    int size = 5;
    int arr1[size], arr2[size], arr3[size];
    int threshold;

    std::cout << "Введите элементы первого массива: " << std::endl;
    for (int i = 0; i < size; i++){
        std::cin >> arr1[i];
    }
    std::cout << "Введите элементы второго массива: " << std::endl;
    for (int i = 0; i < size; i++){
        std::cin >> arr2[i];
    }
    std::cout << "Введите элементы третьего массива: " << std::endl;
    for (int i = 0; i < size; i++){
        std::cin >> arr3[i];
    }
    std::cout << "Введите число: ";
    std::cin >> threshold;

    double result1 = filterBelowThreshold(arr1, size, threshold);
    double result2 = filterBelowThreshold(arr2, size, threshold);
    double result3 = filterBelowThreshold(arr3, size, threshold);

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
            std::cout << "Наибольшее среднее арифметическое во втором массиве "<< result2 << std::endl;
        } else {
            std::cout << "Наибольшее среднее арифметическое в третьем массиве "<< result3 << std::endl;
        }
    }
}