#include <iostream>

void print (int& value)
{
    std::cout << "参照：" << value << std::endl;
}

void print (int&& value)
{
    std::cout << "右辺値参照：" << value << std::endl;
}

int main ()
{
    int a = 5;
    print(a);
    print(10);
}