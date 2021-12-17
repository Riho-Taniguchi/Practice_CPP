template <typename T>
class Sample
{
public:
    T id(T t);
};

template <typename T>
T Sample<T>::id (T t)
{
    return t;
}