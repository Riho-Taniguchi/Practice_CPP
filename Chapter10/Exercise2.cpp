#include <iostream>

class Sample
{

public:
    int num;
    Sample(int i) : num{i}
    {
        if (i > 10000)
        {
            throw i;
        }
    }

    ~Sample()
    {
        std::cout << num << std::endl;
    }
};

int main ()
{
    try
    {
        Sample* a = new Sample[5] {0, 1, 2, 1000, 12345};
    }
    catch (int e)
    {
    }
}