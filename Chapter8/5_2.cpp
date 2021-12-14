#include <iostream>
#include <fstream>

int main ()
{
    std::string line;
    std::ifstream in{"5_2.cpp"};

    while (!in.eof())
    {
        std::getline(in, line);
        std::cout << line << std::endl;
    }
}