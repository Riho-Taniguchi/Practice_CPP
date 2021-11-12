#include <vector>
#include <iostream>

class product
{
    int         id;
    std::string name;
    int         price;

public:
    explicit product(int id, std::string name, int price)
        : id(id), name(name), price(price) {}

    product() : id(-1), name(), price(0) {}
};

int main()
{
    std::vector<product> p;

    p.push_back(product{1, "smart phone", 60000});
    p.push_back(product{2, "tablet", 35000});
    
    // 後ろ二つはどちらでもデフォルトコンダクターを呼べる
    p.push_back(product{});
    p.push_back(product());
}
