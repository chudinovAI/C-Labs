#include "number_1.h"
#include <iostream>
#include <vector>

struct Date{
    int day;
    int month;
    int year;
};
struct Instrument{
    std::string Name;
    std::string Parameter;
    Date Release;
    Date Check;
    double Cost;
};
Date inputDate(){
    Date date;
    std::cout << "Введите день: ";
    std::cin >> date.day;
    std::cout << "Введите месяц: ";
    std::cin >> date.month;
    std::cout << "Введите год: ";
    std::cin >> date.year;
    return date;
}
Instrument inputInstrument(){
    Instrument instrument;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    std::cout << "Введите наименование инструмента: ";
    std::cin.ignore();
    std::getline(std::cin, instrument.Name);
    std::cout << "Введите наименование параметра: ";
    std::getline(std::cin, instrument.Parameter);
    std::cout << "Введите дату выпуска инструмента" << std::endl;
    instrument.Release = inputDate();
    std::cout << "Введите дату последней проверки" << std::endl;
    instrument.Check = inputDate();
    std::cout << "Введите стоимость инструмента (руб.): ";
    std::cin >> instrument.Cost;
    return instrument;
}
void updateCheckDate(Instrument instrument){
    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    std::cout << "Введите новую дату последней проверки инструмента " << instrument.Name;
    instrument.Check = inputDate();
}
void displayInfo(const Instrument& instrument){
    std::cout << "Наименование инструмента: " << instrument.Name << std::endl;
    std::cout << "Наименование параметра инструмента: " << instrument.Parameter << std::endl;
    std::cout << "Дата выпуска инструмента: " << instrument.Release.day
        << "." << instrument.Release.month << "." << instrument.Release.year << std::endl;
    std::cout << "Дата последней проверки инструмента: " << instrument.Check.day
        << "." << instrument.Check.month << "." << instrument.Check.year << std::endl;
    std::cout << "Стоимость инструмента: " << instrument.Cost << " руб." << std::endl;
}

double totalCost(std::vector<Instrument>& instruments){
    double total = 0;
    for (int i = 0; i < instruments.size(); i++) {
        total += instruments[i].Cost;
    }
    return total;
}

void structures(){
    std::vector<Instrument> instruments;
    int action;

    do {
        std::cout << "-------------------------------------------------------------------------------" << std::endl;
        std::cout << "Выберите действие (0-5)" << std::endl;
        std::cout << "1) Добавить новый инструмент" << std::endl;
        std::cout << "2) Изменить дату последней проверки" << std::endl;
        std::cout << "3) Получить данные о всех инструментах" << std::endl;
        std::cout << "4) Получить общую стоимость всех инструментов" << std::endl;
        std::cout << "0) Выход" << std::endl;
        std::cin >> action;

        switch (action){
            case 1:{
                Instrument instrument = inputInstrument();
                instruments.push_back(instrument);
                break;
            }
            case 2:{
                int index;
                std::cout << "-------------------------------------------------------------------------------" << std::endl;
                std::cout << "Выберите номер инструмента для изменения даты проверки: ";
                std::cin >> index;
                if (index > 0 && index <= instruments.size()){
                    updateCheckDate(instruments[index-1]);
                } else{
                    std::cout << "Неверный номер инструмента!" << std::endl;
                }
                break;
            }
            case 3:{
                if (instruments.empty()){
                    std::cout << "-------------------------------------------------------------------------------" << std::endl;
                    std::cout << "Список инструментов пуст, пополните его!" << std::endl;
                } else{
                    for (int i = 0; i < instruments.size(); ++i) {
                        std::cout << "-------------------------------------------------------------------------------" << std::endl;
                        std::cout << "#" << i + 1 << std::endl;
                        displayInfo(instruments[i]);
                    }
                }
                break;
            }
            case 4:{
                std::cout << "-------------------------------------------------------------------------------" << std::endl;
                std::cout << "Общая стоимость всех инструментов: " << totalCost(instruments) << " руб." << std::endl;
                break;
            }
            case 0:{
                std::cout << "-------------------------------------------------------------------------------" << std::endl;
                std::cout << "Выход........";
                break;
            }
            default:{
                std::cout << "-------------------------------------------------------------------------------" << std::endl;
                std::cout << "Ошибка: несуществующий вариант ответа!";
                break;
            }
        }
    } while (action != 0);

}