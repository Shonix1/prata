/*

*/

#include <iostream>


void firstPhrase();
void secondPhrase();
int main()
{
    firstPhrase();
    firstPhrase();
    secondPhrase();
    secondPhrase();
    return 0;
}

void firstPhrase()
{
    std::cout << "Three blind mice" << std::endl;
}
void secondPhrase()
{
    std::cout << "See how they run" << std::endl;
}
