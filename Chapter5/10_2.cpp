#include <iostream>

class Sample
{
    int value;

public :
    Sample(int v) : value(v) {};
    void show() const
    {
        std::cout << value << std::endl;
    }

    void copy_set_2() const
    {
        [*this]() mutable
        {
            value = 2;
            std::cout << "コピー：" << value << std::endl;
        }();
        show();
    }
};

int main ()
{
    Sample a = Sample(1);

    a.copy_set_2();

    a.show();
}

/*
 * コピーのvalueを2に変えても元のvalueは変わらないことが確認できた
 */