
#include<iostream>
using namespace std;

class Author{
    private:
        string authorName;
        string authorEmail;
        char authorGender;

    public:
        Author(string name, string email, char gender);
        Author();
        //void setAuthorName(string name);
        void setAuthorEmail(string email);
        string getAuthorName();
        string getAuthorEmail();
        char getAuthorGender();
        string toString();

};
