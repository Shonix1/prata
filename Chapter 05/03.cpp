/*
�������� ���������, ������� ���������� 
������������ ������� �����. ����� �������
���������� �������� ��������� ������ �������� 
����������� ����� ��������� ��������. 
��������� ������ ����������� ��� ����� 0.
*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    int user_value{};
    int sum{};
    
    do
    {
        std::cout << "������� �����: ";
        std::cin >> user_value;
        sum += user_value;
        std::cout << "����� �����:" << sum << std::endl;
    } while (user_value != 0);

    std::cout << std::endl;
    system("pause");
    return 0;
}