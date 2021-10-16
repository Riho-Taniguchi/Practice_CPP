#include <iostream>

class sample
{
public :
    friend void show(sample& a);
    sample(float v);

private :
    float value;
};

sample::sample (float v) : value(v)
{

}

void show (sample& a)
{
    std::cout << a.value << std::endl;
}

int main ()
{
    sample s(42);
    show(s);
}