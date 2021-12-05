#include <iostream>

class Base
{
    int value;

public :
    Base ()
    {
        value = 0;
        std::cout << "Baseのデフォルトコンストラクター：" << std::endl;
    }

    explicit Base (int i) : value(i)
    {
        std::cout << "Baseのコンストラクター：" << value << std::endl;
    }

    ~Base ()
    {
        std::cout << "Baseのデストラクター" << std::endl;
    }
};

class Derived : public Base
{
    std::string name;
public :
    Derived (std::string str) : Base{2}, name(str)
    {
        std::cout << "Derivedのコンストラクター" << std::endl;
    }

    ~Derived ()
    {
        std::cout << "Derivedのデストラクター" << std::endl;
    }
};

int main ()
{
    Base* bp = new Derived{"Name"};
    delete bp;
}

/*
 * 上を実行すると、Derivedのコンストラクターは呼ばれているのに
 * デストラクターが呼ばれていないため、こういった場合にも
 * デストラクターが呼ばれるよう仮想デストラクターが必要となる。
 */