#include <iostream>

int main ()
{
    int a = 5;

    switch (a + 1)
    {
        case 1:
            std::cout << "a + 1は1です" << std::endl;
            break;
        
        case 2:
            std::cout << "a + 1は2です" << std::endl;
            break;

        case 3:
            std::cout << "a + 1は3です" << std::endl;
            break;
    }
}