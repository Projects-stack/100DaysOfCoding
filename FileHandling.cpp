#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;
    //ofstream fout;
    ifstream fin;
    //fout.open("myFile.txt");
    //fout<<"hello";
    fin.open("myFile.txt");
    ch = fin.get();
    while(!fin.eof()) {
        cout << ch;
        ch = fin.get();
    }
    fin.close();
    return 0;
}
