#include <iostream>

class Base
{
public :
    virtual void print()
    {
        std::cout << "Base" << std::endl;
    }
};

class Derived : Base
{
public :
    void print () final
    {
        std::cout << "Derived" << std::endl;
    }
    

};

int main ()
{
    Derived d;
    d.print();
}