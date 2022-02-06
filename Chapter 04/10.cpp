/*
Напишите программу, которая приглашает пользователя
ввести три результа­та забега на 40 ярдов (или 40 
метров, если желаете) и затем отображает эти 
значения и их среднее. Для хранения данных применяйте
объект array. (Если объект array не доступен, воспользуйтесь 
встроенным массивом.)
*/

#include <iostream>
#include <array>


int main()
{
    setlocale(LC_ALL, "Rus");

    const int SIZE = 3;

    std::array<double, SIZE> relay_race{};
    
    std::cout << "Enter the result of the first relay race: ";
    std::cin >> relay_race[0];

    std::cout << "Enter the result of the second relay race: ";
    std::cin >> relay_race[1];

    std::cout << "Enter the result of the third relay race: ";
    std::cin >> relay_race[2];

    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << relay_race[i] << std::endl;
    }

    std::cout << std::endl;
    system("pause");
    return 0;
}