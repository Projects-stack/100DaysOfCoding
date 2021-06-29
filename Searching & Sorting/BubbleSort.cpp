#include<iostream>
using namespace std;

// Bubble Sort
/*      Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them
    if they are not in the intended order.
*/

// perform bubble sort
void bubbleSort(int arr[], int size) {
  for (int i = 0; i < (size-1); i++) {
    int swapped = 0;
    for (int j = 0; j < (size-i-1); j++) {

      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;

        swapped = 1;
      }
    }

    // no swapping means the array is already sorted
    // so no need of further comparison
    if (swapped == 0)
      break;
  }
}

// print array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << "  " << arr[i];
  }
  cout << "\n";
}

int main()
{
    int data[] = {-2, 45, 100, 11, -9};
    // find array's length
    int size = sizeof(data) / sizeof(data[0]);

    bubbleSort(data, size);

    cout << "Sorted Array in Ascending Order:\n";
    printArray(data, size);

    return 0;
}
