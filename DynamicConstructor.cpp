#include<iostream>
using namespace std;

//Constructor can allocate dynamically created memory to the object
//Thus, object is going to use memory region, which is dynamically created by constructor
class A {
    private:
        int a, b, *p;
    public:
        A() {
            a = 0;
            b = 0;
        }
        //dynamic constructor creates the memory which is accessed by its members
        A(int x, int y, int z) {
            a = x;
            b = y;
            p = new int;
            *p = z;
        }

        //display function
        void showData() {
            cout << a << ", " << b << " & "<< *p << endl;
        }
};
int main()
{
    A o1,o2,o3(3,4,5);
    o3.showData();
    return 0;
}
