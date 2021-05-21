#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

class Book {
    //private members
    private:
        int bookId;
        char title[20];
        float price;
    //public members
    public:
        //constructor initialization
        Book() {
            bookId = 0;
            strcpy(title,"no title");
            price = 0;
        }

        //get book details
        void getBookData() {
            cout << "Enter bookId, title & price : ";
            cin >> bookId;
            cin.ignore();
            cin.getline(title,19);
            cin >> price;
        }

        //show book details
        void showBookData() {
            cout << "\n" << bookId << " " << title << " " << price;
        }

        //store book in file
        int storeBook();
        //read books file
        void viewAllBooks();
};

//add entry of the book into the file
int Book::storeBook() {
    //not initialized books check
    if(bookId == 0 && price == 0) {
        cout << "\nBook is not initialized!";
        return 0;
    }

    //ofstream object to write text in file
    ofstream fout;
    //opening file in append mode with binary type
    fout.open("books.dat",ios::app|ios::binary);
    fout.write((char*)this,sizeof(*this));   //write content inside file
    fout.close();   //close file
    return 1;
}

void Book::viewAllBooks() {
    ifstream fin;
    fin.open("books.dat",ios::in|ios::binary);
    if(!fin)
        cout << "\nFile not found!";
    else {
        fin.read((char*)this, sizeof(*this));
        while(!fin.eof()) {
            showBookData();
            fin.read((char*)this, sizeof(*this));
        }
    }
}

int main()
{
    //create object of class book
    Book b1,b2,b3;
    //b1.getBookData();
    //b1.showBookData();
    //b1.storeBook();
    //b1.getBookData();
    //b2.showBookData();
    //b2.storeBook();
    //b3.storeBook();
    b1.viewAllBooks();
    return 0;
}
