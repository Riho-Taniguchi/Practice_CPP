#include <iostream>
#include <string>

int main ()
{
    int val = 123456;
    std::string str = std::to_string(val);
    std::cout << str << std::endl;

    int val2 = std::stol(str, nullptr, 10);
    std::cout << val2 << std::endl;
}