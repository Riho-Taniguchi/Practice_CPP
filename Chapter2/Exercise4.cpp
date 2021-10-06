#include <iostream>

class vector3d
{
public :
    using var_type = int;
    
    var_type get_vector_x ();
    var_type get_vector_y ();
    var_type get_vector_z ();

    vector3d (var_type _x, var_type _y, var_type _z = 0)
    {
        x = _x;
        y = _y;
        z = _z;
    }

private :
    var_type x;
    var_type y;
    var_type z;
};

vector3d::var_type vector3d::get_vector_x()
{
    return x;
}

vector3d::var_type vector3d::get_vector_y()
{
    return y;
}

vector3d::var_type vector3d::get_vector_z()
{
    return z;
}


int main ()
{
    int x, y, z;
    vector3d v1 = vector3d(1, 5, 2);
    std::cout << "x = " << v1.get_vector_x() << std::endl;
    std::cout << "y = " << v1.get_vector_y() << std::endl;
    std::cout << "z = " << v1.get_vector_z() << std::endl;

    vector3d v2 = vector3d(3, 6);
    std::cout << "x = " << v2.get_vector_x() << std::endl;
    std::cout << "y = " << v2.get_vector_y() << std::endl;
    std::cout << "z = " << v2.get_vector_z() << std::endl;
}