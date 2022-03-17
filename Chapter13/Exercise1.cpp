#include <iostream>
#include <string>

int main ()
{
    std::string a = "Sample text.";
    std::string b = "\nHello, World!\n";
    std::string c = "Bye";
    a.append(b);
    a.append(c);
    std::cout << a << std::endl;
}