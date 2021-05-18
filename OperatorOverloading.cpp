#include<iostream>
using namespace std;

class Complex
{
    private:
        int x,y;
    public:
        void setData(int a, int b) {
            x = a;
            y = b;
        }

        //Binary Operator overloading
        Complex operator + (Complex c) {
            Complex temp;
            temp.x = x + c.x;
            temp.y = y + c.y;
            return temp;
        }

        //Unary Operator overloading
        Complex operator -() {
            Complex temp;
            temp.x = -x;
            temp.y = -y;
            return temp;
        }

        void print() {
            cout<< x << " + " << y << "i" << endl;
        }

};
int main()
{
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(4,5);
    cout<< "Addition of two complex number : ";
    c3 = c1 + c2;  //c1.operator +(c2);
    c3.print();

    Complex c4,c5;
    c4.setData(3,4);
    cout<< "Negation of a complex number : ";
    c5 = -c4; //c4.operator -();
    c5.print();

    return 0;
}
