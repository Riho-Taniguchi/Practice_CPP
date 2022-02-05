#include <vector>
#include <algorithm>
#include <iostream>

int main ()
{
    std::vector<int> v = {2, 1, 0, 3};

    std::sort(v.begin(), v.end(), [](int l, int r){ return l > r; });

    for (int i : v)
    {
        std::cout << i << std::endl;
    }
}