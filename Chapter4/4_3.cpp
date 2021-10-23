#include <iostream>

int main()
{
    int i = 42;

    if (int i = 0; i > 0)
    {
        std::cout << "if: " << i << std::endl;
    }
    else
    {
        std::cout << "else: " << i << std::endl;
    }
}

/*
 * スコープ内のiが0になり、条件を満たさないので、elseの方に分岐する。
 * elseでもif文のスコープの中なので、0の方のiが出力される。
 */