#include<iostream>
using namespace std;

//generic class
template <class X>
class ArrayList {
    private:
        struct ControlBlock {
            int capacity;
            X *arr_ptr;
        };
        ControlBlock *s;
    public:
        //initialization in constructor
        ArrayList(int capacity) {
            s = new ControlBlock;
            s->capacity = capacity;
            s->arr_ptr = new X[s->capacity];
        }

        //adding element in array
        void AddElement(int index, X data) {
            if(index >= 0 && index <= s->capacity-1)
                s->arr_ptr[index] = data;
            else
                cout << "\nArray index out of bound";
        }

        //view specific index element of an array
        void ViewElement(int index, X &data) {
            if(index >= 0 && index <= s->capacity-1)
                data = s->arr_ptr[index];
            else
                cout << "\nArray index out of bound";
        }

        //view list of array
        void ViewList() {
            for(int i=0; i < s->capacity; i++) {
                cout << " " << s->arr_ptr[i];
            }
        }
};

int main()
{
    ArrayList <float>list1(4); //creating ArrayList object of specified type

    //adding elements in array list
    list1.AddElement(0,3.2);
    list1.AddElement(1,4.1);
    list1.AddElement(2,5.5);
    list1.AddElement(3,6.8);

    //view list of elements in array list
    list1.ViewList();

    return 0;
}
