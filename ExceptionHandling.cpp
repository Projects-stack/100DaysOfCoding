#include<iostream>
using namespace std;

int main()
{
    int i=2.2;
    cout << "Welcome";
    //risky code goes in try block
    //this block of code is used to avoid runtime errors
    try {
        //from here control goes to specific catch block
        if(i == 1) {
            throw 10;
            cout << "In Try";
        }

        if( i == 2) {
            throw 2.2;
            cout << "In Try";
        }
    }
    //After throw statement catch block will get executed
    //you can write more the one catch block with any type of argument
    catch(int e) {
        cout <<"\nException Number: "<< e;
    }
    //specifying another catch block
    catch(double d) {
        cout <<"\nException Decimal: "<< d;
    }

    cout << "\nLast line";
    return 0;
}
