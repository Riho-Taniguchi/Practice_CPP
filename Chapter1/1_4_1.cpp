#include <iostream>

void show_message (int value)
{
    if (10 > value && value >= 20)
    {
        std::cout << "10以上20未満ではありません" << std::endl;
    }
    else
    {
        std::cout << "10以上20未満です" << std::endl;
    }
}

int main ()
{
    show_message(9);
    show_message(15);
    show_message(20);
}