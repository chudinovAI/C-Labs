#include "number_2.h"
#include <iostream>
const int max_size = 100;
double PositiveAvg(int rows, int cols, int matrix[][max_size]){
    double sum = 0;
    int count = 0;
    double result = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (matrix[i][j] > 0){
                sum += matrix[i][j];
                count++;
            }
        }
    }

    if (count == 0){
        result = 0;
    }
    else{
        result = sum/count;
    }

    return result;
}

void sumElements(int rows, int cols, int matrix[max_size][max_size]){
    for (int i = 0; i < rows; i++) {
        int product = 1;
        bool hasNonZero = false;

        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                product += matrix[i][j];
                hasNonZero = true;
            }
        }

        if (!hasNonZero) {
            product = 0;
        }

        std::cout << "Произведение в строке " << i + 1 << ": " << product << std::endl;
    }
}

void sumMatrixAvg(){
    int M1, M2, N1, N2;
    std::cout << "Введите размер матрицы A: " << std::endl;
    std::cin >> M1 >> N1;
    std::cout << "Введите размер матрицы B: " << std::endl;
    std::cin >> M2 >> N2;

    int a[max_size][max_size], b[max_size][max_size];

    std::cout << "Введите матрицу A: ";
    for (int i = 0; i < M1; i++){
        for (int j = 0; j < N1; j++){
            std::cin >> a[i][j];
        }
    }
    std::cout << "Введите матрицу B: ";
    for (int i = 0; i < M2; i++){
        for (int j = 0; j < N2; j++){
            std::cin >> b[i][j];
        }
    }

    double avg1 = PositiveAvg(M1, N1, a);
    double avg2 = PositiveAvg(M2, N2, b);

    if (avg1 > avg2) {
        std::cout << "Матрица A. Произведение ненулевых элементов по строкам:\n";
        sumElements(M1, N1, a);
    } else {
        std::cout << "Матрица B. Произведение ненулевых элементов по строкам:\n";
        sumElements(M2, N2, b);
    }
}