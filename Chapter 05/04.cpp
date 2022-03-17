/*
Дафна инвестировала $100 под простые 10%. Другими словами,
ежегодно инвестиция должна приносить 10% инвестированной суммы, т.с. $10 каждый год;

прибыль = 0,10 х исходный баланс

В то же время Клео инвестировала $100 под сложные 5%.
Это значит, что прибыль составит 5% от текущего баланса,
включая предыдущую накопленную прибыль: прибыль = 0,05 х текущий баланс

Клео зарабатывает 5% от $100 в первый год, что дает ей $105. 
На следующий год она зарабатывает 5% от $105, что составляет $5.25,
и т.д. Напишите программу, которая вычислит, сколько лет понадобится 
для того, чтобы сумма баланса Клео превысила сумму баланса Дафны, с
отображением значений обоих балансов за каждый год.
*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Rus");
    
    double dafna_start_value = 100;
    double dafna_investments = 0.1;
    double dafna_main_value = 100;

    double kleo_main_value = 100;
    double kleo_investments = 0.05;
    int year = 0;
    double temp = 0;

    do
    {   
        temp = dafna_start_value * dafna_investments;       
        dafna_main_value +=temp;

        temp = kleo_main_value * kleo_investments;
        kleo_main_value += temp;
        ++year;
    } while (kleo_main_value < dafna_main_value);

    std::cout << "Дафна: " << dafna_main_value << std::endl;
    std::cout << "Клео: " << kleo_main_value << std::endl;
    std::cout << "Год в котором Клео имеет на счёте больше чем Клео: " << year << std::endl;

    std::cout << std::endl;
    system("pause");
    return 0;
}