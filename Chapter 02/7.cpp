#include <iostream>
//������� ����� � ����� � ������� � �������� �� ����� ����� ������� ����������� �������������.
using namespace std;

void showTime(int hourValue, int minutesValue);

int main()
{
    setlocale(LC_ALL, "Rus");

    int hourNumber=0;
    int minutesNumber=0;
    cout<<"������� ����� � �����: ";
    cin>>hourNumber;

    cout<<"������� ����� � �������: ";
    cin>>minutesNumber;

    showTime(hourNumber, minutesNumber);
    return 0;
}

void showTime(int hourValue, int minutesValue)
{
    cout<<"�����: "<<hourValue<<":"<<minutesValue<<endl;
}
