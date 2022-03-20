/*
Напишите программу, соответствующую описанию 
программы из упражнения 8, но с использованием 
объекта string вместо символьного массива.
Включите заголовочный файл string и применяйте
операции отношений для выполнения проверки.
*/

#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Rus");

    std::string user_word{};
    int count_of_word{};
    std::cout << "Введите слова (для завершения введите слово done):\n";

    do {
        
        std::cin >> user_word;
        ++count_of_word;
        
    } while (user_word != "done");
    std::cout << "Вы ввели " << --count_of_word << " слов.\n";



    std::cout << std::endl;
    system("pause");
    return 0;
}