#include <iostream>

#include "number_3.h"
void vector()
{
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int vector[3];
    std::cout << "Введите 3 элемента вектора: " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> vector[i];
    }
    int result[3] = {0,0,0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i] += matrix[i][j] * vector[j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        std::cout << result[i] << std::endl;
    }
}