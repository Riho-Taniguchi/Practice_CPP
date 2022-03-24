#include <iostream>
#include <exception>

class my_exception : public std::exception
{
    const char* message;

public:
    explicit my_exception(const char* str);
    const char* what() const noexcept override;
};

my_exception::my_exception(const char* str)
    : message{str}
{
}

const char* my_exception::what() const noexcept
{
    return message;
}

int main()
{
    try
    {
        throw my_exception{"Error message"};
    }
    catch (my_exception& e)
    {
        std::cout << "what: " << e.what() << std::endl;
    }
}