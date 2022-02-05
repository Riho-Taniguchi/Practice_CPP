#include <iostream>
#include <vector>

int main ()
{
    std::vector v = {1, 3, 5, 6, 7};

    auto iter = v.begin() + 3;

    v.erase(iter);

    for (int i : v)
    {
        std::cout << i << std::endl;
    }
}