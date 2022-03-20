/*
Напишите программу, которая использует массив char и цикл 
для чтения по одному слову за раз до тех пор, пока нс будет 
введено слово done. Затем программа должна сообщить 
количество введенных слов (исключая done). Пример запуска 
должен быть таким:

Вводите слова (для завершения введите слово done):
antoator birthday category dumpster envy 
finagle geometry done for sure

Вы ввели 1 слов.

Вы должны включить заголовочный файл cstring и 
применять функцию strcmp() для выполнения проверки.
*/

#include <iostream>
#include <cstring>

int main()
{
    setlocale(LC_ALL, "Rus");

    const int SIZE = 20;
    char user_word[20]{};
    int count_of_word{};
    std::cout << "Введите слова (для завершения введите слово done):\n";

    while (std::strcmp(user_word, "done")) {
        
        std::cin >> user_word;
        std::cin.get();
        ++count_of_word;
        
    }
    std::cout << "Вы ввели " << --count_of_word << " слов.\n";



    std::cout << std::endl;
    system("pause");
    return 0;
}