#include <iostream>

class vector3d
{
    float x = 0;
    float y = 0;
    float z = 0;

public:
    void Print();
};

void vector3d::Print()
{ 
    std::cout << x << ", " << y << ", " << z << std::endl;
}

int main ()
{
    vector3d vector;
    vector.Print();
}