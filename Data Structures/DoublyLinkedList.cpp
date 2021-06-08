#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};
struct Node *head;

void insert(int newdata) {
   struct Node *newnode = new Node;
   newnode->data = newdata;
   newnode->prev = NULL;
   newnode->next = head;
   if(head != NULL)
    head->prev = newnode ;
   head = newnode;
}

void display(struct Node *node) {
    while(node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {

    // Initialize nodes
    struct Node *one = NULL;
    struct Node *two = NULL;
    struct Node *three = NULL;

    // Allocate memory
    one = new Node;
    two = new Node;
    three = new Node;

    // Assign data values
    one->data = 1;
    two->data = 2;
    three->data = 3;

    // Connect nodes
    one->next = two;
    one->prev = NULL;

    two->next = three;
    two->prev = one;

    three->next = NULL;
    three->prev = two;

    // Save address of first node in head
    head = one;

    // Show data present in Doubly
    display(head);

    // Insertion at beginning
    insert(4);
    insert(5);
    cout << "After inserting element at beginning" << endl;
    display(head);
}
