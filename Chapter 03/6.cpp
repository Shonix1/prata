#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    long double kilometersValue=0;
    long double litresValue=0;
    cout<<"Введите количество пройденных километров: ";
    cin>>kilometersValue;
    cout<<"Введите количество израсходованного бензина в литрах: ";
    cin>>litresValue;

    cout<<"Количество литров "<<(litresValue*100)/kilometersValue<<" на 100 километров: "<<endl;

    const long double mileInKilometers=1.609;
    const long double gallonInLitres=3.785;

    long double milesPerGallon=(kilometersValue*gallonInLitres)/(litresValue*mileInKilometers);
    cout<<"Количество миль на галлон: "<<milesPerGallon<<endl;
    return 0;
}
