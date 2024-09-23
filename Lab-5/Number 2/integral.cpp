#include <iostream>
#include "number_2.h"
#include <cmath>

double function(double x){
    return 5*pow(x, 3) + 4*pow(x, 2) + 1;
}
double calculate(double a, double b, int n){
    double h = (b - a)/n;
    double sum = 0.5*(function(a) + function(b));
    for (int i = 1; i < n; ++i) {
        double x = a + h*i;
        sum += function(x);
    }
    return sum*h;
}
void integral(){
    double a, b;
    int n;
    std::cout << "Введите числа a, b, n: " << std::endl;
    std::cin >> a >> b >> n;
    double result = calculate(a, b, n);
    std::cout << result;
}