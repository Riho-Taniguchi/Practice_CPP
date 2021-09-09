#include <iostream>

int main ()
{
    float f = 100.001f;
    f -= 100;
    std::cout << f << std::endl;
}

/*
 * 100.001から100を引く際の中間結果を格納する
 * 領域の桁数不足
 */