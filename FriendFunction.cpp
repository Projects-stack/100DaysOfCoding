#include<iostream>
using namespace std;

class B;
class A {
    private:
        int a;
    public:
        void setData(int x) {
            a = x;
        }

        void fun() { }
        // friend function declaration
        friend void fun(A,B);
};

class B {
    private:
        int b;
    public:
        // making all the instance member functions of class A friend to class B
        // friend class
        friend class A;

        // making fun method of class A friend to class B
        friend void A:: fun();
        void setData(int y) {
            b = y;
        }
        // friend function declaration
        friend void fun(A,B);
};

// friend function definition
// friend function is used to access private members of two or more classes
void fun(A obj1, B obj2) {
    cout << "Sum of two private members is : "<< obj1.a + obj2.b << endl;
}

// complex class
class Complex {
    private:
        int a, b;
    public:
        void setData(int x, int y) {
            a = x;
            b = y;
        }
        void showData() {
            cout << a << " + " << b << "i" << endl;
        }
        // friend functions
        friend Complex operator +(Complex, Complex); // binary operator
        friend Complex operator -(Complex); // unary operator
};

// + operator overloading using friend
// binary operator
Complex operator +(Complex x, Complex y) {
    Complex temp;
    temp.a = x.a + y.a;
    temp.b = x.b + y.b;
    return temp;
}

// - operator overloading using friend
// unary operator
Complex operator -(Complex x) {
    Complex temp;
    temp.a = -x.a;
    temp.b = -x.b;
    return temp;
}


int main()
{
    A ob1;
    B ob2;
    ob1.setData(3);
    ob2.setData(4);

    fun(ob1, ob2); // calling friend

    // operator overloading using friend function
    // binary operator
    Complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(2,3);
    c3 = c1 + c2; // c3 = operator +(c1, c2);
    c3.showData();

    // operator overloading using friend function
    // unary operator
    c3 = -c1; // c3 = operator -(c1);
    c3.showData();
    return 0;
}
