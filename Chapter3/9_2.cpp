#include <iostream>

class sample
{
public :
    sample ();
    static void show_count();

private :
    static int count;
};

int sample::count = 0;

sample::sample ()
{
    ++count;
}

void sample::show_count ()
{
    std::cout << count << std::endl;
}

void function ()
{
    sample a;
}

int main ()
{
    sample s1;
    sample::show_count();

    function();
    sample::show_count();
}