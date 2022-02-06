/*
�������� ���������, ������� ���������� ������������
������ ��� ���������� ������ �� 40 ����� (��� 40 
������, ���� �������) � ����� ���������� ��� 
�������� � �� �������. ��� �������� ������ ����������
������ array. (���� ������ array �� ��������, �������������� 
���������� ��������.)
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