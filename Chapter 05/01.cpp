/*
Напишите программу, запрашивающую у пользователя 
ввод двух целых чисел. Затем программа должна 
вычислить и выдать сумму всех целых чисел, лежащих
между этими двумя целыми. Предполагается, что меньшее
значение вводится первым. Например, если пользователь 
ввел 2 и 9, программа должна сообщить, что сумма всех 
целых чисел от 2 до 9 равна 44.
*/

#include <iostream>


int main()
{
    setlocale(LC_ALL, "Rus");
    
    int first_number{};
    int second_number{};
    int sum{};

    std::cout << "Введите начало массива: ";
    std::cin >> first_number;
    std::cout << "Введите конец массива: ";
    std::cin >> second_number;

    while (first_number <= second_number)
    {
        sum += first_number;
        ++first_number;
    }

    std::cout << "Сумма чисел: " << sum << std::endl;

    std::cout << std::endl;
    system("pause");
    return 0;
}