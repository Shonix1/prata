/*
Ќапишите предшественник программы, управл€емой меню. 
ќна должна отображать меню из четырех пунктов, каждый
из них помечен буквой. ≈сли пользователь вводит букву, 
отличающуюс€ от четырех допустимых, программа должна 
повторно приглашать его ввести правильное значение до 
тех пор, пока он этого не сделает. «атем она должна 
выполнить некоторое простое действие на основе 
пользовательского выбора. 
–абота программы должна выгл€деть примерно так:
Please enter one of the following choices:
c) carnivore    p) pianist
t) tree         g) game
Please enter a c, t, p or g:f
Please enter a c, t, p or g:g
Game and WutFace!
*/

#include <iostream>


int main()
{
    setlocale(LC_ALL, "Rus");
    
    char user_variable{};
    bool flag = 0;
    std::cout << "Please enter one of the following choices:\n";
    std::cout << "c) carnivore\tp) pianist\n";
    std::cout << "t) tree\t\tg) game\n";
    std::cin >> user_variable;

    do {
        switch (user_variable) {
        case ('c'):
        case ('C'): {
            std::cout << "Carnivore and ZULUL!\n";
            flag = 1;
            break;
        };
        case ('t'):
        case ('T'): {
            std::cout << "Tree and OMEGALUL!\n";
            flag = 1;
            break;
        };
        case ('p'):
        case ('P'): {
            std::cout << "Pianist and YEP!\n";
            flag = 1;
            break;
        };
        case ('g'):
        case ('G'): {
            std::cout << "Game and WutFace!\n"; 
            flag = 1;
            break;
        };
        default: {
            std::cout << "Please enter a c, t, p or g:";
            std::cin >> user_variable;
        }
        }
    } while (!flag);

    std::cout << std::endl;
    system("pause");
    return 0;
}