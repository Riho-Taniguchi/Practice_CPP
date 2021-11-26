#include <iostream>

class Float
{
    float value;

public :
    Float (float v) : value(v) {}

    Float operator+ (const Float& rhs) const;
    Float operator- (const Float& rhs) const;
    Float operator* (const Float& rhs) const;
    Float operator/ (const Float& rhs) const;

    Float operator+ () const;
    Float operator- () const;
    
    void show() const { std::cout << value << std::endl; };
};

Float Float::operator+ (const Float& rhs) const
{
    return Float{value + rhs.value};
}

Float Float::operator- (const Float& rhs) const
{
    return Float{value - rhs.value};
}

Float Float::operator* (const Float& rhs) const
{
    return Float{value * rhs.value};
}

Float Float::operator/ (const Float& rhs) const
{
    return Float{value / rhs.value};
}

Float Float::operator+ () const
{
    return *this;
}

Float Float::operator- () const
{
    return Float{-value};
}

int main ()
{
    Float x{9.3f};

    (+x).show();
    (-x).show();
}