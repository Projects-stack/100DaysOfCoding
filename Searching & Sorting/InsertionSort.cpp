#include<iostream>
using namespace std;

// Insertion Sort:
/*      It is a sorting algorithm that places an unsorted element in its suitable place in each iteration.    */

// Function to print an array
void printArray(int arr[], int size) {
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertionSort(int arr[], int size) {
    for(int i=1; i<size; i++) {
        int key = arr[i];
        int j = i-1;

        // Compare key with each element on the left of it until an element smaller than it is found.
        // For descending order, change condition key < arr[j] to key > arr[j];
        while(key < arr[j] && j >= 0) {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int data[] = {9, 5, 1, 4, 3};
    int size = sizeof(data)/sizeof(data[0]);
    cout << "Array before sort : \n";
    printArray(data, size);
    insertionSort(data, size);
    cout << "Sorted array in ascending order : \n";
    printArray(data, size);
    return 0;
}
