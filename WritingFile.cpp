#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;
    //creating object of ofstream to write into file
    ofstream fout;
    fout.open("myFile.txt");    //opening file
    //writing content in file
    fout<<"Hello Darling!";
    //closing file
    fout.close();
    return 0;
}

