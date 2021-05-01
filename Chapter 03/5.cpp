#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    long long peopleOfEarthNumber=0;
    long long peopleOfUSANumber=0;

    cout<<"Введите текущую численность планеты Земля: ";
    cin>>peopleOfEarthNumber;
    cout<<"Введите текущую численность США: ";
    cin>>peopleOfUSANumber;

    cout<<"Численность населения США "<<(peopleOfUSANumber*100.0)/peopleOfEarthNumber<<"% от численность населения Мира!"<<endl;
    return 0;
}
