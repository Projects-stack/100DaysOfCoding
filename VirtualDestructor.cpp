#include<iostream>
using namespace std;

class A {
    private:
        int a;
    public:
        void f1() { }

        //virtual destructor to clear out pointer allocated object
        virtual ~A() { }
};

class B : public A {
    private:
        int b;
    public:
        void f2() { }
        ~B() { }
};

int fun() {
    // early binding
    A *p = new B;
    p->f1();
    p->f2();  //error
}

int main()
{
    fun();
    return 0;
}
