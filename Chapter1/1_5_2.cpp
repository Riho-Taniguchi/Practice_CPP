#include <iomanip>
#include <iostream>

int main ()
{
    float f = 100.001f;

    std::cout << f << std::endl;
    std::cout << std::fixed << std::setprecision(10) << f << std::endl;

    f -= 100;
    std::cout << f << std::endl;
}

/*
 * float型は浮動小数点数で、0.001は2進数では無限小数のため、100.001fはfに収まらない。
 * 7行目は表示するための誤差が入り100.001となるが、8行目は小数点第十位まで表示される
 * ため誤差が減り、100.001と表示されない。
 * 12行目では、100引かれたことで表示される桁の範囲が変わり、0.001と表示されなくなる。
 */