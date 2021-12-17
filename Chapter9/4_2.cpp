#include <iostream>

template <typename T>
class Sample
{
    T t;
public:
    void show()
    {
        std::cout << t << std::endl;
    }

    Sample(T arg_t) : t(arg_t) {}
};

template <>
class Sample<void>
{
public:
    void show()
    {
        std::cout << "void" << std::endl;
    }
};


int main ()
{
    Sample<std::string> s1{"Hello!"};
    s1.show();

    Sample<void> s2{};
    s2.show();
}