#include <iostream>
#include <string>

class Book
{
    std::string title;
    std::string writer;
    int         price;

public:
    Book(std::string title, std::string writer, int price);
    Book(const Book& other);
    void Print();
};

Book::Book (std::string title, std::string writer, int price)
    : title(title), writer(writer), price(price)
{
}

Book::Book (const Book& other)
{
    this->title = other.title;
    this->writer = other.writer;
    this->price = other.price;
}

void Book::Print ()
{
    std::cout << title << std::endl;
    std::cout << writer << std::endl;
    std::cout << price << std::endl;
}

int main ()
{
    Book original("Title", "A", 390);
    Book copy(original);
    
    original.Print();
    copy.Print();
}