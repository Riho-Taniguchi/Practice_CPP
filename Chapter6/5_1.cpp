#include <iostream>

class Float
{
    float value;

public :
    Float (float v) : value(v) {}
    
    bool operator== (const Float& rhs) const;
    bool operator!= (const Float& rhs) const;
    bool operator<= (const Float& rhs) const;
    bool operator> (const Float& rhs) const;
    bool operator>= (const Float& rhs) const;
    
    void show() const { std::cout << value << std::endl; };
};

bool Float::operator== (const Float& rhs) const
{
    if ((value < rhs.value) || (rhs.value < value))
    {
        return false;
    }
    return true;

}

bool Float::operator!= (const Float& rhs) const
{
    return !(*this == rhs);
}

bool Float::operator<= (const Float& rhs) const
{
    return !(rhs.value < value);
}

bool Float::operator> (const Float& rhs) const
{
    return !(value <= rhs.value);
}

bool Float::operator>= (const Float& rhs) const
{
    return !(value < rhs.value);
}

int main ()
{
    Float x{9.3f};
    Float y{3.0f};

    // trueなら1、falseなら0を出力する
    std::cout << (x == y) << std::endl;
    std::cout << (x != y) << std::endl;
    std::cout << (x <= y) << std::endl;
    std::cout << (x > y) << std::endl;
    std::cout << (x >= y) << std::endl;
    std::cout << (y >= y) << std::endl;
}