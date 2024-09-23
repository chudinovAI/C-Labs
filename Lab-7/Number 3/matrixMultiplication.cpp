#include <iostream>
#include "number_3.h"
void matrixMultiplication(){
    int N1, M1, M2;
    std::cout << "Введите размер матрицы A: " << std::endl;
    std::cin >> N1 >> M1;
    std::cout << "Введите число столбцов матрицы B: " << std::endl;
    std::cin >> M2;
    int** matrix1{new int*[N1]{}};
    int** matrix2{new int*[M1]{}};
    int** result{new int*[N1]{}};

    for (unsigned i{}; i < N1; i++){
        matrix1[i] = new int[M1]{};
    }
    for (unsigned i{}; i < M1; i++){
        matrix2[i] = new int[M2]{};
    }
    for (unsigned i{}; i < N1; i++){
        result[i] = new int[M2]{};
    }

    std::cout << "Заполните матрицу A" << std::endl;
    for (unsigned i{}; i < N1; ++i) {
        std::cout << "Введите элементы строки " << i + 1 << " ";
        for (unsigned j{}; j < M1; ++j) {
            std::cout << "колонны " << (j + 1) << ": " << std::endl;
            std::cin >> matrix1[i][j];
        }
    }
    std::cout << "Заполните матрицу B" << std::endl;
    for (unsigned i{}; i < M1; ++i) {
        std::cout << "Введите элементы строки " << i + 1 << " ";
        for (unsigned j{}; j < M2; ++j) {
            std::cout << "колонны " << (j + 1) << ": " << std::endl;
            std::cin >> matrix2[i][j];
        }
    }

    for (unsigned i{}; i < N1; i++){
        for (unsigned j{}; j < M2; ++j) {
            result[i][j] = 0;
            for (unsigned k{}; k < M1; k++){
                result[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }

    for (unsigned i{}; i < N1; i++){
        for (unsigned j{}; j < M2; j++){
            std::cout << result[i][j] << " ";
        }
    }

    for (unsigned i{}; i < N1; i++){
        delete[] matrix1[i];
    }
    for (unsigned i{}; i < M1; i++){
        delete[] matrix2[i];
    }
    for (unsigned i{}; i < N1; i++){
        delete[] result[i];
    }
    delete[] matrix1;
    delete[] matrix2;
    delete[] result;
}