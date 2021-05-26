#include<iostream>
using namespace std;

/* pairs :->
   -----

        1. Pair is a template class in Standard Template Library
        2. Pair is not a part of container
        3. One can compare two pairs using comparator operators like ==, <=, <, >=, >, etc.
 */

 //Creating custom data type
class Student {
    private:
        string name;
        int age;
    public:
        void setStudent(string name, int age) {
            this->name = name;
            this->age = age;
        }

        void showStudent() {
            cout << "\nName: " << name;
            cout << "\nAge: " << age;
        }
};

int main()
{
    //creating pairs of different primitive data types
    pair<string, int> p1;
    pair<string, string> p2;
    pair<string, float> p3;

    //creating pair of custom data type
    pair<int,Student> p4;

    //inserting data in the tuple
    p1 = make_pair("Rahul", 21);
    p2 = make_pair("India","New Delhi");
    p3 = make_pair("Drilling C++",345.6f);

    //creating object to set values
    Student s1;
    s1.setStudent("Simran", 19);

    //making pair of custom data type
    p4 = make_pair(1,s1);

    //printing all the pairs
    cout << "\nPair 1 ";
    cout << "\n" << p1.first << " " << p1.second;
    cout << "\n\nPair 2";
    cout << "\n" << p2.first << " " << p2.second;
    cout << "\n\nPair 3";
    cout << "\n" << p3.first << " " << p3.second;
    cout << "\n\nPair 4";
    cout << "\n" << p4.first << " ";

    //p4.second returns student
    Student s = p4.second;
    s.showStudent();
    cout << endl;
}
