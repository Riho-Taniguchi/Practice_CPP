#include <vector>
#include <algorithm>
#include <iostream>

int main ()
{
    std::vector<int> v = {3, 4, 5};
    std::vector<int> insert_v = {0, 1, 2};

    std::copy(insert_v.begin(), insert_v.end(), std::inserter(v, v.begin()));

    for (int i : v)
    {
        std::cout << i << std::endl;
    }
}