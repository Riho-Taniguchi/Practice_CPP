#include <iostream>

class sample
{
public :
    void function ();
};

void sample::function ()
{
    std::cout << "BaseFunction" << std::endl; 
}

class sample2 : sample
{
public :
    using sample::function;
    void function (int value);
};

void sample2::function (int value)
{
    std::cout << "DerivedFunction : " << value << std::endl;
}

int main ()
{
    sample2 s;
    s.function();
    s.function(42);
}