#include <iostream>
#include <fstream>

int main ()
{
    std::string filename;
    std::cin >> filename;

    std::string line;
    std::ifstream in{filename};
    std::getline(in, line);

    std::cout << line << std::endl;
}