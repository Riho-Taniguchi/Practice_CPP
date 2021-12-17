#include <iostream>

template <typename T>
class Base
{
public:
    virtual T print(T t)
    {
        std::cout << "Base" << std::endl;
        return t;
    }
};

template <typename T>
class Derived : public Base<T>
{
public:
    T print (T t) override
    {
        std::cout << "Derived" << std::endl;
        return t;
    }
};

int main ()
{
    Derived<int> d;
    d.print(0);
}