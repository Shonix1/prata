#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    double milesValue=0;

    cout<<"Введите количество израсходованного бензина в галлонах автомобилем на 100 км: ";
    cin>>milesValue;


    const double milesPerKilometers = 62.14; // 100км=62.14 миль
    const double gallonPerLitres=3.785; // 1 галлон = 3.875 литра

    cout<<"Расход "<<milesValue<<" литров на 100 км будет равен "<<(milesPerKilometers/milesValue)*gallonPerLitres<<endl;

    return 0;
}
