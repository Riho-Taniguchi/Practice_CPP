#include <iostream>
#include <charconv>

int main ()
{
    char a[] = "3.14159265";

    double val;
    std::from_chars(std::begin(a), std::end(a), val);
    std::cout << val << std::endl;

    // これで動くはずなのに動かない、std::from_charsの問題？コンパイラの問題？
}