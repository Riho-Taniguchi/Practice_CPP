#include <iostream>

class sample
{
public :
    sample();
    ~sample();
};

sample::sample ()
{
    std::cout << "コンストラクターが呼び出された" << std::endl;
}

sample::~sample ()
{
    std::cout << "デストラクターが呼び出された" << std::endl;
}

int main ()
{
    sample a;
}