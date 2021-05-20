#include<iostream>
using namespace std;

class A {
    public:
        // virtual function
        // late binding (run time polymorphism)
        // based on address inside pointer
        virtual void fun() {
            cout << "Hello from parent!"<< endl;
        }
};

class B : public A {
    public:
        void fun() {
            cout << "Hello from child!"<< endl;
        }
        void fun2() {
            cout << "Hello from fun2!"<< endl;
        }
};

int main()
{
    A *p;
    B obj;
    p = &obj;
    p->fun(); // this will call fun() from child

    return 0;
}
