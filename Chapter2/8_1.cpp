#include <iostream>

int main()
{
    auto show_value = [](int v) -> void
    {
        std::cout << v << std::endl;
    };

    show_value(42);
}