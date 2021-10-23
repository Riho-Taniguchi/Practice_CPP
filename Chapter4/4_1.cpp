# include <iostream>

int main ()
{
    std::cout << __cplusplus << std::endl;
}

/*
 * g++ 4_1.cpp だと199711が出る。これは任意の意
 * g++ -std=c++17  だと201703が出る。
 */