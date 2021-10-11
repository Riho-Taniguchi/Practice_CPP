#include <iostream>

class A
{
    int v;

public :
    void set(int value);
    int& get();
    const int& get() const;
};

void A::set (int value)
{
    v = value;
}

int& A::get ()
{
    std::cout << "参照を返す" << std::endl;
    return v;
}


const int& A::get () const
{
    std::cout << "const参照を返す" << std::endl;
    return v;
}

int main ()
{
    A a;
    a.set(42);

    A& ra = a;
    std::cout << ra.get() << std::endl;

    const A& ca = a;
    std::cout << ca.get() << std::endl;
}