#include <iostream>
#include <map>
#include "number_5.h"
#include <algorithm>
void sortArray(int size, int array[]){
    for (int i = 1; i < size; ++i) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void rankingArray(const int sortedArray[], int size, std::map<int, double>& dict){
    int count = 1;
    int current = 1;
    for (int i = 1; i < size; i++) {
        if (sortedArray[i] == sortedArray[i - 1]){
            count++;
        } else{
            double avg = (current + current + count - 1) /2.0;
            dict[sortedArray[i - 1]] = avg;
            current += count;
            count = 1;
        }
    }
    double avg = (current + current + count - 1) /2.0;
    dict[sortedArray[size - 1]] = avg;
}

void rangedArray(){
    int size = 10;
    int array[size];
    int sortedArray[size];

    std::cout << "Введите 10 элементов одномерного массива: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }

    std::copy(array, array + size ,sortedArray);
    sortArray(size, sortedArray);
    std::map<int, double> dict;

    rankingArray(sortedArray, size, dict);

    for (int i = 0; i < size; i++) {
        std::cout << dict[array[i]] << " ";
    }
}