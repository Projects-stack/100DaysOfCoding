#include<iostream>
using namespace std;

// Call by Value
int callByValueSum(int x, int y, int z=1) {
    return (x + y + z); // Z is default argument.
}

// Call by address
int callByAddressSum(int *x, int *y, int z=2) {
    return (*x + *y + z); // Z is default argument.
}

// Call by reference
int callByReferenceSum(int &x, int &y, int z=3) {
    return (x + y + z); // Z is default argument.
}

int main()
{
    int a=5,b=6;
    cout<<"Call by value : " << callByValueSum(a,b) << endl;
    cout<<"Call by value : " << callByAddressSum(&a,&b) << endl;
    cout<<"Call by value : " << callByReferenceSum(a,b) << endl;

    return 0;
}
