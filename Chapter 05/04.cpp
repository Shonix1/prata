/*
����� ������������� $100 ��� ������� 10%. ������� �������,
�������� ���������� ������ ��������� 10% ��������������� �����, �.�. $10 ������ ���;

������� = 0,10 � �������� ������

� �� �� ����� ���� ������������� $100 ��� ������� 5%.
��� ������, ��� ������� �������� 5% �� �������� �������,
������� ���������� ����������� �������: ������� = 0,05 � ������� ������

���� ������������ 5% �� $100 � ������ ���, ��� ���� �� $105. 
�� ��������� ��� ��� ������������ 5% �� $105, ��� ���������� $5.25,
� �.�. �������� ���������, ������� ��������, ������� ��� ����������� 
��� ����, ����� ����� ������� ���� ��������� ����� ������� �����, �
������������ �������� ����� �������� �� ������ ���.
*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    double dafna_start_value = 100;
    double dafna_investments = 0.1;
    double dafna_main_value = 100;

    double kleo_main_value = 100;
    double kleo_investments = 0.05;
    int year = 0;
    double temp = 0;

    do
    {   
        temp = dafna_start_value * dafna_investments;       
        dafna_main_value +=temp;

        temp = kleo_main_value * kleo_investments;
        kleo_main_value += temp;
        ++year;
    } while (kleo_main_value < dafna_main_value);

    std::cout << "�����: " << dafna_main_value << std::endl;
    std::cout << "����: " << kleo_main_value << std::endl;
    std::cout << "��� � ������� ���� ����� �� ����� ������ ��� ����: " << year << std::endl;

    std::cout << std::endl;
    system("pause");
    return 0;
}