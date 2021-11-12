#include <iostream>

// reverse()関数をここに定義する
void reverse (int* array, int n)
{
    int swap;

    for (int i = 0; i < n / 2; i++)
    {
        swap = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = swap;
    }
}

int main()
{
    int array[] = {0, 1, 2, 3, 4};
    reverse(array, 5); // 引数は配列とその長さ

    std::cout << array[0] << std::endl;
    std::cout << array[1] << std::endl;
    std::cout << array[2] << std::endl;
    std::cout << array[3] << std::endl;
    std::cout << array[4] << std::endl;
}