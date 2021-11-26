#include <iostream>

class Integer
{
    int value;

public :
    Integer (int v) : value(v) {}

    Integer operator+ (const Integer& rhs) const;
    Integer operator- (const Integer& rhs) const;
    Integer operator* (const Integer& rhs) const;
    Integer operator/ (const Integer& rhs) const;
};

Integer Integer::operator+ (const Integer& rhs) const
{
    return Integer{value + rhs.value};
}

Integer Integer::operator- (const Integer& rhs) const
{
    return Integer{value - rhs.value};
}

Integer Integer::operator* (const Integer& rhs) const
{
    return Integer{value * rhs.value};
}

Integer Integer::operator/ (const Integer& rhs) const
{
    return Integer{value / rhs.value};
}