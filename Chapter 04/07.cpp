/*
������ ������� (William Wingate) �������� ������� ������� ����� �����. � ������ ����� �� ���������� ��������� ����������:
�     ������������ �������� � ������������� �����, ������� ����� �������� �� ����� ��� ������ �����;
�     ������� �����;
�     ��� �����.
�     ������������ ���������, ������� ����� ��������� ��� ��� ����������,
� �������� ���������, ������������ ����������� ���������� ����� ����. 
��������� ������ ����������� � ������������ ������ �� ������������� 
����������� � ����� ���������� ��������� ����������. ���������� cin (��� ��� ������) � cout.
*/

#include <iostream>
#include <string>

struct pizza
{
    std::string name{};
    double weight{};
    int diameter{};
};

int main()
{
    setlocale(LC_ALL, "Rus");

    pizza characteristic;

    
    std::cout << "Enter the name of your pizza: ";
    getline(std::cin, characteristic.name);

    std::cout << "Enter the weight of pizza: ";
    std::cin >> characteristic.weight;

    std::cout << "Enter the diameter of pizza: ";
    std::cin >> characteristic.diameter;
    std::cout << std::endl;

    std::cout << "Pizza name: " << characteristic.name << std::endl;
    std::cout << "Weight: " << characteristic.weight << std::endl;
    std::cout << "Diameter: " << characteristic.diameter <<"centimeters" << std::endl;

    std::cout << std::endl;
    system("pause");
    return 0;
}