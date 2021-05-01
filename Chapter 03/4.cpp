#include <iostream>

using namespace std;

void countNumber(long long secondsVariable);
int main()
{
    setlocale(LC_ALL, "Rus");

    long long secondsValue=0;
    cout<<"������� ����� � ��������: ";
    cin>>secondsValue;

    countNumber(secondsValue);

    return 0;
}

void countNumber(long long secondsVariable)
{
    long long secondsValue=0, minutesValue=0, hoursValue=0, daysValue=0;
    const long long oneMinute=60; // 1 ������ ����� 60 ������
    const long long oneHour=60; //1 ��� ����� 60 �����
    const long long oneDay=24; // 1 ���� ����� 24 ����
    long long temp=oneDay*oneHour*oneMinute;

    daysValue=secondsVariable/temp;
    hoursValue=(secondsVariable%temp)/(oneHour*oneMinute);
    minutesValue=((secondsVariable%temp)%(oneHour*oneMinute))/oneMinute;
    secondsValue=((secondsVariable%temp)%(oneHour*oneMinute))%oneMinute;

    cout<<secondsVariable<<" ������ = "<<daysValue<<" ���� "<<hoursValue<<" ����� "
        <<minutesValue<<" ����� "<<secondsValue<<" ������"<<endl;
}
