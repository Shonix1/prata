/*
�������� ���������, ������� ���������� ������������ 
������ ��� ��� � �� �����, � ����� ��������, ��������
� ��������� ������ ������, ��������� �� �������, �� 
������� ������� �������, ������ � ���. �����������
������� string � ������ �� ������������� ����� string.
������ ������� ������ ���������� ���:
Enter your first name: Flip 
Enter your last name: Fleming
Here's the information in a single string: Fleming, Flip
*/

#include <iostream>
#include <string>


int main()
{
    setlocale(LC_ALL, "Rus");


    std::string first_name{};
    std::string last_name{};
    std::string main_information{};
    std::cout << "Enter your name: ";
    getline(std::cin, first_name);

    std::cout << "Enter your last name: ";
    getline(std::cin, last_name);

    main_information = last_name + ", " + first_name;

    std::cout << "Here's the information in a single string: " << main_information << std::endl;

    std::cout << std::endl;
    system("pause");
    return 0;
}