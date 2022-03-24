#include <iostream>

int main() {
    try
    {
        throw 0;
        std::cout << "出力されない";
    }
    catch (int e)
    {
        std::cout << e << "がキャッチできた" << std::endl;
    }
}

/*
 * noexcept指定があるfoo関数から例外が出されているので、
 * main関数に戻れず中断される
 */