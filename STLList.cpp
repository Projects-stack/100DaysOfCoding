#include<iostream>
#include<list>
using namespace std;

// List ->

/*  1. List class supports a bidirectional, linear list.
    2. Vector supports random access but a list can be accessed sequentially only.
    3. List can be accessed from front to back and back to front.

 */

int main()
{
     list<int> l1{99, 44, 22, 55, 11, 66, 77, 33, 88};
    list<string> l2{"India", "Kathmandu", "Islamabad", "Dhaka"};

    // printing list elements using iterator pointer
    cout << "List elements are : " << endl;
    list<int> :: iterator p1 = l1.begin();
    while(p1!= l1.end()) {
        cout << *p1 << " ";
        p1++;
    }
    cout << endl << endl;

    // size()
    cout << "Total values in the list are : " << l1.size() << endl;

    // push_back() & push_front()
    l1.push_back(44);
    l1.push_front(5);
    cout << "\nAfter push_back() & push_front() : " << endl;
    list<int> :: iterator p2 = l1.begin();
    while(p2!= l1.end()) {
        cout << *p2 << " ";
        p2++;
    }
    cout << endl;

    // pop_back() & pop_front()
    l1.pop_back();
    l1.pop_front();
    list<int> :: iterator p3 = l1.begin();
    cout << "\nAfter pop_back() & pop_front() : " << endl;
    while(p3!= l1.end()) {
        cout << *p3 << " ";
        p3++;
    }
    cout << endl;

    // sort()
    l1.sort();
    list<int> :: iterator p4 = l1.begin();
    cout << "\nAfter sort()" << endl;
    while(p4 != l1.end()) {
        cout << *p4 << " ";
        p4++;
    }
    cout << endl;

    // reverse() the list
    l1.reverse();
    list<int> :: iterator p5 = l1.begin();
    cout << "\nAfter reverse()" << endl;
    while(p5 != l1.end()) {
        cout << *p5 << " ";
        p5++;
    }
    cout << endl;

    // remove() particular element
    // this will remove multiple occurrence of that element
    l1.push_back(44);
    l1.remove(44);

    // nothing will happen if you try to remove value which does not exits in the list
    l1.remove(100);

    list<int> :: iterator p6 = l1.begin();
    cout << "\nAfter remove()" << endl;
    while(p6 != l1.end()) {
        cout << *p6 << " ";
        p6++;
    }
    cout << endl;

    // clear()
    l1.clear();

    list<int> :: iterator p7 = l1.begin();
    cout << "\nAfter clear()" << endl;
    while(p7 != l1.end()) {
        cout << *p7 << " ";
        p7++;
    }
    cout << endl;
}
