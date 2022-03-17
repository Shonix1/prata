/*
�����������, ��� �� �������� ����� �� ����������������
�� ����� C++ ��� ����������. �������� ���������, ������� 
�������� ������ ����������� ������ ������ � ������� ����
(� ���������� ����, � �� � �������). ��������� ������
������������ ����, � ������� ��������� ����������� � 
��������� ������, �������� ������ ���������� �� char 
(��� ������ �������� string, ���� �� ������������� ���), 
������������������ �������� � ���������� �������, � 
�������� ��������� �������� � ������� int. ����� ��������� 
������ ����� ����� ����������� ������� � ������
����� ����� ������ �� ���.
*/

#include <iostream>
#include <string>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    const int SIZE = 12;//����� ������� � ����
    int sum[SIZE]{};//����� �� ������(���)
    int sum_per_year{};
    

    const char* pmonths[SIZE]{ "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December" };
    /*std::string pmonths[SIZE]{
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};*/
        //���� ����� ��� � ������ ����������, �� ������ �������� ���� string

    srand(time(NULL));
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << "Books sold in " << pmonths[i] << ": ";
        sum[i] = 10 + rand() % 90;
        std::cout << sum[i] << std::endl;
        sum_per_year += sum[i];
    }
    std::cout << "\nSum of sold books per year: " << sum_per_year << std::endl;
 
    std::cout << std::endl;
    system("pause");
    return 0;
}