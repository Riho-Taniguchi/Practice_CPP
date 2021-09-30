#include <iostream>

int main ()
{
    std::string line;   // 入力される文字列を格納する

    do
    {
        // 入力
        std::cout << "Input  : ";
        std::getline(std::cin, line);

        // 出力
        std::cout << "Output : " << line << std::endl;

    } while (line != "");   // 空行でないか確認
}