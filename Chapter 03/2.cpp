#include<iostream>

using namespace std;

int count_BMI(double heightValueFt, double heightValueIn, double weightValue);

//программа рассчитывает BMI пользовател€

int main()
{
	setlocale(LC_ALL, "Rus");

	double userHeightFt = 0, userHeightIn=0, userWeight=0;
	cout <<"¬ведите ваш рост в футах: ";
	cin >> userHeightFt;

	cout << " и в дюймах: ";
	cin >> userHeightIn;

	cout << "¬ведите вашу массу в фунтах: ";
	cin >> userWeight;

	count_BMI(userHeightFt, userHeightIn, userWeight);

	return 0;
}

int count_BMI(double heightValueFt, double heightValueIn, double weightValue)
{
	double temp = 0;
	const double ft_Value = 12; //1 фут равен 12 дюймам
	const double in_Value = 0.0254; //1 дюйм равен 0.0254 м
	const double weight_Value = 2.2; // 1 фунт равен 2.2 кг

	heightValueIn = heightValueFt * ft_Value + heightValueIn; // преобразование роста в дюймах и футах в дюймах
	temp = heightValueIn * in_Value; //преобразование роста в дюймах в метры
	weightValue = weightValue / weight_Value; // преобразование массы в фунтах в килограммы
	
	cout << "¬аш рост в метрах: " << temp << endl;
	cout << "¬аша масса в килограммах: " << weightValue << endl;
	cout << "¬аш BMI: " << weightValue / pow(temp, 2) << endl;

	return 0;
}