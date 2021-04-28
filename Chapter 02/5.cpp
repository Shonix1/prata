#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    int celsiusValue=0;
    cout<<"Пожалуйста введите температуру в градусах Цельсия: ";
    cin>>celsiusValue;
    cout<<celsiusValue<<" градусов Цельсия будет равно "<<1.8*celsiusValue+32<<" градусов по Фарентгейту"<<endl;
    return 0;
}

