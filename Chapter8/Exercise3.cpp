#include <iostream>
#include <fstream>

int main ()
{
    std::ifstream in{"Exercise3.cpp", std::ios::binary};

    char buffer[128];
    
    in.read(buffer, 100);

    std::cout << buffer << std::endl;
}