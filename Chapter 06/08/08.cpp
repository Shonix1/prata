/*
Напишите программу, которая открывает текстовый файл, 
читает его символ за символом до самого конца и сообщает количество символов в файле.
*/

#include <iostream>
#include <fstream>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    std::ifstream fin("some_text.txt");

    char character{};
    int count_of_character{};
    
    while (fin >> character) {
        ++count_of_character;
    }
    
    std::cout << count_of_character << std::endl;
    
    std::cout << std::endl;
    system("pause");
    return 0;
}
