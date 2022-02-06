/*
Выполните упражнение 6, но вместо 
объявления массива из трех структур
CandyBar используйте операцию new для
динамического размещения массива.
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
    candy_bar* snack = new candy_bar[SIZE];
    srand(time(NULL));
    for (int i = 0; i < SIZE; ++i)
    {
        snack[i].name = "some candy name";
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
    delete[] snack;
    snack = nullptr;

    std::cout << std::endl;
    system("pause");
    return 0;
}