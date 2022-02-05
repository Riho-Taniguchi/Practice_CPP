#include <iostream>
#include <algorithm>
#include <vector>

int main ()
{
    std::vector v = {1, 1, 2, 3, 3, 1, 2, 1};

    std::cout << std::count(v.begin() + 1, v.end(), *v.begin()) << std::endl;
}