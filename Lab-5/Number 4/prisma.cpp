#include "number_4.h"
#include <cmath>
#include <iostream>

int calculate(int a, int h){
    return static_cast<int>(3*pow(3, 2)*pow(a, 2)*h/2);
}

double calculate(double a, double h){
    return 3*pow(3, 2)*pow(a, 2)*h/2;
}
void prisma(){
    int part_int = 5, height_int = 10;
    double part_double = 5.1, height_double = 10.5;
    std::cout << "Объем призмы для целых чисел: " << calculate(part_double, height_double) << std::endl;
    std::cout << "Объем призмы для действительных чисел: " << calculate(part_int, height_int) << std::endl;
}