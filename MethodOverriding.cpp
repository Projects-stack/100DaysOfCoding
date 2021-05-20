#include<iostream>
using namespace std;

class Car {
    public:
        //instance member functions
        void gearShift() {
            cout << "Gear shift of ordinary car got called."<< endl;
        }

        void fun() {
            cout << "fun() from Car class!"<< endl;
        }
};

class SportsCar : public Car {
    public:
        //method overriding
        //method overriding happens when derived class defines same function as defined in its base class
        void gearShift() {
            cout << "Gear shift of sports car got called."<< endl;
        }

        //method hiding
        //this will hide parent fun() method and will throw error
        void fun(int k) {
            cout << "fun() from SportsCar class!"<< endl;
        }
};

int main()
{
    SportsCar s;
    //early binding based on type of object called the method
    // here parent method gearShift is modified in child class
    s.gearShift(); // gear shift of Sports Car will get called

    // parent method is accessible to child but because of name
    // conflict it will generate error when calling parent fun();
    s.fun(); //this will generate error
    s.fun(1); //this will call method from child class
    return 0;
}
