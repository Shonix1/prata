/*
�������� ���������, ������������� � ������������ 
���� ���� ����� �����. ����� ��������� ������ 
��������� � ������ ����� ���� ����� �����, �������
����� ����� ����� ������. ��������������, ��� �������
�������� �������� ������. ��������, ���� ������������ 
���� 2 � 9, ��������� ������ ��������, ��� ����� ���� 
����� ����� �� 2 �� 9 ����� 44.
*/

#include <iostream>


int main()
{
    setlocale(LC_ALL, "Rus");
    
    int first_number{};
    int second_number{};
    int sum{};

    std::cout << "������� ������ �������: ";
    std::cin >> first_number;
    std::cout << "������� ����� �������: ";
    std::cin >> second_number;

    while (first_number <= second_number)
    {
        sum += first_number;
        ++first_number;
    }

    std::cout << "����� �����: " << sum << std::endl;

    std::cout << std::endl;
    system("pause");
    return 0;
}