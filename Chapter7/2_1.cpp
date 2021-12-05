#include <iostream>

class Base
{
public :
    Base ()
    {
        std::cout << "Baseのコンストラクター" << std::endl;
    }

    ~Base ()
    {
        std::cout << "Baseのデストラクター" << std::endl;
    }
};

class Derived : Base
{
public :
    Derived ()
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
    Derived d;
}

/*
 * 以下の順
 * 基底クラスのコンストラクター
 * 派生クラスのコンストラクター
 * 派生クラスのデストラクター
 * 基底クラスのデストラクター
 */