/*
Выполните упражнение 6, по измените его так, чтобы данные 
можно было получать!» из файла. Первым элементом файла должно
быть количество меценатов, а остальная часть состоять из пар строк, 
в которых первая строка содержит имя, а вторая — сумму
пожертвования. То есть файл должен выглядеть примерно так:
4
Sam Stone 
2000
Freida Flass
100500 
Таптпу Tubbs
5000
Rich Raptor 
55000
*/


#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

struct society {
    std::string name{};
    double donate_value{};
};

int main()
{
    setlocale(LC_ALL, "Rus");

    const int SIZE = 60;
    char file_name[SIZE]{};
    std::ifstream inFile;

    std::cout << "Enter name of the file: ";
    std::cin.getline(file_name, SIZE);
    inFile.open(file_name);

    if (!inFile.is_open()) {
        std::cout << "Could not open the file " << file_name << std::endl;
        std::cout << "Program terminating\n";
        exit(EXIT_FAILURE);
    }

    int count_of_mecenatov{};
    int empty_value_for_parteon{}; // для подсчёта пустых значений и выводу none
    int empty_value_for_grand_parteon{}; //для подсчёта пустых значений и выводу none
    std::cout << "\t\tSociety of Hell\n"; //haHAA
    while (inFile.good()) {
        inFile >> count_of_mecenatov;
        inFile.get();
        std::cout << std::endl;
        society* society_member = new society[count_of_mecenatov];

        for (int i = 0; i < count_of_mecenatov; ++i)
        {           
            std::getline(inFile, society_member[i].name);
            inFile >> society_member[i].donate_value;
            inFile.get();           
            if (society_member[i].donate_value <= 0 || society_member[i].donate_value >= 10000 || society_member[i].name.empty()) {
                ++empty_value_for_parteon;
            }
            if (society_member[i].donate_value < 10000 || society_member[i].name.empty()) {
                ++empty_value_for_grand_parteon;
            }
        }
        std::cout << "\t\tGrand Patrons\n\n";

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
        std::cout << "\t\tPatrons\n\n";

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
    }


    
    inFile.close();
    std::cout << std::endl;
    system("pause");
    return 0;
}

