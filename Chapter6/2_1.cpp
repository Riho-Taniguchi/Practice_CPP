#include <iostream>

class Float
{
    float value;

public :
    Float (float v) : value(v) {}

    Float operator+ (const Float& rhs) const;
    Float operator- (const Float& rhs) const;
    
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

int main ()
{
    Float x{10.3f};
    Float y{3.1f};

    (x + y).show();
    (x - y).show();
}