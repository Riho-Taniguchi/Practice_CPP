#include <iostream>

int main ()
{
    try
    {
        throw 0;
        std::cout << "出力されない" << std::endl;
    }
    catch (int i)
    {
        std::cout << "出力される" << std::endl;
    }
}