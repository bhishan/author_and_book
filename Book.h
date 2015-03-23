#include<iostream>
#include "Author.h"
using namespace std;

class Book{
    private:
        Author author;
        string bookName;
        int price;
        int quantityInStock;

    public:
        Book(string name, Author fAuthor, int price);
        Book(string name, Author fAuthor, int price, int quantity);
        void setPrice(int price);
        void setQuantityInStock(int quantity);
        Author getAuthor();
        string getBookName();
        int getPrice();
        int getQuantityInStock();
        string toString();
};
