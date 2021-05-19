#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of an array : ";
    cin >> n;

    // dynamic allocation of memory using new keyword
    int *arr = new int[n]; // declared array of size n dynamically
    cout << "Enter array elements : " << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are : ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // deleting the dynamically allocated memory using delete keyword
    delete []arr;
    cout << "Deleted allocated memory!" << endl;

    return 0;
}
