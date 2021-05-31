#include<iostream>
#define MAX 10

using namespace std;

// Stack ->
/*  Stack is a linear data structure which follows a particular order in which the operations are performed.
  The order may be LIFO(Last In First Out) or FILO(First In Last Out).

    Applications of Stack Data Structure :
    ---------------------------------------

    1. To reverse a word - Put all the letters in a stack and pop them out. Because of the LIFO order of stack,
      you will get the letters in reverse order.
    2. In compilers - Compilers use the stack to calculate the value of expressions like 2 + 4 / 5 * (7 - 9) by
      converting the expression to prefix or postfix form.
    3. In browsers - The back button in a browser saves all the URLs you have visited previously in a stack. Each
      time you visit a new page, it is added on top of the stack. When you press the back button, the current URL
      is removed from the stack, and the previous URL is accessed.
*/

// global variable
int size = 0;

// creating a stack
struct stack {
    int items[MAX];
    int top;
};

typedef struct stack st;

// creating an empty stack
void createEmptyStack(st *s) {
    s->top = -1;
}

// checking stack is full condition
int isFull(st *s) {
    if(s->top == MAX-1)
        return 1;
    else
        return 0;
}

// checking if stack is empty
int isEmpty(st *s) {
    if(s->top == -1)
        return 1;
    else
        return 0;
}

// add an element into stack
void push(st *s, int newItem) {
    if(isFull(s)) {
        cout << "\nStack Full!" << endl;
    }
    else {
        s->top++;
        s->items[s->top] = newItem;
    }
    size++;
}

// remove element from the stack
void pop(st *s) {
    if(isEmpty(s)) {
        cout << "\nStack Empty!" << endl;
    }
    else {
        cout << "Popped item is : " << s->items[s->top] << endl;
        s->top--;
    }
    size--;
}

// print elements of stack
void printStack(st *s) {
    cout << "Stack : " << endl;
    for(int i=0; i < size; i++) {
        cout << s->items[i] << " ";
    }
    cout << endl;
}

// peek an element of stack
void peekTopElement(st *s) {
    cout << "Element on top of the stack is : " << s->items[s->top] << endl;
}

int main()
{
    st *s = new st;

    createEmptyStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    push(s, 5);
    push(s, 6);

    printStack(s);

    peekTopElement(s);

    pop(s);

    printStack(s);

    peekTopElement(s);
    return 0;
}
