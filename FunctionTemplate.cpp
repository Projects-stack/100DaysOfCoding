#include<iostream>
using namespace std;

//generalized function
//X is generalized type over here
template <class X, class Y>
X big(X a, Y b) {
    if(a > b)
        return a;
    else
        return b;
}

int main()
{
    //Same function with different data types
    cout << big(4,5) << endl;
    cout << big(5.6,3.4) << endl;
    cout << big(7,3.4) << endl;

    return 0;
}
