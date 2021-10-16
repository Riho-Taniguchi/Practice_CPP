#include <iostream>

class sample
{
public :
    void set_value(int v) const;
    void show_value();

private :
    static int value;
};

int sample::value = 0;

void sample::set_value (int v) const
{
    sample::value = v;
}

void sample::show_value ()
{
    std::cout << value << std::endl;
}

int main ()
{
    sample s;
    s.show_value();
    
    s.set_value(42);
    s.show_value();
}