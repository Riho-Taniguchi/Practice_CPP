#include <regex>
#include <string>
#include <iostream>

int main ()
{
    std::string str;
    std::string re_str;

    std::cin >> str;
    std::cin >> re_str;
    std::string re{re_str};

    if (std::regex_match(str, re))
    {
        std::cout << "完全マッチした" << std::endl;
    }
    else
    {
        std::cout << "完全マッチしてない" << std::endl;
    }
}