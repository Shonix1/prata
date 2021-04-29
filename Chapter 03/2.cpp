#include<iostream>

using namespace std;

int count_BMI(double heightValueFt, double heightValueIn, double weightValue);

//��������� ������������ BMI ������������

int main()
{
	setlocale(LC_ALL, "Rus");

	double userHeightFt = 0, userHeightIn=0, userWeight=0;
	cout <<"������� ��� ���� � �����: ";
	cin >> userHeightFt;

	cout << " � � ������: ";
	cin >> userHeightIn;

	cout << "������� ���� ����� � ������: ";
	cin >> userWeight;

	count_BMI(userHeightFt, userHeightIn, userWeight);

	return 0;
}

int count_BMI(double heightValueFt, double heightValueIn, double weightValue)
{
	double temp = 0;
	const double ft_Value = 12; //1 ��� ����� 12 ������
	const double in_Value = 0.0254; //1 ���� ����� 0.0254 �
	const double weight_Value = 2.2; // 1 ���� ����� 2.2 ��

	heightValueIn = heightValueFt * ft_Value + heightValueIn; // �������������� ����� � ������ � ����� � ������
	temp = heightValueIn * in_Value; //�������������� ����� � ������ � �����
	weightValue = weightValue / weight_Value; // �������������� ����� � ������ � ����������
	
	cout << "��� ���� � ������: " << temp << endl;
	cout << "���� ����� � �����������: " << weightValue << endl;
	cout << "��� BMI: " << weightValue / pow(temp, 2) << endl;

	return 0;
}