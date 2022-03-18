/*
Разработайте структуру по имени саг, которая будет
хранить следующую информацию об автомобиле: название
производителя в виде строки в символьном массиве или
в объекте string, а также год выпуска автомобиля в
виде целого числа. Напишите программу, которая запросит
пользователя, сколько автомобилей необходимо включить
в каталог. Затем программа должна применить new для
создания динамического массива структур саг указанного
пользователем размера. Далее она должна пригласить
пользователя ввести название производителя и год выпуска
для наполнения данными каждой структуры в массиве
(см. главу 4). И, наконец, она должна отобразить
содержимое каждой структуры. Пример запуска программы
должен выглядеть подобно следующему:

Сколько автомобилей поместить в каталог? 2
Автомобиль #1:
Введите производителя: Hudson Hornet
Укажите год выпуска: 1952

Автомобиль #2:
Введите производителя: Kaiser
Укажите год выпуска: 1951
Вот ваша коллекция:

1952 Hudson Hornet
1951 Kaiser
*/

#include <iostream>
#include <string>

struct car
{
    std::string name{};
    int release_date{};
};

int main()
{
    setlocale(LC_ALL, "Rus");

    int user_value{};
    std::cout << "How many cars do you want include in catalog: ";
    std::cin >> user_value;
    std::cin.get();

    car* ptr = new car[user_value];

    for (int i = 0; i < user_value; ++i)
    {
        std::cout << "Auto #" << i + 1 << ": \n";
        std::cout << "Enter manufacturer: ";
        std::getline(std::cin, ptr[i].name);

        std::cout << "Enter release date: ";
        std::cin >> ptr[i].release_date;
        std::cin.get();
    }
    std::cout << "Here is your collection:\n";
    for (int i = 0; i < user_value; ++i)
    {
        std::cout << ptr[i].release_date << " " << ptr[i].name;
        std::cout << std::endl;
    }

    delete[]ptr;
    ptr = nullptr;


    std::cout << std::endl;
    system("pause");
    return 0;
}