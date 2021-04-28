#include <iostream>
//вывод введЄнного значени€ световых лет в астрономическую единицу
using namespace std;

void countAstronomicalNumber(double someValue);

int main()
{
    setlocale(LC_ALL, "Rus");

    double lightYearsValue=0;
    cout<<"¬ведите рассто€ние в световых годах: ";
    cin>>lightYearsValue;
    countAstronomicalNumber(lightYearsValue);
    return 0;
}

void countAstronomicalNumber(double someValue)
{
    cout<<someValue<<" световых лет = "<<someValue*63240<<" астрономических единиц."<<endl;
}
