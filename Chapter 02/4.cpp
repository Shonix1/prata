#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int userAge=0;
    cout<<"¬ведите выш возраст полных лет: ";
    cin>>userAge;
    cout<<"¬аш возраст в мес€цах будет равен "<<userAge*12<<endl;

    return 0;
}

