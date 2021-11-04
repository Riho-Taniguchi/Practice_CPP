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
    print_space();
    module::print_space();
}