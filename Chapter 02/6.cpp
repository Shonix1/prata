#include <iostream>
//����� ��������� �������� �������� ��� � ��������������� �������
using namespace std;

void countAstronomicalNumber(double someValue);

int main()
{
    setlocale(LC_ALL, "Rus");

    double lightYearsValue=0;
    cout<<"������� ���������� � �������� �����: ";
    cin>>lightYearsValue;
    countAstronomicalNumber(lightYearsValue);
    return 0;
}

void countAstronomicalNumber(double someValue)
{
    cout<<someValue<<" �������� ��� = "<<someValue*63240<<" ��������������� ������."<<endl;
}
