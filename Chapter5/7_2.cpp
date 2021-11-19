#include <iostream>

class Sample
{
    int value;

public :
    Sample (int v) : value(v) {}

    int& get_value ();
    const int& get_value () const;
};

int& Sample::get_value ()
{
    return value;
}

const int& Sample::get_value () const
{
    return value;
}

int main ()
{
    Sample a = Sample(1);

    int& b = a.get_value();
    std::cout << b << std::endl;
    b = 10;
    std::cout << b << std::endl;

    const int& c = a.get_value();
    std::cout << c << std::endl;
    // c = 10;  エラー。constなので変えられない
}