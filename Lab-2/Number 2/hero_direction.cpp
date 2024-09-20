#include <iostream>
#include "number_2.h"
void hero_direction(){
    int direction;
    std::cout << "1) Куда пойдёт герой? (налево = -1, прямо = 0, направо = 1): ";
    std::cin >> direction;
    if (direction == -1)
    {
        std::cout << "Герой пошёл налево и встретил дракона!" << std::endl;
    }
    else if (direction == 0)
    {
        std::cout << "Герой пошёл прямо и попал в ловушку!" << std::endl;
    }
    else if (direction == 1)
    {
        std::cout << "Герой пошёл направо и нашел сокровище!" << std::endl;
    }
    else
    {
        std::cout << "Выберите одно из заданных направлений(налево = -1, прямо = 0, направо = 1) и попробуйте снова! " << std::endl;
    }
}