#include <iostream>

void print (int&& value)
{
    std::cout << value << std::endl;
}

int main ()
{
    int a = 1;
    print((int&&)a);
}