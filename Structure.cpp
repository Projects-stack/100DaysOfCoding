#include<iostream>
#include<string.h>
using namespace std;

struct book
{
    // by default all the members of structure are public
    // member variables
    int bookId;
    char title[20];
    float price;

    // member functions
    void input() {
        cout << "Enter book Id, title and price : ";
        cin >> bookId >> title >> price;
    }

    void display() {
        cout << "Book details : " << bookId << " " << title << " " << price << endl;
    }

};

int main()
{
    // Compile time initialization
    book b1 = {1, "C++ Made easy", 450.0};

    book b2, b3;
    b2.bookId = 2;
    strcpy(b2.title,"C++ is lub");
    b2.price = 300.0;

    // direct assignment
    b3 = b2;

    // input structure
    book b4;
    b4.input();

    // show;
    b1.display();
    b2.display();
    b3.display();
    b4.display();

    return 0;
}



