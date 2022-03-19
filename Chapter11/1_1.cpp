#include <iostream>
#include <typeinfo>

int main ()
{
    auto show1 = []() -> int { return 42; };
    auto show2 = []() -> int { return 42; };
    const std::type_info& type1 = typeid(show1);
    const std::type_info& type2 = typeid(show2);

    std::cout << (type1 == type2) << std::endl;
}