#include<iostream>
using namespace std;
#include "Author.h"

Author::Author(string name, string email, char gender){
    authorName= name;
    authorGender = gender;
    setAuthorEmail(email);
}

Author::Author(){
}

void Author::setAuthorEmail(string email){
    authorEmail = email;
}

string Author::getAuthorName(){
    return authorName;
}

string Author::getAuthorEmail(){
    return authorEmail;
}

char Author::getAuthorGender(){
    return authorGender;
}

string Author::toString(){
    return getAuthorName() + " at " + getAuthorEmail();
}

