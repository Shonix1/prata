/*
�������� ���������, ������� ���������� ������ char � ���� 
��� ������ �� ������ ����� �� ��� �� ��� ���, ���� �� ����� 
������� ����� done. ����� ��������� ������ �������� 
���������� ��������� ���� (�������� done). ������ ������� 
������ ���� �����:

������� ����� (��� ���������� ������� ����� done):
antoator birthday category dumpster envy 
finagle geometry done for sure

�� ����� 1 ����.

�� ������ �������� ������������ ���� cstring � 
��������� ������� strcmp() ��� ���������� ��������.
*/

#include <iostream>
#include <cstring>

int main()
{
    setlocale(LC_ALL, "Rus");

    const int SIZE = 20;
    char user_word[20]{};
    int count_of_word{};
    std::cout << "������� ����� (��� ���������� ������� ����� done):\n";

    while (std::strcmp(user_word, "done")) {
        
        std::cin >> user_word;
        std::cin.get();
        ++count_of_word;
        
    }
    std::cout << "�� ����� " << --count_of_word << " ����.\n";



    std::cout << std::endl;
    system("pause");
    return 0;
}