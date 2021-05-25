// Array is a linear collection of similar elements.
// Array container in STL provides us the implementation of static array

// Member functions

/*
    -> Following are the important and most used member functions of array template
        1. at
        2. [] operator
        3. front()
        4. back()
        5. fill()
        6. swap()
        7. size()
        8. begin()
        9. end()
 */

#include<iostream>
#include<array>
using namespace std;

int main()
{
    // at()
    array <int, 5> arr = { 1, 2, 3, 4, 5};
    cout << "Value at index 2 : " << arr.at(2) << endl;

    // []
    cout << "Value using [] operator at index 1 : " << arr[1] << endl;

    // front() & back()
    cout << "First value in array using front() : " << arr.front() << endl;
    cout << "Last value in array using back() : " << arr.back() << endl;

    // fill()
    cout << "Using fill function : " << endl;
    arr.fill(10);
    for(int i=0; i<5; i++)
        cout << arr[i] << " ";
    cout << endl;

    // swap()
    cout << "Swapping: " << endl;
    array <int ,5> arr1 = {1, 2, 3, 4, 5};
    array <int ,5> arr2 = {11, 22, 33, 44, 55};
    arr1.swap(arr2);

    cout << "arr1 : " << endl;
    for(int i=0; i<5; i++)
        cout << arr1[i] << " ";
    cout << endl;

    cout << "arr2 : " << endl;
    for(int i=0; i<5; i++)
        cout << arr2[i] << " ";
    cout << endl;

    // size()
    cout << "Size of array is : " << arr.size() << endl;
}
