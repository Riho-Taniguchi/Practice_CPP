/*
 * プログラム終了まで動的に確保したメモリが解放されない。
 * 実際にやってみると、デストラクターが呼ばれていない。
 * 最初の考えが正しそう。
 */

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
}