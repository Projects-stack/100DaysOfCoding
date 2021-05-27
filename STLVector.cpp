#include<iostream>
#include<vector>
using namespace std;

// Vector ->

/*  1. The most general purpose container is the vector.
    2. It supports a Dynamic Array.
    3. Array size is fixed, no flexibility to grow or shrink during execution.
    4. Vectors can provide memory flexibility.
    5. capacity() function gives number of blocks available to insert data
    6. size() function will return number of elements present in vector
 */


 int main()
 {
     // initial capacity of following vector will be 3
     // compile time initialization
     vector<int> v1 {10, 20, 30, 40, 50};

     // declaring vector of specific size
     vector<char> v2(4);

     // declaring vector with initialization and of specific size
     // following vector will contain 5 int blocks with each block having value 10
     vector<int> v3(5,10);
     vector<string> v4(3,"hello");

     // using [] operator on vector
     cout<< v4[0] << " " << v4[1] << " " << v4[2] << endl;

     // using for loop to print vector
     for(int i=0; i<5; i++) {
        cout << v1[i] << " ";
     }
     cout << endl;

     // push_back() & capacity() function
     vector<int> v5;
     cout << "Current capacity is: " << v1.capacity() << endl;
     v1.push_back(10);
     cout << "Current capacity is: " << v1.capacity() << endl;
     v1.push_back(20);
     cout << "Current capacity is: " << v1.capacity() << endl;
     v1.push_back(30);
     cout << "Current capacity is: " << v1.capacity() << endl;

     // pop_back() & size()
     vector<int> v6;
     for(int i=0; i<10; i++) {
        v6.push_back(10*(i+1));
     }
     cout << "Current capacity is: " << v1.capacity() << endl;
     cout << "After pop : \n";
     v6.pop_back();
     cout << "Current capacity is: " << v1.capacity() << endl;
     v6.pop_back();
     cout << "Current capacity is: " << v1.capacity() << endl;
     v6.pop_back();
     cout << "Current capacity is: " << v1.capacity() << endl;
     cout << "Total number of elements are : " << v1.size() << endl;

     for(int i=0; i<v6.size(); i++) {
        cout << v6[i] << " ";
     }
     cout << endl;

     // at() function
     cout << "Value at index 3 is using at() : " << v1.at(3) << endl;

     // front() and back() functions
     cout << "First value is : " << v1.front();
     cout << "Last value is : " << v1.back();

     // clear() function to delete all the elements from vector
     v1.clear();
     cout << "After clear" << endl;
     cout << "Current capacity of v1 is: " << v1.capacity() << endl;
     cout << "Current size of v1 is: " << v1.size() << endl;

     // using iterator on vector
     vector<int> v7 {10, 20, 30, 40, 50};
     vector<int> :: iterator it = v7.begin();

     // inserting element at 3rd index
     v7.insert(it+3, 35);

     cout <<"\nVector v7 : " << endl;
     // printing vector
     for(int i=0; i<v7.size(); i++) {
        cout << v7[i] << " ";
     }
     cout << endl;

 }
