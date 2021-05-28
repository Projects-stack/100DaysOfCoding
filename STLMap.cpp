#include<iostream>
#include<map>
using namespace std;

// map ->
/*  1. Maps represent associative arrays
    2. Maps contain sorted key-value pair, in which each key is unique and cannot be changed,
      and it can be inserted or deleted but cannot be altered
    3. Maps always arrange its keys in sorted order
    4. In case the keys are of string type, they are sorted in dictionary order.
*/

int main()
{
    map<int, string> customer;

    // index based initialization
    customer[100] = "Gajendra";
    customer[125] = "Dilip";
    customer[150] = "Aditya";
    customer[200] = "Shahid";
    customer[250] = "Rajesh";

    // compile time initialization
    map<int, string> c {
        {
            100,
            "Sanjay"
        },
        {
            200,
            "Sayali"
        },
        {
            300,
            "Savita"
        },
        {
            400,
            "Sanket"
        }
    };

    // printing map using map iterator
    map<int, string> :: iterator p = customer.begin();
    while(p != customer.end()) {
        cout << p->second << " ";
        p++;
    }
    cout << endl;

    // at()
    cout << "\nCustomer at 200 : " <<customer.at(200) << endl;

    // [] operator
    cout << "\nUsing [] operator customer at 100 : " << customer[100] << endl;

    // empty()
    // returns 0 or 1 based on map is empty or not
    cout << "\nIs map empty or not : " << customer.empty() << endl;

    // insert(pair<data_type, data_type>(x, y));
    cout << "\nInserting element at custom index in map" << endl;
    customer.insert(pair<int, string>(300,"Saurabh"));

    cout<< "\nAfter inserting : ";
    map<int, string> :: iterator p1 = customer.begin();
    while(p1 != customer.end()) {
        cout << p1->second << " ";
        p1++;
    }
    cout << endl;

    // clear()
    customer.clear();
    cout << "\nAfter clear() function" << endl;
    map<int, string> :: iterator p2 = customer.begin();
    while(p2 != customer.end()) {
        cout << p2->second << " ";
        p2++;
    }
    cout << endl;
}
