#include <random>
#include <iostream>
#include "number_4.h"
void game()
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> value_distribution(1, 500);
    const int random = value_distribution(gen);
    std::cout << random << std::endl;
    int guess = -1;
    std::cout << "Угадайте случайное целое число в диапазоне от 1 до 500: ";
    while (guess != random)
    {
        std::cin >> guess;

        if (guess == 0)
        {
            std::cout << "Игра окончена, загаданное число было " << random;
            return;
        }
        if (guess < random)
        {
            std::cout << "Ваше число меньше загаданного, попробуйте ещё раз: ";
        }
        else if (guess > random)
        {
            std::cout << "Ваше число больше загаданного, попробуйте ещё раз: ";
        }
        else
        {
            std::cout << "Поздравляю, вы победили!";
        }
    }
}