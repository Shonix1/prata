/*
Напишите программу, читающую в массив double до 
10 значений пожертвований. (Или, если хотите, 
используйте шаблонный объект array.) Программа
должна прекращать ввод при получении нечисловой 
величины. Она должна выдавать среднее значение 
полученных чисел, а также количество значений в 
массиве, превышающих среднее.
*/

#include <iostream>
#include <array>

int main()
{
    setlocale(LC_ALL, "Rus");
    const int SIZE = 10;
    int variables_in_array = 0;
    double sum_of_array{};
    double average_of_array{};
    int greater_then_average{};
    std::array<double, SIZE>simple_array{};
    srand(time(NULL));
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout <<"Введите " << i + 1 << "-е число: ";
        std::cin >> simple_array[i];
        if (!std::cin) {
            break;
        }
        else {
            sum_of_array += simple_array[i];
            ++variables_in_array;
        }
    }

    average_of_array = sum_of_array / variables_in_array;
    
    for (int i = 0; i < variables_in_array; ++i)
    {
        if (average_of_array < simple_array[i])
        {
            ++greater_then_average;
        }
    }

    std::cout << "Среднее значение массива: " << average_of_array << std::endl;
    std::cout << "Количество чисел превышающее среднее значение: " << greater_then_average << std::endl;
    
    std::cout << std::endl;
    system("pause");
    return 0;
}