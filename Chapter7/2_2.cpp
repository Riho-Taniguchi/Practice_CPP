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

class Derived : Base
{
public :
    Derived () : Base{2}
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