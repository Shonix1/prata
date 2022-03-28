/*
Ќапишите программу на C++, котора€ выдает запрос на ввод 
рассто€ни€  в фарлонгах и преобразует его в €рды. 
(ќдин фарлонг равен 220 €рдам, или 201168м.)

Write a C++ program that asks for a distance in
furlongs and converts it to yards. 
(One furlong is 220 yards.)
*/

#include <iostream>


int main()
{
    int farlongValue = 0;
    std::cout << "Enter the distance in furlongs: ";
    std::cin >> farlongValue;
    std::cout << "Distance " << farlongValue << " furlong, equal " << farlongValue * 220 << " yard" << std::endl;
    system("pause");
    return 0;
}
