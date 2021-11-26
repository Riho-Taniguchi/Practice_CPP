#include <iostream>

class Float
{
    float value;

public :
    Float (float v) : value(v) {}

    Float& operator= (const Float& rhs);

    friend Float operator+ (const Float& lhs, float rhs);
    friend Float operator+ (float lhs, const Float& rhs);
    friend Float operator- (const Float& lhs, float rhs);
    friend Float operator- (float lhs, const Float& rhs);
    friend Float operator* (const Float& lhs, float rhs);
    friend Float operator* (float lhs, const Float& rhs);
    friend Float operator/ (const Float& lhs, float rhs);
    friend Float operator/ (float lhs, const Float& rhs);
    
    void show() const { std::cout << value << std::endl; };
};

Float& Float::operator= (const Float& rhs)
{
    value = rhs.value;
    return *this;
}

Float operator+ (const Float& lhs, float rhs)
{
    return Float{lhs.value + rhs};
}

Float operator+ (float lhs, const Float& rhs)
{
    return Float{lhs + rhs.value};
}

Float operator- (const Float& lhs, float rhs)
{
    return Float{lhs.value - rhs};
}

Float operator- (float lhs, const Float& rhs)
{
    return Float{lhs - rhs.value};
}

Float operator* (const Float& lhs, float rhs)
{
    return Float{lhs.value * rhs};
}

Float operator* (float lhs, const Float& rhs)
{
    return Float{lhs * rhs.value};
}

Float operator/ (const Float& lhs, float rhs)
{
    return Float{lhs.value / rhs};
}

Float operator/ (float lhs, const Float& rhs)
{
    return Float{lhs / rhs.value};
}

int main ()
{
    Float x{3.0f};
    Float y{2.4f};

    x = y;
    y = y + 2.0f;
    x.show();
    y.show();
}