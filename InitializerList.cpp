#include<iostream>
using namespace std;

class Dummy {
    private:
        int a,b;
        const int x;
        int &y;
    public:
        //for initializing non-static const data members
        //for initialization of reference members
        Dummy(int &n):x(5),y(n) {
            cout << x << " " << y << endl;
        }
};

int main()
{
    int m=6;
    Dummy d1(m);
}
