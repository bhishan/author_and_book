#include<iostream>
//#include "Author.h"
#include "Book.h"

using namespace std;

int main(){
    string nameOfAuthor;
    string nameOfBook;
    string emailOfAuthor;
    char genderOfAuthor;
    int priceOfBook;
    int quantityInStock;
    cout<< "Enter the author name"<<endl;
    getline(cin, nameOfAuthor);
    cout<< "Enter the email address of the author"<<endl;
    getline(cin, emailOfAuthor);
    cout<< "Enter the gender M/F"<<endl;
    cin>>genderOfAuthor;
    //cin>>genderOfAuthor;
    cout<< "Enter the name of the book"<<endl;
    cin.get();
    getline(cin,nameOfBook);
    cout<< "Enter the price of the book"<<endl;
    cin>>priceOfBook;
    cout<< "Enter the quantity in stock"<<endl;
    cin>>quantityInStock;

    Author testAuthor(nameOfAuthor,emailOfAuthor,genderOfAuthor);
    cout<<testAuthor.toString()<<endl;

    Book testBook(nameOfBook, testAuthor, priceOfBook, quantityInStock);
    cout<<testBook.toString()<<endl;

}
