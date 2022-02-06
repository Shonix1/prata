/*
¬ыполните упражнение 7, но с применением 
операции new дл€ размещени€ структуры в 
свободном хранилище вместо объ€влени€ 
структурной перемен≠ной.  роме того, сделайте 
так, чтобы программа сначала запрашивала 
диаметр пиццы, а потом Ч наименование компании.
*/

#include <iostream>
#include <string>

struct pizza
{
    std::string name{};
    double weight{};
    int diameter{};
};

void fill_data(pizza& p_characteristic)
{
    std::cout << "Enter the diameter of pizza: ";
    std::cin >> p_characteristic.diameter;
    std::cin.get();

    std::cout << "Enter the name of your pizza: ";
    getline(std::cin, p_characteristic.name);

    std::cout << "Enter the weight of pizza: ";
    std::cin >> p_characteristic.weight;

    std::cout << std::endl;
}

void show_data(pizza& p_characteristic)
{
    std::cout << "Pizza name: " << p_characteristic.name << std::endl;
    std::cout << "Weight: " << p_characteristic.weight << std::endl;
    std::cout << "Diameter: " << p_characteristic.diameter << " centimeters" << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Rus");

    pizza* p_characteristic = new pizza;

    fill_data(*p_characteristic);   
    show_data(*p_characteristic);

   
    delete p_characteristic;
    p_characteristic = nullptr;

    std::cout << std::endl;
    system("pause");
    return 0;
}