#include <iostream>
#include <fstream>

int main ()
{
    int file_size = 15;
    std::string file_name = "sample_seek.txt";

    std::ofstream out{file_name};
    out << "Hello, World!" << std::endl;
    
    out.seekp(7);
    out << "file seek" << std::endl;

    out.close();
}