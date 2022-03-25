/*
�������� ���������, �������� � ������ double �� 
10 �������� �������������. (���, ���� ������, 
����������� ��������� ������ array.) ���������
������ ���������� ���� ��� ��������� ���������� 
��������. ��� ������ �������� ������� �������� 
���������� �����, � ����� ���������� �������� � 
�������, ����������� �������.
*/

#include <iostream>
#include <array>

int main()
{
    setlocale(LC_ALL, "Rus");
    const int SIZE = 10;
    int variables_in_array = 0;
    double sum_of_array{};
    double average_of_array{};
    int greater_then_average{};
    std::array<double, SIZE>simple_array{};
    srand(time(NULL));
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout <<"������� " << i + 1 << "-� �����: ";
        std::cin >> simple_array[i];
        if (!std::cin) {
            break;
        }
        else {
            sum_of_array += simple_array[i];
            ++variables_in_array;
        }
    }

    average_of_array = sum_of_array / variables_in_array;
    
    for (int i = 0; i < variables_in_array; ++i)
    {
        if (average_of_array < simple_array[i])
        {
            ++greater_then_average;
        }
    }

    std::cout << "������� �������� �������: " << average_of_array << std::endl;
    std::cout << "���������� ����� ����������� ������� ��������: " << greater_then_average << std::endl;
    
    std::cout << std::endl;
    system("pause");
    return 0;
}