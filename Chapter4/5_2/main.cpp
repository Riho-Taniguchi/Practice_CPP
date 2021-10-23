#include <iostream>

extern std::string word;

int main ()
{
    std::cout << word << std::endl;
}

/*
 * 実行方法
 * $ c++ -o a.out main.cpp word.cpp
 * $ ./a.out
 */