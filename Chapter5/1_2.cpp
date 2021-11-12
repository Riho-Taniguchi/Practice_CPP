#include <iostream>

int main ()
{
    int array[] = {0, 1, 2, 3, 4};
    int* parray = array;

    std::cout << *parray << std::endl;
    std::cout << *(parray + 1) << std::endl;
    std::cout << *(parray + 2) << std::endl;
    std::cout << *(parray + 3) << std::endl;
    std::cout << *(parray + 4) << std::endl;
}