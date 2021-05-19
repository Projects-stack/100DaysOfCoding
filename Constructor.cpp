#include<iostream>
using namespace std;

class Complex {
    private:
        int a, b;
    public:
        // parameterized constructor with two parameters
        Complex(int x, int y) {
            a = x;
            b = y;
            cout << a << " " << b << endl;
        }

        // parameterized constructor with single parameter
        Complex(int k) {
            a = k;
            b = 0;
            cout << a << " " << b << endl;
        }

        // default cunstructor
        Complex() {
            a = 0;
            b = 0;
            cout << a << " " << b << endl;
        }

        // copy constructor
        Complex(Complex &c) {
            a = c.a;
            b = c.b;
            cout << a << " " << b << endl;
        }
};
int main()
{
    Complex c1(3,4), c2, c3(5);
    Complex c4(c1);

    return 0;
}
