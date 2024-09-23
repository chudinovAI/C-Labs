#include <iostream>
#include "number_3.h"

double function(double t, double T, double K, double X, double delta_t){
    if (t <= 0){
        return 0.0;
    }
    return (function(t-delta_t, T, K, X, delta_t)*T + K*X*delta_t)/(T + delta_t);
}
void recursion(){
    double delta_t = 0.1;
    double T = 5;
    double K = 2;
    double X = 1.5;
    double t;

    std::cout << "Введите параметр t: " << std::endl;
    std::cin >> t;

    double result = function(t, T, K, X, delta_t);
    std::cout << result << std::endl;
}