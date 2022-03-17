/*
��������� ���������� 5, �� ��������� ���������
������ ��� ���������� ������ � �������� ��������
�� 3 ����. ������� ����� ����� ������ �� ������
��� � �� ��� ���� ������.
*/

#include <iostream>
#include <string>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    const int SIZE_OF_MONTHS = 12;//����� ������� � ����
    const int SIZE_OF_YEARS = 3;//����� ������� ������, �� ���� �����
    int books_sold[SIZE_OF_YEARS][SIZE_OF_MONTHS]{};//���� ������� �� �����
    int sum_per_year[SIZE_OF_YEARS]{};//����� �� ���
    int sum{};//����� �� ���� ������ ������
    
    const char* psales[SIZE_OF_MONTHS]{ "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December" };
    /*std::string pmonths[SIZE]{
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};*/
        //���� ����� ��� � ������ ����������, �� ������ �������� ���� string

    srand(time(NULL));
    for (int i = 0; i < SIZE_OF_YEARS; ++i)
    {
        for (int j = 0; j < SIZE_OF_MONTHS; ++j)
        {
            std::cout << "Books sold in " << psales[i][j] << ": ";
            books_sold[i][j] = 10 + rand() % 90;
            std::cout << books_sold[i][j] << std::endl;
            sum_per_year[i] += books_sold[i][j];
        }
        std::cout << "Books sold per year " << i + 1 << " = " << sum_per_year[i] << std::endl;
        sum += sum_per_year[i];
        std::cout << std::endl;
    }
    std::cout << "\nThe amount of books sold for the entire period: " << sum << std::endl;
 
    std::cout << std::endl;
    system("pause");
    return 0;
}