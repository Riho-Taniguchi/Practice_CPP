#include <iostream>

// sum()関数をここに定義する
int sum (int a, int b, int c)
{
    return a + b + c;
}

int main ()
{
    std::cout << "sum(5, 1, -2): " << sum(5, 1, -2) std::endl;
}