#include <iostream>
#include <tuple>

int main ()
{
    std::tuple t{std::string{"ID"}, 2};
    auto [a, b] = t;

    std::cout << a << " : " << b << std::endl;
}