#include <iostream>
#include <utility>
#include <memory>

class A
{
    std::string name;

public:
    A(std::string str)
    {
        name = str;
        std::cout << name << "コンストラクター" << std::endl;
    }
    ~A() 
    {
        std::cout << name << "デストラクター" << std::endl;
    }
};

int main ()
{
    std::unique_ptr<A> a1;
    std::unique_ptr<A> a2;

    {
        std::unique_ptr<A> a3{new A{"Unique_Pointer"}};
        a1 = std::move(a3);

        A a4{"Normal"};
        // a4はクラスAとして呼び出されるので、スコープ外への持ち出しはできない
        // そのため下はエラーになる
        // *a2 = std::move(a4);
    }
    std::cout << "スコープ外" << std::endl;
}

/*
 * スコープ外の変数へ所有権を移動でき、寿命を伸ばせる
 * デストラクターは所有権を譲渡された変数の寿命が来たときに呼ばれる
 */