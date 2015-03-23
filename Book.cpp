#include<iostream>
#include "Book.h"
//#include "Author.h"

using namespace std;

Book::Book(string name, Author fAuthor, int price){
    bookName = name;
    author = fAuthor;
    setPrice(price);
}

Book::Book(string name, Author fAuthor, int price, int quantity){
    bookName = name;
    author = fAuthor;
    setPrice(price);
    setQuantityInStock(quantity);
}

void Book::setPrice(int price){
    price = price;
}

void Book::setQuantityInStock(int quantity){
    quantityInStock = quantity;
}

Author Book::getAuthor(){
    return author;
}

string Book::getBookName(){
    return bookName;
}

int Book::getPrice(){
    return price;
}

int Book::getQuantityInStock(){
    return quantityInStock;
}

string Book::toString(){
    return getBookName() + " by " + author.toString();
}
