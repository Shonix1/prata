#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    double milesValue=0;

    cout<<"������� ���������� ���������������� ������� � �������� ����������� �� 100 ��: ";
    cin>>milesValue;


    const double milesPerKilometers = 62.14; // 100��=62.14 ����
    const double gallonPerLitres=3.785; // 1 ������ = 3.875 �����

    cout<<"������ "<<milesValue<<" ������ �� 100 �� ����� ����� "<<(milesPerKilometers/milesValue)*gallonPerLitres<<endl;

    return 0;
}
