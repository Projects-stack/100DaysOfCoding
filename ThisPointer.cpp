#include<iostream>
using namespace std;

class Box {
    private:
        int l,b,h;
    public:
        // instance member function
        // every instance member function contains this pointer
        void setData(int l, int b, int h) {
            this->l = l;
            this->b = b; //this pointer cannot be modified
            this->h = h;
        }

        void showData() {
            cout << l << " " << b << " " << h << endl;
        }
};
int main()
{
    // this is a local object pointer in every instance member
    // function containing address of the caller object
    Box *p, smallBox;

    p = &smallBox;

    p->setData(4,5,6);
    p->showData();

    smallBox.setData(1,2,3);
    smallBox.showData();

    return 0;
}
