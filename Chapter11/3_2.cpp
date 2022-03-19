#include <iostream>

class Base
{
public:
    virtual ~Base() { }
};

class Derived : public Base
{
};

int main ()
{
    Base a;
    Base& ra(a);
    try 
    {
        Derived& rb = dynamic_cast<Derived&>(ra);
        std::cout << "キャスト成功" << std::endl;
    }
    catch (std::bad_cast& rb)
    {
        // 元のインスタンスaがBaseクラスなのでダウンキャスト失敗
        std::cout << "キャスト失敗" << std::endl;
    }
}