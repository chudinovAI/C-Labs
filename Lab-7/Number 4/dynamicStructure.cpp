#include <iostream>
#include "number_4.h"

struct Date2{
    int day;
    int month;
    int year;
};

struct Instrument2{
    std::string Name;
    std::string Parameter;
    Date2 Release{};
    Date2 Check{};
    double Cost{};
};

Date2 inputDate2(){
    Date2 date{};
    std::cout << "Введите день: ";
    std::cin >> date.day;
    std::cout << "Введите месяц: ";
    std::cin >> date.month;
    std::cout << "Введите год: ";
    std::cin >> date.year;
    return date;
}

Instrument2* inputInstrument2(){
    Instrument2* instrument = new Instrument2;
    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    std::cout << "Введите наименование инструмента: ";
    std::cin.ignore();
    std::getline(std::cin, instrument->Name);
    std::cout << "Введите наименование параметра: ";
    std::getline(std::cin, instrument->Parameter);
    std::cout << "Введите дату выпуска инструмента" << std::endl;
    instrument->Release = inputDate2();
    std::cout << "Введите дату последней проверки" << std::endl;
    instrument->Check = inputDate2();
    std::cout << "Введите стоимость инструмента (руб.): ";
    std::cin >> instrument->Cost;
    return instrument;
}
void updateCheckDate(Instrument2* instrument){
    std::cout << "-------------------------------------------------------------------------------" << std::endl;
    std::cout << "Введите новую дату последней проверки инструмента " << instrument->Name;
    instrument->Check = inputDate2();
}
void displayInfo(Instrument2* instrument){
    std::cout << "Наименование инструмента: " << instrument->Name << std::endl;
    std::cout << "Наименование параметра инструмента: " << instrument->Parameter << std::endl;
    std::cout << "Дата выпуска инструмента: " << instrument->Release.day
              << "." << instrument->Release.month << "." << instrument->Release.year << std::endl;
    std::cout << "Дата последней проверки инструмента: " << instrument->Check.day
              << "." << instrument->Check.month << "." << instrument->Check.year << std::endl;
    std::cout << "Стоимость инструмента: " << instrument->Cost << " руб." << std::endl;
}

double totalCost(Instrument2** instruments, int count){
    double total = 0;
    for (int i = 0; i < count; i++) {
        total += instruments[i]->Cost;
    }
    return total;
}

void dynamicStructure(){
    int max_size = 100;
    Instrument2** instruments = new Instrument2*[max_size];
    int count = 0;
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
                if (count < max_size){
                    Instrument2* new_instrument = inputInstrument2();
                    instruments[count] = new_instrument;
                    count++;
                } else{
                    std::cout << "Превышено максимальное количество инструментов!";
                }
                break;
            }
            case 2:{
                int index;
                std::cout << "-------------------------------------------------------------------------------" << std::endl;
                std::cout << "Выберите номер инструмента для изменения даты проверки: ";
                std::cin >> index;
                if (index > 0 && index <= count){
                    updateCheckDate(instruments[index-1]);
                } else{
                    std::cout << "Неверный номер инструмента!" << std::endl;
                }
                break;
            }
            case 3:{
                if (count == 0){
                    std::cout << "-------------------------------------------------------------------------------" << std::endl;
                    std::cout << "Список инструментов пуст, пополните его!" << std::endl;
                } else{
                    for (int i = 0; i < count; ++i) {
                        std::cout << "-------------------------------------------------------------------------------" << std::endl;
                        std::cout << "#" << i + 1 << std::endl;
                        displayInfo(instruments[i]);
                    }
                }
                break;
            }
            case 4:{
                std::cout << "-------------------------------------------------------------------------------" << std::endl;
                std::cout << "Общая стоимость всех инструментов: " << totalCost(instruments, count) << " руб." << std::endl;
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

    for (int i = 0; i < count; i++){
        delete instruments[i];
    }
    delete[] instruments;
}