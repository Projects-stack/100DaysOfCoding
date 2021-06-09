#include<iostream>
using namespace std;

//  Circular linked list
/*      1. Circular linked list is a linked list where all nodes are connected to form a circle.
          There is no NULL at the end. A circular linked list can be a singly circular linked list
          or doubly circular linked list.

          Advantages of Circular Linked Lists:
            1) Any node can be a starting point. We can traverse the whole list by starting from any point.
              We just need to stop when the first visited node is visited again.

            2) Useful for implementation of queue. Unlike this implementation, we don’t need to maintain
              two pointers for front and rear if we use circular linked list. We can maintain a pointer to
              the last inserted node and front can always be obtained as next of last.
*/

struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int newData) {
    struct Node *newNode = new Node;
    struct Node *ptr = head;
    newNode->data = newData;
    newNode->next = head;
    if(head != NULL) {
        while(ptr->next != head) {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    else {
        newNode->next = newNode;
    }
    head = newNode;
}

void display() {
    struct Node *ptr;
    ptr = head;
    do {
        cout << ptr->data << " ";
        ptr = ptr->next;
    } while(ptr != head);
}


int main()
{
    insert(3);
    insert(1);
    insert(7);
    insert(2);
    insert(9);
    cout<<"The circular linked list is: ";
    display();
    return 0;
}
