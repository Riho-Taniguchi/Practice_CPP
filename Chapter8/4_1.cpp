#include <iostream>
#include <iomanip>

int main ()
{
    std::cout << std::right << std::setfill('0') << std::setw(8)
        << 1234 << std::endl;
}