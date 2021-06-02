#include<iostream>
#define SIZE 5 // Size of a Circular Queue
using namespace std;

// Circular Queue

/*  1. In a circular queue, the last element points to the first element making a circular link.
    2.The main advantage of a circular queue over a simple queue is better memory utilization.
     If the last position is full and the first position is empty, we can insert an element in the first position.
     This action is not possible in a simple queue.
*/

class Queue {
    private:
        int items[SIZE], front, rear;

    public:
        Queue() {
            front = -1;
            rear = -1;
        }

        // Check if Queue is Full
        bool isFull() {
            if(front == 0 && rear == SIZE - 1)
                return true;
            if(front == rear + 1)
                return true;
            return false;
        }

        // Check if Queue is Empty
        bool isEmpty() {
            if(front == -1)
                return true;
            else
                return false;
        }

        // Adding an element in the Queue
        void enQueue(int element) {
            if(isFull()) {
                cout << "\nQueue is Full\n";
            }
            else {
                if(front == -1 )
                    front = 0;
                rear = (rear + 1) % SIZE;
                items[rear] = element;
                cout << "\nInserted : " << element << endl;
            }
        }

        // Removing an element from Queue
        int deQueue() {
            int element;
            if(isEmpty()) {
                cout << "\nQueue is Empty!\n";
                return -1;
            }
            else {
                element = items[front];
                // After deleting last element.
                // Here we reset the queue.
                if(front == rear) {
                    front = -1;
                    rear = -1;
                }
                else {
                    front = (front + 1) % SIZE;
                }
                return element;
            }
        }

        // Show elements present in the Circular Queue
        void display() {
            int i;
            if(isEmpty()) {
                cout << "\nEmpty Queue!\n";
            }
            else {
                cout << "\nFront : " << front << endl;
                cout << "Items -> "<< endl;
                for(i = front; i != rear; i = (i+1)%SIZE)
                    cout << items[i] << " ";
                cout << items[i] << endl;
                cout << "Rear : " << rear << endl;
            }
        }
};

int main()
{
    Queue q;

    // Fails because front = -1
    q.deQueue();

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    // Fails to enQueue because front == 0 && rear == SIZE - 1
    q.enQueue(6);

    q.display();

    int ele = q.deQueue();
    if(ele != -1) {
        cout << endl << "Deleted Element is : " << ele;
    }

    q.display();

    q.enQueue(7);

    q.display();

    // Fails to enQueue because front == rear + 1
    q.enQueue(8);

    return 0;
}
