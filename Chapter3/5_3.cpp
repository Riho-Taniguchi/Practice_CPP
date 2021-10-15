#include <iostream>

class Base
{
public:
    virtual std::string name() const;
    virtual std::string most_name() = 0;
};

std::string Base::name() const { return "Base"; }

class Derived : public Base
{
public:
    std::string name() const override;
};

std::string Derived::name() const { return "Derived"; }

class MoreDerived : public Derived
{
public:
    std::string name() const override;
    std::string most_name() override;
};

int main ()
{
    Derived d;
}

/*
 * Derivedクラスではmost_name関数を定義していないため、
 * Derivedクラスも抽象クラスとなり、インスタンス化を
 * しようとするとエラーになる。
 */