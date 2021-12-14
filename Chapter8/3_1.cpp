#include <iostream>

int main ()
{
    char line[256];

    do
    {
        std::cout << "Write : ";
        std::cin.getline(line, 256);
        std::cout << line << std::endl;
    } while (line[0] != 0);
}