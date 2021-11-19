#include <iostream>
#include <utility>

class Sample
{
    int* value;

public :
    void show();
    explicit Sample(int v);
    Sample(const Sample& other);    // コピーコンストラクター
    Sample(Sample&& other);         // ムーブコンストラクター
};

void Sample::show ()
{
    std::cout << value << " : " << *value << std::endl;
}

Sample::Sample (int v)
{
    value = new int;
    *value = v;
}

Sample::Sample (const Sample& other)
{
    std::cout << "コピーコンストラクターが呼ばれた" << std::endl;
    *(this->value) = *(other.value);
}

Sample::Sample (Sample&& other) : value{other.value}
{
    std::cout << "ムーブコンストラクターが呼ばれた" << std::endl;
    *(this->value) = *(other.value);
    other.value = nullptr;
}

int main ()
{
    Sample a{5};
    a.show();
    Sample b(a);
    b.show();
    Sample c{std::move(a)};
    c.show();
}