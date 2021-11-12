#include <iostream>

class Sample
{
    int value;

public :
    Sample(int v)
    {
        value = v;
        std::cout << "コンストラクターが呼ばれた" << std::endl;
    }

    ~Sample()
    {
        std::cout << "デストラクターが呼ばれた" << std::endl;
    }
};

int main ()
{
    Sample* s = new Sample(5);

    delete s;
}