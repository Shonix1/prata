/*
�������� ���������, ������� ������ ����� �� ������ �� ���, 
���� �� ����� ������� ��������� ����� q. ����� ����� ��������� 
������ �������� ���������� ����, ������������ � �������, 
���������� ����, ������������ � ���������, � ����� ���������� 
����, �� ���������� �� � ���� �� ���� ���������. ����� �� 
��������� �������� ����� ���� ���������� isalpha () ��� ����������
����, ������������ � ����, � ���������, � ����������� ����������� if ���
switch ��� ������������� ��� ����, ��������� �������� isalphaO, 
������� ���������� � �������. ������ ������� ����� ��������� ���:
Enter words (q to quit) :
The 12 awesome oxen ambled 
quietly across 15 meters of lawn, q
5 words beginning with vowels
4 words beginning with consonants
2 others
*/

#include <iostream>
#include <string>
#include <cctype>

int main()
{
    setlocale(LC_ALL, "Rus");

    std::string user_word{};

    int vowels = 0;
    int consonants = 0;
    int others = 0;

    std::cout << "Enter words (q to quit):\n";
    while (std::cin >> user_word && user_word != "q") {

        if (isalpha(user_word[0])) {

            switch (user_word[0]) {

            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'y': case 'Y':
            case 'o': case 'O':
            case 'u': case 'U':++vowels;
                break;
            default:++consonants;
                break;
            }
        } 
        else 
            ++others;
    }

    std::cout << vowels << " words beginning with vowels\n";
    std::cout << consonants << " words beginning with consonants\n";
    std::cout << others << " others\n";

    std::cout << std::endl;
    system("pause");
    return 0;
}
