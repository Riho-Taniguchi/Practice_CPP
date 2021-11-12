#include <iostream>

namespace A
{
    namespace B
    {
        namespace C
        {
            void print_hello ()
            {
                std::cout << "Hello!" << std::endl;
            }
        }
    }
}

int main ()
{
    namespace cs = A::B::C;

    cs::print_hello();
}