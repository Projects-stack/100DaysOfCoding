#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;
    //creating object of ifstream to read file
    ifstream fin;
    fin.open("myFile.txt");     //opening file
    ch = fin.get();     //getting first character of file
    //looping through file till we reach end of file
    while(!fin.eof()) {
        cout << ch;
        ch = fin.get();
    }
    fin.close();    //closing file
    return 0;
}
