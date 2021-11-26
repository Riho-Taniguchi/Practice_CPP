#include <iostream>
#include <memory>

class A
{
    int value;
public :
    void show() { std::cout << value << std::endl; }
    A(int v) : value(v) {}
};

class A_pointer
{
    A* pointer;

public:
    explicit A_pointer(int v);
    ~A_pointer();
    A& operator*() const; // 間接参照演算子
    A* operator->() const; // アロー演算子
};

A_pointer::A_pointer (int v)
{
    pointer = new A{v};
}

A_pointer::~A_pointer ()
{
    delete(pointer);
}

A& A_pointer::operator* () const
{
    return *pointer;
}

A* A_pointer::operator-> () const
{
    return pointer;
}


int main ()
{
    A_pointer a{2};

    a->show();
    (*a).show();
}