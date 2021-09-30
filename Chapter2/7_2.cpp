#include <iostream>

struct vector2d
{
    float x;
    float y;
};

int sub (int a, int b)
{
    int n = a - b;
    return n;
}

vector2d sub (vector2d a, vector2d b)
{
    vector2d v;
    v.x = a.x - b.x;
    v.y = a.y - b.y;
    return v;
}

int main()
{
    std::cout << sub(10, 20) << std::endl;
    vector2d a = {-10, 30};
    vector2d b = {5, 10};
    auto v = sub(a, b);
    std::cout << v.x << ", " << v.y << std::endl;
}