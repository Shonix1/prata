/*
вместо массива char использовать для ввода string
*/

#include <iostream>
#include <string>


int main()
{
    setlocale(LC_ALL, "Rus");


    std::string name{};
    std::string desert{};

    std::cout << "Enter your name: ";
    getline(std::cin, name);
    std::cout << "Enter your favorite desert: ";
    getline(std::cin, desert);

    std::cout << "I have some delicious " << desert << " for you, " << name << std::endl;

    std::cout << std::endl;
    system("pause");
    return 0;
}