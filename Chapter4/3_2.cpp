#include <iostream>

int get_counter()
{
    static int counter = 0;
    return counter++;
}

int main()
{
    std::cout << get_counter() << std::endl;
    std::cout << get_counter() << std::endl;
    std::cout << get_counter() << std::endl;
}