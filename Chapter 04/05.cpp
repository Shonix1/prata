/*
��������� CandyBar �������� ��� �����. ������ �� ��� ������ 
�������� ������� ������. ������ - �� ��� (������� ����� ����� 
������� �����), � ������ � ����� ������� (����� ��������). 
�������� ���������, ����������� ��� ��������� � ��������� 
���������� ���� CandyBar �� ����� snack, ������������� ��
����� ���������� "Mocha Munch", 2.3 � 350, ��������������.
������������� ������ ���� ������ ���������� snack. �, �������, 
��������� ������ ���������� ���������� ���� ����������.
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

    candy_bar snack{"Mocha Munch", 2.3, 350};

    std::cout << "Snack name: " << snack.name << std::endl;
    std::cout << "Snack weight: " << snack.weight << std::endl;
    std::cout << "Snack calories: " << snack.calories << std::endl;


    std::cout << std::endl;
    system("pause");
    return 0;
}