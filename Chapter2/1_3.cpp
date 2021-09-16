#include <iostream>

struct S 
{
    int x;
    int y;
};

union U
{
    S s;
};

int main ()
{
    U u = {};
    u.s.x = 10;
    u.s.y = 20;

    std::cout << u.s.x << std::endl;
}

/*
 * uは共用体だが、その中の構造体の要素同士はアドレスが異なる
 * そのため、u.s.xとu.s.yはアドレスが異なり、それぞれに10と20が入る
 * よって、この出力は10となる
 */