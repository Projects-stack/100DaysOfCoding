#include<iostream>
#include<cmath>
using namespace std;

int area(int, int);
float area(int);

int main()
{
    int r;
    cout << "Enter radius of circle : ";
    cin >> r;
    cout << "Area of circle is : " << area(r) << endl;

    int l,b;
    cout << "Enter height and width of rectangle : ";
    cin >> l >> b;
    cout << "Area of rectangle is : " << area(l,b) << endl;

    return 0;
}

int area(int x, int y)
{
    return (x*y);
}

float area(int r)
{
    return (3.14 * (pow(r,2)));
}
