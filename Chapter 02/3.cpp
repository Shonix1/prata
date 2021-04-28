#include <iostream>

using namespace std;

void firstPhrase();
void secondPhrase();
int main()
{
    setlocale(LC_ALL, "Rus");
    firstPhrase();
    firstPhrase();
    secondPhrase();
    secondPhrase();
    return 0;
}

void firstPhrase()
{
    cout<<"Three blind mice"<<endl;
}
void secondPhrase()
{
    cout<<"See how they run"<<endl;
}
