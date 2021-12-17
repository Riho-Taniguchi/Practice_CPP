#include <iostream>

template <typename T>
void show(T)
{
    std::cout << "Not int" << std::endl;
}

template <>
void show<int>(int i)
{
    std::cout << i << std::endl;
}


int main ()
{
    show("Hello");
    show(0);
}