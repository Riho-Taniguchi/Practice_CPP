#include <iostream>

class Float
{
    float value;

public :
    Float (float v) : value(v) {}
    
    Float& operator++ ();
    Float& operator-- ();
    Float operator++ (int);
    Float operator-- (int);
    
    void show() const { std::cout << value << std::endl; };
};

Float& Float::operator++ ()
{
    value++;
    return *this;
}

Float& Float::operator-- ()
{
    value--;
    return *this;
}

Float Float::operator++ (int)
{
    auto tmp = *this;

    ++*this;

    return tmp;
}

Float Float::operator-- (int)
{
    auto tmp = *this;

    --*this;

    return tmp;
}

int main ()
{
    Float x{9.3f};
    
    (++x).show();
    (x++).show();
    x.show();

    std::cout << std::endl;

    (--x).show();
    (x--).show();
    x.show();
}