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

    void set_vector (decltype(x) _x, decltype(y) _y, decltype(z) _z);
    void set_vector (decltype(x) _x, decltype(y) _y);
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

void vector3d::set_vector (decltype(x) _x, decltype(y) _y, decltype(z) _z)
{
    x = _x;
    y = _y;
    z = _z;
}

void vector3d::set_vector (decltype(x) _x, decltype(y) _y)
{
    set_vector(_x, _y, 0);
}

int main ()
{
    int x, y, z;
    vector3d v1 = vector3d();
    v1.set_vector(1, 5, 2);
    std::cout << "x = " << v1.get_vector_x() << std::endl;
    std::cout << "y = " << v1.get_vector_y() << std::endl;
    std::cout << "z = " << v1.get_vector_z() << std::endl;

    vector3d v2 = vector3d();
    
    v2.set_vector(3, 6);
    std::cout << "x = " << v2.get_vector_x() << std::endl;
    std::cout << "y = " << v2.get_vector_y() << std::endl;
    std::cout << "z = " << v2.get_vector_z() << std::endl;
}