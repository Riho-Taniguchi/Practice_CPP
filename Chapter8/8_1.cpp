#include <iostream>
#include <fstream>

int main ()
{
    std::ifstream in{"sample_text.txt"};
    in.seekg(0, std::ios::end);
    std::cout << in.rdstate() << std::endl;

    char c;
    in.get(c);
    auto state = in.rdstate();
    std::cout << state << std::endl;
    if (state & std::ios::eofbit)
    {
        std::cout << "EOFに到達しました" << std::endl;
    }
    if (state & std::ios::failbit)
    {
        std::cout << "致命的ではないエラーが見つかりました" << std::endl;
    }
    if (state & std::ios::badbit)
    {
        std::cout << "致命的なエラーが見つかりました" << std::endl;
    }
}

/*
 * 始めに状態を読み込んだ時は何もエラーフラグが立っていない
 * ファイルの終端にいったことでstd::ios::eofbitが立つ
 * さらにファイルの終端で読み込みをすると、致命的ではないエラーとなり、
 * std::ios::failbitが立つ
 */