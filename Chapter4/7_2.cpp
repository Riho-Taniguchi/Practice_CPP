#include <iostream>

void print_space ()
{
    std::cout << "global" << std::endl;
}

namespace module
{
    void print_space ()
    {
        std::cout << "module" << std::endl;
    }
}

int main ()
{
    using print = module::print_space;
    print();
}