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