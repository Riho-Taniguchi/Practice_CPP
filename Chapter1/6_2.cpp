#include <iostream>

int main ()
{
    char string[] = "ab\0cd";

    std::cout << string << std::endl;
}

/*
 * ヌル文字が文字列の最後になるように処理されるから
 */