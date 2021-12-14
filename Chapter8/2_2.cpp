#include <iostream>

int main ()
{
    std::cout.setf(std::ios::oct, std::ios::basefield);

    std::cout.width(8);
    std::cout.fill('-');
    std::cout << 1234 << std::endl;
}