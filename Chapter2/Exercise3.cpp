#include <iostream>

class vector3d
{
public :
    using var_type = int;
    
    var_type get_vector_x ();
    var_type get_vector_y ();
    var_type get_vector_z ();
    void set_vector_x (var_type x);
    void set_vector_y (var_type y);
    void set_vector_z (var_type z);

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

void vector3d::set_vector_x (var_type new_x)
{
    x = new_x;
}

void vector3d::set_vector_y (var_type new_y)
{
    y = new_y;
}

void vector3d::set_vector_z (var_type new_z)
{
    z = new_z;
}

int main ()
{
    int x, y, z;

    std::cin >> x;
    std::cin >> y;
    std::cin >> z;

    vector3d v = vector3d();
    v.set_vector_x(x);
    v.set_vector_y(y);
    v.set_vector_z(z);
    

    std::cout << "x = " << v.get_vector_x() << std::endl;
    std::cout << "y = " << v.get_vector_y() << std::endl;
    std::cout << "z = " << v.get_vector_z() << std::endl;
}