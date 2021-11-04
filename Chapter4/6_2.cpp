class product
{
    int price;

public:
    product(int price)
    {
        this->price = price;
    }

    int get_price() const
    {
        return price;
    }

    set_price(int price)
    {
        this->price = price;
    }
};