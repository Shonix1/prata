#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    const double ftValue=0.083;
    double userHeight=0;
    cout<<"Введите ваш рост в дюймах:____"<<endl;
    cin>>userHeight;
    cout<<"Ваш рост в дюймах "<<userHeight<<" равен "<<userHeight*ftValue<<" футов."<<endl;

    return 0;
}
