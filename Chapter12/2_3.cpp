#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> array = {1, 2, 3, 4, 5};

    array.emplace(array.end(), 10);

    for (int i : array)
    {
        std::cout << i << std::endl;
    }
}