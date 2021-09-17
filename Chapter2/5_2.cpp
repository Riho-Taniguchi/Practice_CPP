#include <iostream>

class sample
{
    public:
        using fl = float;

        fl get_value();
        void set_value(fl new_value);

    private:
        fl value;
};

sample::fl sample::get_value ()
{
    return sample::value;
}

void sample:: set_value(fl new_value)
{
    value = new_value;
}

int main ()
{
    sample s;

    sample::fl value = 42.1;

    s.set_value(value);

    std::cout << s.get_value() << std::endl;
}