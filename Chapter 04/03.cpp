/*
�������� ���������, ������� ����������� � ������������ ���, �������, 
� ����� ������������, ��������� � ���������� ������ ������, 
��������� �� ������� ������������, �� ������� ������� �������, 
������ � ��� ���. ����������� ������� char � ������� �� 
������������� ����� cstring. ������ ������� ������ ��������� ���:
Enter your first name: Flip 
Enter your last name: Fleming
Here�s the information in a single string: Fleming, Flip
*/

#include <iostream>
#include <cstring>


int main()
{
    setlocale(LC_ALL, "Rus");


    const int SIZE = 20;
    char first_name[SIZE]{};
    char last_name[SIZE]{};
    std::string main_information{};
    std::cout << "Enter your name: ";
    std::cin >> first_name;

    std::cout << "Enter your last name: ";
    std::cin >> last_name;

    main_information = std::string(last_name) + ", " + std::string(first_name);

    std::cout << "Here's the information in a single string: " << main_information << std::endl;

    std::cout << std::endl;
    system("pause");
    return 0;
}