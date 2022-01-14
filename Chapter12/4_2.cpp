#include <iostream>
#include <tuple>

int main ()
{
    std::tuple<int, std::string, int> isi{3, "Score", 10};
    std::cout << std::get<0>(isi) << ", " << std::get<1>(isi)
        << ", " << std::get<2>(isi) << std::endl;

    std::get<0>(isi) = 7;
    std::get<1>(isi) = "No.";
    std::get<2>(isi) = 21;
    std::cout << std::get<0>(isi) << ", " << std::get<1>(isi)
        << ", " << std::get<2>(isi) << std::endl;
}