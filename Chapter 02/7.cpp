#include <iostream>
//введите число в часах и минутах и выведите на экран через функцию определЄнную пользователем.
using namespace std;

void showTime(int hourValue, int minutesValue);

int main()
{
    setlocale(LC_ALL, "Rus");

    int hourNumber=0;
    int minutesNumber=0;
    cout<<"¬ведите число в часах: ";
    cin>>hourNumber;

    cout<<"¬ведите число в минутах: ";
    cin>>minutesNumber;

    showTime(hourNumber, minutesNumber);
    return 0;
}

void showTime(int hourValue, int minutesValue)
{
    cout<<"¬рем€: "<<hourValue<<":"<<minutesValue<<endl;
}
