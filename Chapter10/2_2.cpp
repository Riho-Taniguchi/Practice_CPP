#include <iostream>

void foo() noexcept
{
    throw 0;
}

int main() {
    try
    {
        foo();
    }
    catch (int e)
    {
        std::cout << "catch: " << e << std::endl;
    }
}

/*
 * noexcept指定があるfoo関数から例外が出されているので、
 * main関数に戻れず中断される
 */