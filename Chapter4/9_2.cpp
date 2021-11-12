#include <iostream>

void print_1 ()
{
    std::cout << "1" << std::endl;
}

void print_2 ()
{
    std::cout << "2" << std::endl;
}

int main ()
{
    print_1();

// print_1をprint_2に置き換える
#define print_1 print_2

    print_1();
}