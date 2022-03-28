/*
Ќапишите программу на C++, котора€ отобразит ваше им€ 
и адрес (можете указать фиктивные данные)

Write a C++ programm that displays your name and adress
(or if you value your privacy, a fictious name and adress)
*/

#include <iostream>


int main()
{
    setlocale(LC_ALL, "Rus");
    std::cout << "Name: " << "Renat" << std::endl;
    std::cout << "Adress: " << "67 Windfall St.Lake Zurich, IL 60047" << std::endl;
    system("pause");
    return 0;
}
