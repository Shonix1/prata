/*
�������� ���������, ��������������� �������� 
��������� �� ���������� 8, �� � �������������� 
������� string ������ ����������� �������.
�������� ������������ ���� string � ����������
�������� ��������� ��� ���������� ��������.
*/

#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Rus");

    std::string user_word{};
    int count_of_word{};
    std::cout << "������� ����� (��� ���������� ������� ����� done):\n";

    do {
        
        std::cin >> user_word;
        ++count_of_word;
        
    } while (user_word != "done");
    std::cout << "�� ����� " << --count_of_word << " ����.\n";



    std::cout << std::endl;
    system("pause");
    return 0;
}