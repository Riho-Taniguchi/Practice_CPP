#include <iostream>
#include <string>

int main ()
{
    std::string a = "Hello, World!";

    const char* c_str = a.data();
    for (int i = 0; c_str[i] != 0; i++)
    {
        std::cout << c_str[i];
    }
    std::cout << std::endl;
}