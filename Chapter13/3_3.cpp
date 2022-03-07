#include <iostream>
#include <string>

int main ()
{
    std::string a = "Hello";

    std::string b = "World!";
    
    std::cout << a.compare(b) << std::endl;
    // 辞書順で前となるaがbより小さいという結果が得られる
}