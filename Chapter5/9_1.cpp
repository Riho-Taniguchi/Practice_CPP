#include <iostream>

void print_zero ()
{
    std::cout << "0" << std::endl;
}

void print_one ()
{
    std::cout << "1" << std::endl;
}

int main ()
{
    void (*print)() = &print_zero;
    print();

    print = &print_one;
    print();
}