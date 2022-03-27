/*
Постройте программу, которая отслеживает 
пожертвования в Общество Защиты Влиятельных Лиц. 
Она должна запрашивать у пользователя количество 
меценатов, а затем приглашать вводить их имена и 
суммы пожертвований от каждого. Информация должна
сохраняться в динамически выделяемом массиве структур. 
Каждая структура должна иметь два члена: символьный массив 
(или объект string) для хранения имени и переменную-член типа
double — для хранения суммы пожертвования. После чтения всех
данных программа должна отображать имена и суммы пожертвований
тех, кто не пожалел $10 000 и более. Этот список должен быть 
озаглавлен меткой “Grand Patrons”. После этого программа должна
выдать список остальных жертвователей. Он должен быть озаглавлен 
"Patrons”. Если в одной из двух категорий не окажется никого, 
программа должна напечатать “попе”. Помимо отображения двух 
категорий, ника¬кой другой сортировки делать не нужно
*/

#include <iostream>
#include <string>

struct society {
    std::string name{};
    double donate_value{};
};

int main()
{
    setlocale(LC_ALL, "Rus");

    int count_of_mecenatov{};
    int empty_value_for_parteon{}; // для подсчёта пустых значений и выводу none
    int empty_value_for_grand_parteon{}; //для подсчёта пустых значений и выводу none
    std::cout << "\t\tSociety of Hell\n"; //haHAA
    std::cout << "Enter the amount of members: ";
    std::cin >> count_of_mecenatov;
    while (std::cin.fail()) {
        if (isdigit(count_of_mecenatov) == false) {
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cout << "Enter the amount of members: ";
            std::cin >> count_of_mecenatov;
        }
        else {
            break;
        } 
    }
    std::cin.get();
    society* society_member = new society[count_of_mecenatov];

    for (int i = 0; i < count_of_mecenatov; ++i)
    {
        std::cout << "Member № " << i + 1 << ": ";
        std::getline(std::cin, society_member[i].name);
        std::cout << "Donated: ";
        std::cin >> society_member[i].donate_value;
        while (std::cin.fail()) {
            if (isdigit(society_member[i].donate_value) == false) {
                std::cin.clear();
                std::cin.ignore(256, '\n');
                std::cout << "Enter the donate value: ";
                std::cin >> society_member[i].donate_value;
            }
            else {
                break;
            }
        }

        std::cin.get();
        if (society_member[i].donate_value <= 0 || society_member[i].donate_value >= 10000 || society_member[i].name.empty()) {
            ++empty_value_for_parteon;
        }
        if (society_member[i].donate_value < 10000 || society_member[i].name.empty()) {
            ++empty_value_for_grand_parteon;
        }
    }

    std::cout << "\t\tGrand Patrons\n";

    if (empty_value_for_grand_parteon == count_of_mecenatov) {
        std::cout << "none";
    };

    for (int i = 0; i < count_of_mecenatov; ++i)
    {

        if (society_member[i].name.empty()) {
            continue;
        }
        else {
            if (society_member[i].donate_value >= 10000) {
                std::cout << society_member[i].name << "\t" << "$" << society_member[i].donate_value << std::endl;
            }
            else {
                continue;
            }
        }
    }
    std::cout << std::endl;
    std::cout << "\t\tPatrons\n";

    if (empty_value_for_parteon == count_of_mecenatov) {
        std::cout << "none";
    }
    for (int i = 0; i < count_of_mecenatov; ++i)
    {
        if (society_member[i].name.empty()) {
            continue;
        }
        else {
            if (society_member[i].donate_value <= 0) {
                continue;
            }

            if (society_member[i].donate_value < 10000 && society_member[i].donate_value > 0) {
                std::cout << society_member[i].name << "\t" << "$" << society_member[i].donate_value << std::endl;
            }
            else {
                continue;
            }
        } 
    }
    std::cout << std::endl;

    delete[] society_member;
    society_member = nullptr;

    std::cout << std::endl;
    system("pause");
    return 0;
}
