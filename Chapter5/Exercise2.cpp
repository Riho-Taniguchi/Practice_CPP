#include <iostream>

void clear (int& value)
{
    value = 0;
}

int main ()
{
    int a = 5;
    clear(a);
    std::cout << a << std::endl;
}