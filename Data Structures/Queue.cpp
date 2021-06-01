#include<iostream>
#define SIZE 5
using namespace std;

// Queue ->

/*     1. A Queue is a linear structure which follows a particular order in which the operations are performed.
        The order is First In First Out (FIFO).
       2. Queue is used when things don’t have to be processed immediately, but have to be processed in First
        In First Out order like Breadth First Search. This property of Queue makes it also useful in following kind of scenarios.
       3. Applications of Queue ->
            1) When a resource is shared among multiple consumers. Examples include CPU scheduling, Disk Scheduling.
            2) When data is transferred asynchronously (data not necessarily received at same rate as sent) between two processes.
              Examples include IO Buffers, pipes, file IO, etc.
            3) In Operating systems:
                a) Semaphores
                b) FCFS ( first come first serve) scheduling, example: FIFO queue
                c) Spooling in printers
                d) Buffer for devices like keyboard
            4) In Networks:
                a) Queues in routers/ switches
                b) Mail Queues
*/

class Queue {
    private:
        int front, rear, items[SIZE];
    public:

        // set defaults
        Queue() {
            front = -1;
            rear = -1;
        }

        // check if queue is full
        int isFull() {
            if(front == 0 && rear == SIZE-1)
                return 1;
            else
                return 0;
        }

        // check if queue is empty
        int isEmpty() {
            if(front == -1)
                return 1;
            else
                return 0;
        }

        // Add item at the end of Queue
        void enQueue(int item) {
            if(isFull()) {
                cout << "\nQueue is full!" << endl;
            }
            else {
                if(front == -1)
                    front = 0;
                rear++;
                items[rear] = item;
                cout << "\nInserted : " << item << endl;
            }
        }

        // Deleting first element of the Queue
        int deQueue() {
            if(isEmpty()) {
                cout << "\nQueue is empty!" << endl;
                return -1;
            }
            else {
                cout << "\nDeleted element is : " << items[front] << endl;
                // deleting last item of queue
                // we reset the Queue after deleting last element
                if(front >= rear) {
                    front = -1;
                    rear = -1;
                }
                else {
                    front++;
                }
            }
        }

        // Display elements of Queue
        void display() {
            if(isEmpty()) {
                cout << endl << "Empty Queue!" << endl;
            }
            else {
                cout << endl << "Front Index -> " << front << endl;
                cout << "Items -> " << endl;
                for(int i=front; i<=rear; i++) {
                    cout << items[i] << " ";
                }
                cout << endl << "Rear Index -> " << rear << endl;
            }
        }
};
int main()
{
    Queue q;

  //deQueue is not possible on empty queue
  q.deQueue();

  //enQueue 5 elements
  q.enQueue(1);
  q.enQueue(2);
  q.enQueue(3);
  q.enQueue(4);
  q.enQueue(5);

  // 6th element can't be added to because the queue is full
  q.enQueue(6);

  q.display();

  //deQueue removes element entered first i.e. 1
  q.deQueue();

  //Now we have just 4 elements
  q.display();

    return 0;
}
