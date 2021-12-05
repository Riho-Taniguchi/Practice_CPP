#include <iostream>

class Base
{
public :
    virtual void print(std::string str)
    {
        std::cout << "Base : " << str << std::endl;
    }
};

class Derived : public Base
{
public :
    void print(std::string str) override
    {
        std::cout << "Derived : " << str << std::endl;
    }
};

int main ()
{
    Base* bp = new Derived{};
    bp->print("Hello!");
}