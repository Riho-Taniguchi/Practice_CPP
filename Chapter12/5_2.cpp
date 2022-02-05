#include <iostream>
#include <set>

int main ()
{
    std::set is = {1, 1, 2, 3};
    for (auto iter = is.begin(); iter != is.end(); iter++)
    {
        std::cout << *iter << std::endl;
    }

/*
 * 実行結果
 * 1
 * 2
 * 3
 * となり、1が重複していない
 */

    // 下はエラーになる
    // *is.begin() = 4;
}