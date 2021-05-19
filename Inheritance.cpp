#include<iostream>
using namespace std;

// The capability of class to derive properties and characteristics from another class is called Inheritance
class A {
    private:
        int x;
    protected:
        int y;
    public:
        int z;
        A(int k) {
            x = k;
            cout << "Class A got called!"<< endl;
            cout << "Value of x : " << x << endl;
        }
        A() { }

        // destructor of class A
        // this destructor will run after the class B get destroyed
        ~A() {
            cout << "Class A got destroyed!"<< endl;
        }
};

class B : public A {
    //x is not accessible to class B
    //y is protected
    //z is public
    private:
        int p;
    public:
        // Constructor in inheritance
        // parent gets called when we create child object
        B(int a, int b): A(a) {
            p = b;
            cout << "Class B got called!"<< endl;
            cout << "Value of p : " << p << endl;
        };

        // Child destructor will get executed first then it will call parent destructor
        ~B() {
            cout << "Class B got destroyed!" << endl;
        }
};

class C : private A {
    //x is not accessible to class C
    //y and z are private
    public:
        C(): A() {
            cout << "Class C got called!"<< endl;
        };
};

class D : protected A {
    //x is not accessible to class D
    //y and z are protected
    public:
        D(): A() {
            cout << "Class D got called!"<< endl;
        };
};

// multiple inheritance example
class E {
    // members of class E
    public:
        E() {
            cout << "Class E got called!"<< endl;
        };
};

class F {
    // members of class F
    public:
        F() {
            cout << "Class F got called!"<< endl;
        };
};

class G {
    // members of class G
    public:
        G() {
            cout << "Class G got called!"<< endl;
        }

};

class H : public E, private F, protected G {
    //multiple inheritance
    public:
        H() : E(), F(), G() {
            cout << "Class H got called!"<< endl;
        }
};
int main()
{
    H h;
    cout << endl;
    B b(3,4);
}
