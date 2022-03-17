/*
ѕредположим, что вы продаете книгу по программированию
па €зыке C++ дл€ начинающих. Ќапишите программу, котора€ 
позволит ввести ежемес€чные объемы продаж в течение года
(в количестве книг, а не в деньгах). ѕрограмма должна
использовать цикл, в котором выводитс€ приглашение с 
названием мес€ца, примен€€ массив указателей на char 
(или массив объектов string, если вы предпочитаете его), 
инициализированный строками Ч названи€ми мес€цев, и 
сохран€€ введенные значени€ в массиве int. «атем программа 
должна найти сумму содержимого массива и выдать
общий объем продаж за год.
*/

#include <iostream>
#include <string>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    const int SIZE = 12;//число мес€цев в году
    int sum[SIZE]{};//сумма за период(год)
    int sum_per_year{};
    

    const char* pmonths[SIZE]{ "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December" };
    /*std::string pmonths[SIZE]{
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};*/
        //тоже самое что и массив указателей, но массив объектов типа string

    srand(time(NULL));
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << "Books sold in " << pmonths[i] << ": ";
        sum[i] = 10 + rand() % 90;
        std::cout << sum[i] << std::endl;
        sum_per_year += sum[i];
    }
    std::cout << "\nSum of sold books per year: " << sum_per_year << std::endl;
 
    std::cout << std::endl;
    system("pause");
    return 0;
}