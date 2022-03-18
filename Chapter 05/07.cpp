/*
������������ ��������� �� ����� ���, ������� �����
������� ��������� ���������� �� ����������: ��������
������������� � ���� ������ � ���������� ������� ���
� ������� string, � ����� ��� ������� ���������� �
���� ������ �����. �������� ���������, ������� ��������
������������, ������� ����������� ���������� ��������
� �������. ����� ��������� ������ ��������� new ���
�������� ������������� ������� �������� ��� ����������
������������� �������. ����� ��� ������ ����������
������������ ������ �������� ������������� � ��� �������
��� ���������� ������� ������ ��������� � �������
(��. ����� 4). �, �������, ��� ������ ����������
���������� ������ ���������. ������ ������� ���������
������ ��������� ������� ����������:

������� ����������� ��������� � �������? 2
���������� #1:
������� �������������: Hudson Hornet
������� ��� �������: 1952

���������� #2:
������� �������������: Kaiser
������� ��� �������: 1951
��� ���� ���������:

1952 Hudson Hornet
1951 Kaiser
*/

#include <iostream>
#include <string>

struct car
{
    std::string name{};
    int release_date{};
};

int main()
{
    setlocale(LC_ALL, "Rus");

    int user_value{};
    std::cout << "How many cars do you want include in catalog: ";
    std::cin >> user_value;
    std::cin.get();

    car* ptr = new car[user_value];

    for (int i = 0; i < user_value; ++i)
    {
        std::cout << "Auto #" << i + 1 << ": \n";
        std::cout << "Enter manufacturer: ";
        std::getline(std::cin, ptr[i].name);

        std::cout << "Enter release date: ";
        std::cin >> ptr[i].release_date;
        std::cin.get();
    }
    std::cout << "Here is your collection:\n";
    for (int i = 0; i < user_value; ++i)
    {
        std::cout << ptr[i].release_date << " " << ptr[i].name;
        std::cout << std::endl;
    }

    delete[]ptr;
    ptr = nullptr;


    std::cout << std::endl;
    system("pause");
    return 0;
}