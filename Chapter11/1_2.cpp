#include <iostream>
#include <typeinfo>

class Base
{
public:
    virtual ~Base() { }
};

class Derived : public Base
{
};

void print_type (const Base& a)
{
    const std::type_info& a_type = typeid(a);

    if (a_type == typeid(Base))
    {
        std::cout << "Baseクラス" << std::endl;
    }
    else if (a_type == typeid(Derived))
    {
        std::cout << "Derivedクラス" << std::endl;
    }
}

int main ()
{
    Base class1;
    print_type(class1);
    
    Derived class2;
    print_type(class2);
}