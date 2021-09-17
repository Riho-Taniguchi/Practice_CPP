#include <iostream>

int main ()
{
    std::string string = "ab\0cd";

    std::cout << string << std::endl;
}