/*
Напишите программу, которая приглашает 
пользователя вводить числа. После каждого
введенного значения программа должна выдавать 
накопленную сумму введенных значений. 
Программа должна завершаться при вводе 0.
*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int user_value{};
    int sum{};
    
    do
    {
        std::cout << "Введите число: ";
        std::cin >> user_value;
        sum += user_value;
        std::cout << "Сумма чисел:" << sum << std::endl;
    } while (user_value != 0);

    std::cout << std::endl;
    system("pause");
    return 0;
}