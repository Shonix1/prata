/*
����� �� �������� � ����������������� ����� ������������� (���),
� ��� ����� ���������� �� ���������� ��� �� ������ ��������� �����, 
�� ��������� ���� ���������� ����� ���. �������� ���������, 
������� ����� �������� ������ ������ �� �������� ������, 
����������, ��������� ������ ���� �� ������������ ������ 
�����. � ������ �������� ��������� ���������.
// ��������� ���� ������������������ ������ �������������
� ���� ��������� �������� ��������� ������ ����� �������� � 
��������������� ��� ���������������� ����������. ����� 
��������� �������� ����, ������� ���� ����������� ������������
�������� ������ ������������:
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
�������� ��������, ��� �display by preference" 
(���������� �� �������������) �� ��������, ��� ����� 
���������� ���� preference; ��� ������, ��� ���������� 
���������� ���� ���������, ������� ������������� ��������
preference. ��������, ���� preference ����� 1, �� ����� d 
������ ������� ����������� ��������� ������� ������������. 
������ ������� ���� ��������� ����� ���������� ��������� �������:
Benevolent Order of Programmers Report
a. display by name b. display by title
c. display by bopname d. display by preference
q. quit
Enter your choice: a
Wimp Macho
Raki Rhodes
Celia Laiter
Hoppy Hipnan
Pat Hand
Next choice: d
Wimp Macho
Junior Programmer
MIPS
Analyst Trainee LOOPY
Next choice: q 
Bye !
*/

#include <iostream>

const int strsize = 80;
struct bop {
    char fullname[strsize]{};   //�������� ���
    char title[strsize]{};      //���������
    char bopname[strsize]{};    //��������� ��� ���
    int preference{};             //0 = ������ ���, 1 = �����, 2 = ��� ���
};

int main()
{
    setlocale(LC_ALL, "Rus");
    const int SIZE = 5;
    bool flag = 0;
    char user_variable{};
    std::cout << "Benevolent Order of Programmers Report\n";
    std::cout << "a. display by name\tb. display by title\n";
    std::cout << "c. display by bopname\td. display by preference\n";
    std::cout << "q. quit\n";

    bop member[SIZE]{};
   
    member[0] = {
        "Millie - Rose Patrick",
        "Prostitute",
        "Silhouette",
        1
    };

    member[1] = {
        "Blade Molloy",
        "Social worker",
        "Tiger",
        0
    };

    member[2] = {
        "Rui Landry",
        "Anthropologist",
        "Auburn",
        2
    };

    member[3] = {
        "Kornelia Trevino",
        "Software consultant",
        "Blackie",
        1
    };

    member[4] = {
        "Kali Hodson",
        "Traffic warden",
        "Jellylorum",
        0
    };

    std::cout << "Enter your choice: ";
    std::cin >> user_variable;
    while (flag != 1) {
        switch (user_variable)
        {
        case('a'):
        case('A'): {
            for (int i = 0; i < SIZE; ++i)
            {
                std::cout << member[i].fullname << std::endl;
            }
            std::cout << std::endl;
            std::cout << "Next choice: ";
            std::cin >> user_variable;
            break;
        };
        case('b'):
        case('B'): {
            for (int i = 0; i < SIZE; ++i)
            {
                std::cout << member[i].title << std::endl;
            }
            std::cout << std::endl;
            std::cout << "Next choice: ";
            std::cin >> user_variable;
            break;
        };
        case('c'):
        case('C'): {
            for (int i = 0; i < SIZE; ++i)
            {
                std::cout << member[i].bopname << std::endl;
            }
            std::cout << std::endl;
            std::cout << "Next choice: ";
            std::cin >> user_variable;
            break;
        };
        case('d'):
        case('D'): {
            for (int i = 0; i < SIZE; ++i)
            {
                if (member[i].preference == 0) {
                    std::cout << member[i].fullname << std::endl;
                }
                else if (member[i].preference == 1) {
                    std::cout << member[i].title << std::endl;
                }
                else
                {
                    std::cout << member[i].bopname << std::endl;
                }
            }
            std::cout << std::endl;
            std::cout << "Next choice: ";
            std::cin >> user_variable;
            break;
        };
        case('q'):
        case('Q'): {
            std::cout << "Bye!\n";
            flag = 1;
            break;
        };
        default: {
            std::cout << "Wrong input! Try again: ";
            std::cin >> user_variable;
            break;
        }
        }
    }

    std::cout << std::endl;
    system("pause");
    return 0;
}