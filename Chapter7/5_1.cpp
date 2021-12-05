#include <iostream>

class Age
{
    int age;

public :
    Age () {}
    explicit Age (int i) : age(i) {}
    void show_age ()
    {
        std::cout << age << std::endl;
    }
};

class Name
{
    std::string name;

public :
    Name () {}
    explicit Name (std::string str) : name(str) {}
    void show_name ()
    {
        std::cout << name << std::endl;
    }
};

class Derived : public Age, public Name
{
public :
    Derived (int v, std::string str) : Age{v}, Name{str} {}
};

int main ()
{
    Derived d = {10, "Taro"};
    d.show_age();
    d.show_name();
}