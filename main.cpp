#include <iostream>

using namespace std;

enum levelsName{parking, bank, insurance, exchange, showroom, Restaurant};

int main()
{
    setlocale(LC_ALL, "Rus");

    int floor=parking; //����� ������������ - ����� �����
    int exitOrNot=1; // ����� ��� ���

    while(exitOrNot==1)
    {
        cout<<"����� ����� (0, 1, 2, 3, 4, 5): ";
        cin>>floor;
        switch (floor)
        {
            case (parking):
                cout<<"\a\a\a�� � ��������!\n\n";
                break;

            case (bank):
                cout<<"\a\a\a������ ����!";
                cout<<"\n����� ��������� ����� �������� ����.\n\n";
                break;

            case (insurance):
                cout<<"\a\a\a������ ����!";
                cout<<"\n��������� �������� UNICA.\n\n";
                break;

            case (exchange):
                cout<<"\a\a\a������ ����!";
                cout<<"\n�������� �����.\n\n";
                break;

            case (showroom):
                cout<<"\a\a\a�������� ����!";
                cout<<"\n����������� ��� � ��� �����������.\n\n";
                break;

            case (Restaurant):
                cout<<"\a\a\a����� ����!";
                cout<<"\n�������� Sky\n\n";
                break;

            default: cout<<"\a\a\a������!\n\n";
        }
        cout<<"����� �� ����� - ������� 0.\n";
        cout<<"������� ������ ���� - ������� 1: ";
        do
        {
            cin>>exitOrNot;
        } while (exitOrNot!=0 && exitOrNot!=1);
        cout<<endl;
    }
    return 0;
}
