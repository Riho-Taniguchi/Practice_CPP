#include <iostream>

template <typename T>
T id (T t)
{
    return t;
}

int main ()
{
    int i = 3;
    std::cout << id(i) << std::endl;

    float f = 3.14f;
    std::cout << id(f) << std::endl;

    char c = 'A';
    std::cout << id(c) << std::endl;
    
    std::string str = "Hello!";
    std::cout << id(str) << std::endl;
}