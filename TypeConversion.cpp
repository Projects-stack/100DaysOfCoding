#include<iostream>
using namespace std;

class Complex {
    private:
        int a, b;
    public:
        Complex() { }

        //primitive to class
        Complex(int k) {
            a = k;
            b = 0;
        }

        void setData(int x, int y) {
            a = x;
            b = y;
        }

        void showData() {
            cout << a << "+" << b << "i" << endl;
        }

        //class to primitive
        operator int() {
            return a;
        }
};
int main()
{
    Complex c1;
    int x = 5;

    //type conversion from primitive type to class type
    //here int value is assigned to complex object
    c1 = x;
    c1.showData();
    c1.setData(3,4);

    //type conversion from class type to primitive type
    //here complex value is assigned to int variable
    x = c1;
    cout << x;
}
