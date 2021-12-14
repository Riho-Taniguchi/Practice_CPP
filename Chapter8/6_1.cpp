#include <iostream>
#include <fstream>

int main ()
{
    int file_size = 15;
    std::string file_name = "sample_binary.bin";

    std::ofstream out{file_name, std::ios::binary};
    for (int i = 0; i < file_size; i++)
    {
        out.put('a' + i);
    }
    out.close();

    std::ifstream in{file_name, std::ios::binary};
    char buffer[file_size];
    in.read(buffer, file_size);
    std::cout << buffer << std::endl;
}