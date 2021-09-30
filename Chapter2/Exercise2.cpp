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
    void set_vector_x (decltype(x) x);
    void set_vector_y (decltype(y) y);
    void set_vector_z (decltype(z) z);
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

void vector3d::set_vector_x (decltype(x) new_x)
{
    x = new_x;
}

void vector3d::set_vector_y (decltype(y) new_y)
{
    y = new_y;
}

void vector3d::set_vector_z (decltype(z) new_z)
{
    z = new_z;
}