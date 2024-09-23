#include "defineSize.h"

#include <iostream>
#define Rows1 3
#define Cols1 2
#define Cols2 2
void defineSize()
{
    int matrix1[Rows1][Cols1];
    int matrix2[Cols1][Cols2];

    std::cout << "Введите матрицу А: " << std::endl;
    for (int i = 0; i < Rows1; i++)
    {
        for (int j = 0; j < Cols1; j++)
        {
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << "Введите матрицу B: " << std::endl;
    for (int i = 0; i < Cols1; i++)
    {
        for (int j = 0; j < Cols2; j++)
        {
            std::cin >> matrix2[i][j];
        }
    }

    int result[Rows1][Cols2];

    for (int i = 0; i < Rows1; i++)
    {
        for (int j = 0; j < Cols2; j++)
        {
            result[i][j] = 0;
        }
    }

    for (int i = 0; i < Rows1; i++)
    {
        for (int j = 0; j < Cols2; j++)
        {
            for (int k = 0; k < Cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    for (int i = 0; i < Rows1; i++)
    {
        for (int j = 0; j < Cols2; j++)
        {
            std::cout << result[i][j] << " ";
        }
    }
}
