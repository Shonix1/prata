#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    const double ftValue=0.083;
    double userHeight=0;
    cout<<"������� ��� ���� � ������:____"<<endl;
    cin>>userHeight;
    cout<<"��� ���� � ������ "<<userHeight<<" ����� "<<userHeight*ftValue<<" �����."<<endl;

    return 0;
}
