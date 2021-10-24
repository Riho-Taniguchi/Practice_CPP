#include "module.hpp"
#include "module2.hpp"

int main()
{
    show_value(42);
    show_word("Hello!");
}

/*
 * 実行手順
 * c++ -c -o module.o module.cpp
 * c++ -c -o module2.o module2.cpp
 * c++ -o a.out main.cpp module.o module2.o
 * ./a.out
 *
 * -c : リンクまでは行わない
 * -o : オブジェクトの名前を設定してオブジェクトファイルを作る
 */