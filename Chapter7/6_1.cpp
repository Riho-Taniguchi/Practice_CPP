#include <iostream>

class Base
{
public:
    Base () {}
    explicit Base (int i)
    {
        std::cout << "Base : " << i << std::endl;
    }
};

class DerivedA : virtual public Base
{
public:
    DerivedA () : Base{1}
    {
        std::cout << "DerivedA" << std::endl;
    }
};

class DerivedB : virtual public Base
{
public:
    DerivedB () : Base{2}
    {
        std::cout << "DerivedB" << std::endl;
    }
};

class MoreDerived : DerivedA, DerivedB
{
public:
    MoreDerived () : Base{3}
    {
        std::cout << "MoreDerived" << std::endl;
    }
};

int main ()
{
    DerivedA da;
    std::cout << std::endl;
    MoreDerived md;
}