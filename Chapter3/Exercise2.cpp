class vector3d
{
    float x;
    float y;
    float z;
public:
    vector3d();
    vector3d(float x, float y);
    vector3d(float x, float y, float z);
};

vector3d::vector3d()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

vector3d::vector3d(float x, float y)
{
    this->x = x;
    this->y = y;
    this->z = 0;
}

vector3d::vector3d(float x, float y, float z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}