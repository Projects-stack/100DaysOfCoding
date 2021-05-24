#include<iostream>
#include "MySpace.h"
using namespace std;

//namespace is a container for identifiers

/* it puts the names of its members in a distinct space so
that they don't conflict with the names in other namespaces or global
namespace. */

//namespace should be declared with global scope. It should not be declared within any specific function

/* a namespace definition can be continued and extended over multiple files, they are not
redefined or overridden. */

using namespace MySpace;

//defining functions of MySpace namespace
int MySpace::f1() {
    cout << "Hello f1" << endl;
    return 1;
}

void MySpace::A::fun1() {
    cout << "Hello fun1" << endl;
}
int main()
{
    a = 5;
    cout << a << endl;
    f1();
    A obj;
    obj.fun1();

    return 0;
}
