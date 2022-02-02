/*
Напишите программу C++, которая запрашивает и отображает информацию, как показано в следующем примере вывода:
What is your first папе? Betty Sue
What is your last name? Ycwe
What letter grade do you deserve? В
what is your age? 22
Name: Yewe, Betty Sue
Grade: C
Age: 22
Обратите внимание, что программа должна принимать имена, состоящие из более чем одного слова.
*/
#include <iostream>
#include <string>

struct Student
{
    std::string first_name{};
    std::string last_name{};
    char grade_wish{};
    int age{};
};

void enter_the_data(Student &group_A)
{
    std::cout << "What is your first name? ";
    std::getline(std::cin, group_A.first_name);

    std::cout << "What is your last name? ";
    std::getline(std::cin, group_A.last_name);

    std::cout << "What letter grade do you deserve? ";
    std::cin >> group_A.grade_wish;

    std::cout << "What is your age? ";
    std::cin >> group_A.age;
}

void show_the_data(Student& group_A)
{
    std::cout << "Name: " << group_A.first_name<<", "<<group_A.last_name << std::endl;
    std::cout << "Grade: " << group_A.grade_wish << std::endl;
    std::cout << "Age: " << group_A.age<< std::endl;
}


int main()
{
    setlocale(LC_ALL, "Rus");
      
    Student group_A;

    enter_the_data(group_A);
    show_the_data(group_A);


    std::cout << std::endl;
    system("pause");
    return 0;
}
