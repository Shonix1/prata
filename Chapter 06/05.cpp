/*
����������� ���������, ��� �������� �������� ������ �����, 
���������� ��������� ����� ���������������:
������ 5 000 ������� � ����� 0% 
��������� 10 000 ������� � ����� 10% 
��������� 20 000 ������� � ����� 15% 
����� 35 000 ������� - ����� 20%
��������, ���� ����� ������������ 38 000 �������, �� �� ������
��������� ������� 5000 � 0,00 + 10000 � 0,10 + 20000 � 0.15 + 3000 � 0.20. 
��� 4 600 �������. �������� ���������, ������� ���������� ���� ��� 
������� ������� � ������ ����������� � ������� ������. ���� ������ 
�����������, ����� ������������ ������ ������������� ��� ���������� ��������.
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
