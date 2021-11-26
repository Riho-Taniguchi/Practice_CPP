class A
{
public:
    void foo() const { }
};

class B
{
    A a;
public:
    operator const A&() { return a; }
};

int main()
{
    B b;
    ((A) b).foo();  // Aに明示的にキャストしてから呼ぶ
}