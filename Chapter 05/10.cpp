/*
�������� ���������, ������������ ��������� �����, 
������� ����������� � ������������ ��������
���������� ����� ��� �����������. ����� ���
������ ���������� ��������� ����� ����� �� 
�����������, � ����� ���������� � ������ ������, 
����� � �� ������ � �.�; � ������ ������ ���������� 
������ �������������� ����� � � ����� ����������,
����� ����� ����� �������� � ������ ������ ���� 
����� ���������� �����. ������ ������� ��������� 
������ ��������� ��������� �������:

������� ���������� �����: 5
....*
...**
..***
.****
*****

*/

#include <iostream>


int main()
{
    setlocale(LC_ALL, "Rus");

    int user_value{};
    std::cout << "������� ���������� �����: ";
    std::cin >> user_value;

    for (int i = 0; i < user_value; ++i) {    
        
        for (int j = 0; j < user_value; ++j) {
            
            if ((i+1) < (user_value - j)) {
                std::cout << ".";
            }
            else {
                std::cout << "*";
            }
        }
        std::cout << std::endl;
    }


    std::cout << std::endl;
    system("pause");
    return 0;
}