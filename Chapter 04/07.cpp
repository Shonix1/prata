/*
¬иль€м ¬ингейт (William Wingate) заведует службой анализа рынка пиццы. ќ каждой пицце он записывает следующую информацию:
Х     наименование компании Ч производител€ пиццы, которое может состо€ть из более чем одного слова;
Х     диаметр пиццы;
Х     вес пиццы.
Х     –азработайте структуру, котора€ может содержать всю эту информацию,
и напишите программу, использующую структурную переменную этого типа. 
ѕрограмма должна запрашивать у пользовател€ каждый из перечисленных 
показателей и затем отображать введенную информацию. ѕримен€йте cin (или его методы) и cout.
*/

#include <iostream>
#include <string>

struct pizza
{
    std::string name{};
    double weight{};
    int diameter{};
};

int main()
{
    setlocale(LC_ALL, "Rus");

    pizza characteristic;

    
    std::cout << "Enter the name of your pizza: ";
    getline(std::cin, characteristic.name);

    std::cout << "Enter the weight of pizza: ";
    std::cin >> characteristic.weight;

    std::cout << "Enter the diameter of pizza: ";
    std::cin >> characteristic.diameter;
    std::cout << std::endl;

    std::cout << "Pizza name: " << characteristic.name << std::endl;
    std::cout << "Weight: " << characteristic.weight << std::endl;
    std::cout << "Diameter: " << characteristic.diameter <<"centimeters" << std::endl;

    std::cout << std::endl;
    system("pause");
    return 0;
}