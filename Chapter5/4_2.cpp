#include <iostream>

class A
{
    int value;

public :
    A ();
    A (int v);
};

A::A ()
{
    std::cout << "デフォルトコンストラクターが呼ばれた" << std::endl;
}

A::A (int v) : value(v)
{
    std::cout << "引数1つのコンストラクターが呼ばれた" << std::endl;
}

int main ()
{
    A* a_array = new A[3]
    {
        {1},
        {2},
        {}
    };
}