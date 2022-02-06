/*
—труктура CandyBar содержит три члена. ѕервый из них хранит 
название ко≠робки конфет. ¬торой - ее вес (который может иметь 
дробную часть), а тре≠тий Ч число калорий (целое значение). 
Ќапишите программу, объ€вл€ющую эту структуру и создающую 
переменную типа CandyBar по имени snack, ини≠циализиру€ ее
члены значени€ми "Mocha Munch", 2.3 и 350, соответственно.
»нициализаци€ должна быть частью объ€влени€ snack. », наконец, 
программа должна отобразить содержимое этой переменной.
*/

#include <iostream>
#include <string>


struct candy_bar
{
    std::string name{};
    double weight{};
    int calories{};
};

int main()
{
    setlocale(LC_ALL, "Rus");

    candy_bar snack{"Mocha Munch", 2.3, 350};

    std::cout << "Snack name: " << snack.name << std::endl;
    std::cout << "Snack weight: " << snack.weight << std::endl;
    std::cout << "Snack calories: " << snack.calories << std::endl;


    std::cout << std::endl;
    system("pause");
    return 0;
}