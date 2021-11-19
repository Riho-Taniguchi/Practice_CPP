#include <iostream>

int* allocate (int n)
{
    int* p = new int[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = 0;
    }
    return p;
}

int main ()
{
    int* array = allocate(3);

    for (int i = 0; i < 3; i++)
    {
        std::cout << array[i] << std::endl;
    }
}