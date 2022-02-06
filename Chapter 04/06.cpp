/*
Структура CandyBar включает три члена, как
описано в предыдущем упражне­нии. Напишите 
программу, которая создает массив из трех 
структур CandyBar, инициализирует их значениями
по вашему усмотрению и затем отображает 
со­держимое каждой структуры.

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

    const int SIZE = 3;
    candy_bar snack[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; ++i)
    {
        snack[i].name ="some candy name";
        snack[i].weight = 2.5;
        snack[i].calories = 450;
    }
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << snack[i].name << std::endl;
        std::cout << snack[i].weight << std::endl;
        std::cout << snack[i].calories << std::endl;
        std::cout << std::endl;
    }


    std::cout << std::endl;
    system("pause");
    return 0;
}