#include <iostream>

class Float
{
    float value;

public :
    Float (float v) : value(v) {}

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

    (x + 5.2f).show();
    (0.8 - x).show();
    (x * 9.1f).show();
    (12.0f / x).show();
}