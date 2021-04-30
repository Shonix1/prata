#include<iostream>

using namespace std;

int countLatitude(double degreeVariable, double minutesValuable, double secondsValuable);

int main()
{
	setlocale(LC_ALL, "Rus");

	double degreeValue = 0, minutesValue = 0,  secondsValue = 0;

	cout << "Введите широту в градусах, минутах, и секундах:" << endl;
	cout << "Градусов: ";
	cin >> degreeValue;
	cout << "Минут: ";
	cin >> minutesValue;
	cout << "Секунд: ";
	cin >> secondsValue;

	countLatitude(degreeValue, minutesValue, secondsValue);

	return 0;
}
int countLatitude(double degreeVariable, double minutesValuable, double secondsValuable)
{
	const double secondPerMinute = 60; // 1 минута = 60 угловых секунд
	const double minutePerDegree = 60; // 1 градус = 60 угловых минут

	double temp = 0;
	temp = degreeVariable + (minutesValuable/ minutePerDegree) + (secondsValuable / pow(secondPerMinute,2));
	cout << degreeVariable<<" градусов "<<minutesValuable<<" минут "<<secondsValuable<<" секунд = "<<temp<<" градусов"<< endl;
	return 0;
}