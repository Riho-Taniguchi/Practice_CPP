#include <iostream>
#include <string>

int main ()
{
    std::string a = "Hello, World!";

    std::string b{a, 7, 5};
    std::cout << b << std::endl;
}