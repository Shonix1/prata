#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    long double kilometersValue=0;
    long double litresValue=0;
    cout<<"������� ���������� ���������� ����������: ";
    cin>>kilometersValue;
    cout<<"������� ���������� ���������������� ������� � ������: ";
    cin>>litresValue;

    cout<<"���������� ������ "<<(litresValue*100)/kilometersValue<<" �� 100 ����������: "<<endl;

    const long double mileInKilometers=1.609;
    const long double gallonInLitres=3.785;

    long double milesPerGallon=(kilometersValue*gallonInLitres)/(litresValue*mileInKilometers);
    cout<<"���������� ���� �� ������: "<<milesPerGallon<<endl;
    return 0;
}
