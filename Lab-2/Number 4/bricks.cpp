#include <iostream>
#include <algorithm>
#include "number_4.h"
bool isBrickValid(const double a, const double b, const double c, double x, double y) {
    if (x > y) std::swap(x, y);

    double brickDimensions[3] = {a, b, c};

    std::sort(brickDimensions, brickDimensions + 3);

    return (brickDimensions[0] <= x && brickDimensions[1] <= y) ||
           (brickDimensions[0] <= y && brickDimensions[1] <= x);
}
void bricks(){
    double a, b, c, x, y;

    std::cout << "Введите размеры кирпича (a, b, c): ";
    std::cin >> a >> b >> c;

    std::cout << "Введите размеры отверстия (x, y): ";
    std::cin >> x >> y;

    if (isBrickValid(a, b, c, x, y)) {
        std::cout << "Кирпич может пройти через отверстие" << std::endl;
    } else {
        std::cout << "Кирпич не может пройти через отверстие" << std::endl;
    }
}
