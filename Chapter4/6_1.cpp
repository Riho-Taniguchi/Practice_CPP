#include <iostream>

inline void print_str (std::string str)
{
    std::cout << str << std::endl;
}

int main ()
{
    print_str("Hello!");
}