#include<iostream>
using namespace std;

// Selection Sort
/*      Selection sort is a sorting algorithm that selects the smallest element from an unsorted list
    in each iteration and places that element at the beginning of the unsorted list.
*/

// function to swap the position of two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// function to print an array
void printArray(int arr[], int size) {
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void selectionSort(int arr[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int min_index = i;
        for(int j = i + 1; j < size; j++) {
            if(arr[j] < arr[min_index])
                min_index = j;
        }

        swap(&arr[min_index], &arr[i]);
    }
}

int main()
{
    int data[] = {20, 12, 10, 15, 2};
    int size = sizeof(data) / sizeof(data[0]);

    cout << "Initially given array is : ";
    printArray(data, size);

    selectionSort(data, size);

    cout << "Sorted array in Ascending Order:\n";
    printArray(data, size);

    return 0;
}
