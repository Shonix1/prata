/*
�������� ��������� �� C++, ������� ������ ������ �� ���� 
����������  � ��������� � ����������� ��� � ����. 
(���� ������� ����� 220 �����, ��� 201168�.)

Write a C++ program that asks for a distance in
furlongs and converts it to yards. 
(One furlong is 220 yards.)
*/

#include <iostream>


int main()
{
    int farlongValue = 0;
    std::cout << "Enter the distance in furlongs: ";
    std::cin >> farlongValue;
    std::cout << "Distance " << farlongValue << " furlong, equal " << farlongValue * 220 << " yard" << std::endl;
    system("pause");
    return 0;
}
