#include<iostream>

using namespace std;

int countLatitude(double degreeVariable, double minutesValuable, double secondsValuable);

int main()
{
	setlocale(LC_ALL, "Rus");

	double degreeValue = 0, minutesValue = 0,  secondsValue = 0;

	cout << "������� ������ � ��������, �������, � ��������:" << endl;
	cout << "��������: ";
	cin >> degreeValue;
	cout << "�����: ";
	cin >> minutesValue;
	cout << "������: ";
	cin >> secondsValue;

	countLatitude(degreeValue, minutesValue, secondsValue);

	return 0;
}
int countLatitude(double degreeVariable, double minutesValuable, double secondsValuable)
{
	const double secondPerMinute = 60; // 1 ������ = 60 ������� ������
	const double minutePerDegree = 60; // 1 ������ = 60 ������� �����

	double temp = 0;
	temp = degreeVariable + (minutesValuable/ minutePerDegree) + (secondsValuable / pow(secondPerMinute,2));
	cout << degreeVariable<<" �������� "<<minutesValuable<<" ����� "<<secondsValuable<<" ������ = "<<temp<<" ��������"<< endl;
	return 0;
}