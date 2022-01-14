#include <iostream>
#include <list>

int main ()
{
    std::list list1 = {3, 5, 8, 1, 2, 9, 3};

    list1.sort();
    
    for (auto i = list1.begin(); i != list1.end(); i++)
    {
        std::cout << *i << std::endl;
    }
}