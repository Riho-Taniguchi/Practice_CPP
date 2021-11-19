#include <iostream>
#include <initializer_list>
#include <array>

class int_vector
{
    int* array;
    int size;

public :
    int_vector (std::initializer_list<int> init);
    void show_vector ();
};

int_vector::int_vector (std::initializer_list<int> init)
{
    size = init.size();
    array = new int[size];
    int i = 0;
    for (int v : init) {
        array[i++] = v;
    }
}

void int_vector::show_vector ()
{
    for (int i = 0; i < size; i++)
    {
        std::cout << array[i] << std::endl;
    }
}

int main ()
{
    int_vector iv = {0, 1, 2, 3};
    iv.show_vector();
}