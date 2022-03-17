/*
���������� ��� �� �������� 5.4 � �������������� 
������� array ������ ����������� ������� � ���� 
long double ������ long long. ������� �������� 100!
*/

#include <iostream>
#include <array>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    const int ArSize = 100;
    std::array<long double, ArSize> factorials{};
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; ++i)
    {
        factorials[i] = i * factorials[i - 1];
    }
    for (int i = 0; i < ArSize; ++i)
    {
        std::cout << i << "! = " << factorials[i] << std::endl;
    }

    std::cout << std::endl;
    system("pause");
    return 0;
}