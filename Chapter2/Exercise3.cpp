#include <iostream>

class vector3d
{
private :
    int x;
    decltype(x) y;
    decltype(x) z;

public :
    decltype(x) get_vector_x ();
    decltype(y) get_vector_y ();
    decltype(z) get_vector_z ();

    vector3d (int _x, int _y, int _z)
    {
        x = _x;
        y = _y;
        z = _z;
    }
};

decltype(vector3d::x) vector3d::get_vector_x()
{
    return x;
}

decltype(vector3d::y) vector3d::get_vector_y()
{
    return y;
}

decltype(vector3d::z) vector3d::get_vector_z()
{
    return z;
}

int main ()
{
    int x, y, z;

    std::cin >> x;
    std::cin >> y;
    std::cin >> z;

    vector3d v = vector3d(x, y, z);

    std::cout << "x = " << v.get_vector_x() << std::endl;
    std::cout << "y = " << v.get_vector_y() << std::endl;
    std::cout << "z = " << v.get_vector_z() << std::endl;
}