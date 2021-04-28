#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    int farlongValue=0;
    cout<<"Введите расстояние в фарлонгах: ";
    cin>>farlongValue;
    cout<<"Расстояние "<<farlongValue<<" фарлонг, будет равно "<<farlongValue*220<<" ярд"<<endl;
    return 0;
}
