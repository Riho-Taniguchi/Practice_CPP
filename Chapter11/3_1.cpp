#include <iostream>

class Base
{
public:
    virtual ~Base() { }
};

class Derived : public Base
{
};

int main ()
{
    Base* a;
    Derived* b = static_cast<Derived*>(a);

    if (b)
    {
        std::cout << "キャスト成功" << std::endl;
    }
}