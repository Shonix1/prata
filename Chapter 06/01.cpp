/*
Напишите программу, которая читает клавиатурный ввод
до символа 0 и повторяет его, за исключением десятичных 
цифр, преобразуя каждую букву верхнего регистра в 
букву нижнего регистра и наоборот. 
(Не забудьте о семействе функций cctype.)
*/

#include <iostream>
#include <cctype>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    char user_value{};
    std::cout << "Введите слово или букву <чтобы завершить ввод нажмите @>:\n";
    while (user_value != '@') {
        
        std::cin.get(user_value);
        if (isdigit(user_value)) {
            continue;
        }
        else if (islower(user_value)) {
            user_value = toupper(user_value);
        }
        else {
            user_value = tolower(user_value);
        }
        std::cout << user_value;
    } 


    std::cout << std::endl;
    system("pause");
    return 0;
}