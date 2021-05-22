#include<iostream>
using namespace std;

class Dummy {
    private:
        int a,b;
        int *p;
    public:
        Dummy() {
            p = new int;
        }

        //deep-copy
        Dummy(Dummy &d) {
            a = d.a;
            b = d.b;
            p = new int;
            *p = *(d.p);

            //shallow-copy
            //p = d.p
        }

        void setData(int x, int y, int z) {
            a = x;
            b = y;
            *p = z;
        }

        void showData() {
            cout << a << " " << b << " " << *p << " " << p << endl;
        }

        ~Dummy() {
            delete p;
        }
};
int main()
{
    Dummy d1;
    d1.setData(3,4,5);
    d1.showData();
    Dummy d2 = d1;
    d2.showData();

    return 0;
}
