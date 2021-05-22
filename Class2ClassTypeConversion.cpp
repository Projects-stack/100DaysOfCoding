#include<iostream>
using namespace std;

class Product {
    private:
        int m,n;
    public:
        void setData(int x, int y) {
            m = x;
            n = y;
        }

        //private members are not accessible outside the class
        //made them accessible through below methods
        int getM() {
            return m;
        }

        int getN() {
            return n;
        }
};

class Item {
    private:
        int a,b;
    public:
        Item() { }

        //passing reference to constructor
        Item(Product p) {
            a = p.getM();
            b = p.getN();
        }

        void showData() {
            cout << a << " " << b << endl;
        }
};
int main()
{
    Product p1;
    Item i1;

    //set values for p1
    p1.setData(3,4);

    //assigning one class value to another class
    i1 = p1;
    i1.showData();

    p1.setData(5,6);
    i1 = p1;

    return 0;
}
