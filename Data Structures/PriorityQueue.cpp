#include<iostream>
#include<vector>
using namespace std;

// Priority Queue ->
/*  1. In a queue, the first-in-first-out rule is implemented whereas, in a priority queue,
      the values are removed on the basis of priority. The element with the highest priority
      is removed first.
    2. Priority queue can be implemented using
        a) Array    b) Linked-list
        c) Binary search tree
        d) Heap data structure

        Heap data structure provides an efficient implementation of priority queues.
        -------------------
    3. To implemented Priority Queue Here I've used max-heap


//  Heap ->
    1. Heap data structure is a complete binary tree that satisfies the heap property. It is also called as
     a binary heap. A complete binary tree is a special binary tree in which
        a) every level, except possibly the last, is filled
        b) all the nodes are as far left as possible

    2. (for min heap) key of each node is always smaller than the child node/s and the key of the root node
      is the smallest among all other nodes.

    3. (for max heap) key of each node is always greater than its child node/s and the key of
      the root node is the largest among all other nodes;
 */


// Function to swap position of two elements
void swap(int *a, int *b) {
  int temp = *b;
  *b = *a;
  *a = temp;
}

// Function to heapify the tree
void heapify(vector<int> &hT, int i) {
  int size = hT.size();

  // Find the largest among root, left child and right child
  int largest = i;
  int l = 2 * i + 1;
  int r = 2 * i + 2;
  if (l < size && hT[l] > hT[largest])
    largest = l;
  if (r < size && hT[r] > hT[largest])
    largest = r;

  // Swap and continue heapifying if root is not largest
  if (largest != i) {
    swap(&hT[i], &hT[largest]);
    heapify(hT, largest);
  }
}

// Function to insert an element into the tree
void insert(vector<int> &ht, int newNum) {
    int size = ht.size();
    if(size == 0) {
        ht.push_back(newNum);
    }
    else {
        ht.push_back(newNum);
        for(int i = (size/2) - 1; i >= 0; i--) {
            heapify(ht, i);
        }
    }
}

// Function to delete an element from the tree
void deleteNode(vector<int> &ht, int num) {
    int size = ht.size();
    int i;
    for(i = 0; i < size; i++) {
        if(num == ht[i])
            break;
    }
    swap(&ht[i], &ht[size - 1]);

    ht.pop_back();
    for (int i = (size/2) - 1; i >= 0; i--) {
        heapify(ht, i);
    }
}

// Print the tree
void printArray(vector<int> &ht) {
    for(int i=0; i<ht.size(); i++)
        cout << ht[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    vector<int> heapTree;

    insert(heapTree, 3);
    insert(heapTree, 4);
    insert(heapTree, 9);
    insert(heapTree, 5);
    insert(heapTree, 2);

    cout << "Max-Heap array : " << endl;
    printArray(heapTree);

    deleteNode(heapTree, 4);

    cout << "After deleting an element: " << endl;

    printArray(heapTree);

    deleteNode(heapTree, 5);

    cout << "After deleting an element: " << endl;

    printArray(heapTree);
}
