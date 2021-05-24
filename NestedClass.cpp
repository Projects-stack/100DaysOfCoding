#include<iostream>
#include<string.h>
using namespace std;

//class inside class is called nested class

class Student {
    private:
        int rollNo;
        char name[20];
        //nested class
        class Address {
            private:
                int houseNo;
                char street[20];
                char city[20];
                char state[20];
                char pincode[7];
            public:
                void setAddress(int h, char *s, char *c, char *st, char *p) {
                    houseNo = h;
                    strcpy(street, s);
                    strcpy(city, c);
                    strcpy(state, st);
                    strcpy(pincode, p);
                }

                void showAddress() {
                    cout << houseNo << ", ";
                    cout << street << ", " << city << endl;
                    cout << state << ", " << pincode << endl;
                }
        };
        Address add;

    public:
        void setRollNo(int r) {
            rollNo = r;
        }
        void setName(char *n) {
            strcpy(name, n);
        }
        void setAddress(int h, char *s, char *c, char *st, char *p) {
            add.setAddress(h, s, c, st, p);
        }
        void showStudent() {
            cout << "Student Data : " << endl;
            cout << rollNo << endl;
            cout << name << endl;
            cout << "\nAddress Details: " << endl;
            add.showAddress();
        }
};

int main()
{
    Student st;
    st.setRollNo(100);
    st.setName("Sanket");
    st.setAddress(1, "Time Square", "New York", "United States", "416312");
    st.showStudent();
    return 0;
}
