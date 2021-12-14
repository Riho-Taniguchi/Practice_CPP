#include <iostream>

int main ()
{
    std::cout.setf(std::ios::hex);
    std::cout.unsetf(std::ios::dec);
    std::cout.setf(std::ios::left);
    std::cout.width(16);
    std::cout.fill('=');

    std::cout << 1234567 << std::endl;
}