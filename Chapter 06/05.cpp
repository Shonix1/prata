/*
Королевство Нейтрония, где денежной единицей служит твари, 
использует следующую шкалу налогообложения:
первые 5 000 тварпов — налог 0% 
следующие 10 000 тварпов — налог 10% 
следующие 20 000 тварпов — налог 15% 
свыше 35 000 тварпов - налог 20%
Например, если некто зарабатывает 38 000 тварпов, то он должен
заплатить налогов 5000 х 0,00 + 10000 х 0,10 + 20000 х 0.15 + 3000 х 0.20. 
или 4 600 тварпов. Напишите программу, которая использует цикл для 
запроса доходов и выдачи подлежащего к выплате налога. Цикл должен 
завершаться, когда пользователь вводит отрицательное или нечисловое значение.
*/

#include <iostream>



int main()
{
    setlocale(LC_ALL, "Rus");

    int user_income{};
    double user_tax{};
    bool flag{};
 
    while (!flag) {

        std::cout << "Enter your income: ";
        std::cin >> user_income;

        if (!std::cin) {
            std::cout << "Bye!\n" << std::endl;
            flag = 1;
        }
        else {
            if (user_income < 10000) {
                user_tax = user_tax * 0.00;
                std::cout << "Your tax: " << user_tax << std::endl;
            }
            else if (user_income >= 10000 && user_income < 20000) {
                user_tax = 5000 * 0.00 + (user_income - 5000) * 0.10;
                std::cout << "Your tax: " << user_tax << std::endl;
            }
            else if (user_income >= 20000 && user_income < 35000) {
                user_tax = 5000 * 0.00 + 10000 * 0.10 + (user_income - 15000) * 0.15;
                std::cout << "Your tax: " << user_tax << std::endl;
            }
            else {
                user_tax = 5000 * 0.00 + 10000 * 0.10 + 20000 * 0.15 + (user_income - 35000) * 0.20;
                std::cout << "Your tax: " << user_tax << std::endl;
            }
        }        
    }

    std::cout << std::endl;
    system("pause");
    return 0;
}
