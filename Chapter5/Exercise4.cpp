#include <iostream>

void show(int v)
{
    std::cout << v << std::endl;
}

void enumerate(int* array, int* array_last, void (*func)(int v))
{
    for (int* i = array; i < array_last; i++)
    {
        func(*i);
    }
}

int main()
{
    int array[] = {1, 2, 3, 5, 7, 11, 13};
    std::size_t length = sizeof(array) / sizeof(array[0]);
    enumerate(array, array + length, show);
}