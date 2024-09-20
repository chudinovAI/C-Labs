#include <iostream>
#include "number_2.h"
void cars(){
    int cars, trucks;
    std::cout << "3) Введите количество легковых машин: ";
    std::cin >> cars;
    std::cout << "Введите количество грузовиков: ";
    std::cin >> trucks;

    if (cars + trucks > 3)
    {
        std::cout << "На мосту не может быть больше 3 машин одновременно" << std::endl;
    }
    else if(trucks == 3)
    {
        std::cout << "Мост рухнет: на мосту 3 грузовика" << std::endl;
    }
    else if(trucks == 2 && cars == 1)
    {
        std::cout << "Мост рухнет: на мосту 2 грузовика и 1 легковая машина" << std::endl;
    }
    else if(cars == 3)
    {
        std::cout << "Мост выдержит: на мосту 3 легковые машины" << std::endl;
    }
    else if(cars == 2 && trucks == 1)
    {
        std::cout << "Мост выдержит: на мосту 2 легковые машины и 1 грузовик" << std::endl;
    }
    else
    {
        std::cout << "Мост выдержит: остальные комбинации допустимы" << std::endl;
    }
}
