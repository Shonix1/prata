#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    long long peopleOfEarthNumber=0;
    long long peopleOfUSANumber=0;

    cout<<"������� ������� ����������� ������� �����: ";
    cin>>peopleOfEarthNumber;
    cout<<"������� ������� ����������� ���: ";
    cin>>peopleOfUSANumber;

    cout<<"����������� ��������� ��� "<<(peopleOfUSANumber*100.0)/peopleOfEarthNumber<<"% �� ����������� ��������� ����!"<<endl;
    return 0;
}
