#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int celsiusValue=0;
    cout<<"���������� ������� ����������� � �������� �������: ";
    cin>>celsiusValue;
    cout<<celsiusValue<<" �������� ������� ����� ����� "<<1.8*celsiusValue+32<<" �������� �� �����������"<<endl;
    return 0;
}

