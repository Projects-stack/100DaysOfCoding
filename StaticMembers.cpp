#include<iostream>
using namespace std;

class Account
{
    private:
        int balance; // instance member variable
        static float roi; //static member variable (Class variable)
    public:
        // instance member function
        void setBalance(int b) {
            balance = b;
        }

        // static member function
        static void setRoi(float r) {
            roi = r;
        }

        static void displayRoi() {
            cout << roi << endl;
        }
};

// initialization of variable using membership label
float Account:: roi = 3.5f;

void fun() {
    // default value is 0 and not GV
    // memory gets assigned only once at the beginning of program and will get destroyed when program is destroyed
    static int x; // static local variable

    // memory gets destroyed when function call ends
    // variable will be created and destroyed number of times fun() function called
    int y; // local variable
}
int main()
{
    Account a1,a2;
    // without creating instance of class you can call static methods
    Account::setRoi(4.5f);
    Account::displayRoi();
}
