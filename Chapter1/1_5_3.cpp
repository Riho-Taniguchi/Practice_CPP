#include <iostream>

int main ()
{
    int i = 0;

    int* pi = &i;
    *pi = 42;

    std::cout << i << std::endl;
}