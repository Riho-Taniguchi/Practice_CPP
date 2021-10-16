#include <iostream>

class sample
{
public :
    sample(int new_value);
    void print_value_with_this(int value);
    void print_value_without_this(int value);

private :
    int value;
};

sample::sample (int new_value)
{
    value = new_value;
}

void sample::print_value_with_this (int value)
{
    std::cout << this->value << std::endl;
}

void sample::print_value_without_this (int value)
{
    std::cout << value << std::endl;
}

int main ()
{
    sample s(2);
    s.print_value_with_this(3);
    s.print_value_without_this(5);
}

/*
 * thisを使うとメンバー変数のvalueを示し、
 * 使わないと引数のvalueを示す
 */