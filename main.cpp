#include <iostream>

using namespace std;

enum levelsName{parking, bank, insurance, exchange, showroom, Restaurant};

int main()
{
    setlocale(LC_ALL, "Rus");

    int floor=parking; //выбор пользователя - номер этажа
    int exitOrNot=1; // выйти или нет

    while(exitOrNot==1)
    {
        cout<<"Номер этажа (0, 1, 2, 3, 4, 5): ";
        cin>>floor;
        switch (floor)
        {
            case (parking):
                cout<<"\a\a\aВы в паркинге!\n\n";
                break;

            case (bank):
                cout<<"\a\a\aПервый этаж!";
                cout<<"\nЗдесь находятся Креди Агриколь Банк.\n\n";
                break;

            case (insurance):
                cout<<"\a\a\aВторой этаж!";
                cout<<"\nСтраховая компания UNICA.\n\n";
                break;

            case (exchange):
                cout<<"\a\a\aТретий этаж!";
                cout<<"\nФондовая биржа.\n\n";
                break;

            case (showroom):
                cout<<"\a\a\aЧетвёртый этаж!";
                cout<<"\nВыставочный зал и зал презентаций.\n\n";
                break;

            case (Restaurant):
                cout<<"\a\a\aПятый этаж!";
                cout<<"\nРесторан Sky\n\n";
                break;

            default: cout<<"\a\a\aОшибка!\n\n";
        }
        cout<<"Выйти из лифта - нажмите 0.\n";
        cout<<"Выбрать другой этаж - нажмите 1: ";
        do
        {
            cin>>exitOrNot;
        } while (exitOrNot!=0 && exitOrNot!=1);
        cout<<endl;
    }
    return 0;
}
