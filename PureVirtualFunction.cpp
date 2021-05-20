#include<iostream>
using namespace std;

// abstract class
// class containing at least one pure virtual function is known as abstract class
// abstract class cannot be instantiated
class Person {
    public:
        //pure virtual function
        virtual void fun()=0;
        virtual void fun2()=0;
        void fun3() {

        }
};

// again you can not instantiate Student class because it contains pure virtual function
// abstract class
class Student : public Person {
    public:
        // either you can write definition of pure virtual function if you inherit abstract class
        void fun() {

        }
        // or declare that function as pure virtual function again.
        virtual void fun2()=0;
};
int main()
{

    return 0;
}
