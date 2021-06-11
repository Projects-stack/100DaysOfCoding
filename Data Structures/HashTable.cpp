#include<iostream>
#include<list>
using namespace std;

//  Hash Table :
/*
    1. The Hash table data structure stores elements in key-value pairs where
          Key- unique integer that is used for indexing the values
          Value - data that are associated with keys.

    2. Hashing (Hash Function)
        In a hash table, a new index is processed using the keys. And, the element corresponding to that key
      is stored in the index. This process is called hashing.

    3. Hash Collision
        When the hash function generates the same index for multiple keys, there will be a conflict
      (what value to be stored in that index). This is called a hash collision.

    4. We can resolve the hash collision using one of the following techniques.
        A)Collision resolution by chaining
        B)Open Addressing: Linear/Quadratic Probing and Double Hashing
    ----------------------------------------------------------------------------------------------------------------------
        A) Collision resolution by chaining :
            In chaining, if a hash function produces the same index for multiple elements, these elements are
            stored in the same index by using a doubly-linked list.

        B) Open Addressing :
            Unlike chaining, open addressing does not store multiple elements into the same slot. Here, each slot
            is either filled with a single key or left NIL.

            1. Linear Probing :
                -> In linear probing, collision is resolved by checking the next slot.
                        h(k, i) = (h′(k) + i) mod m
                        where,
                            i = {0, 1, ….}
                            h'(k) is a new hash function
                -> If a collision occurs at h(k, 0), then h(k, 1) is checked. In this way, the value of i is incremented linearly.
                -> The problem with linear probing is that a cluster of adjacent slots is filled. When inserting a new element,
                  the entire cluster must be traversed. This adds to the time required to perform operations on the hash table.

            2. Quadratic Probing :
                -> It works similar to linear probing but the spacing between the slots is increased (greater than one).
                        h(k, i) = (h′(k) + c1 * i + c2 *  i^2) mod m
                        where,
                            c1 and c2 are positive auxiliary constants,
                            i = {0, 1, ….}

            3. Double hashing :
                -> If a collision occurs after applying a hash function h(k), then another hash function is calculated for finding the next slot.
                        h(k, i) = (h1(k) + ih2(k)) mod m
*/

class HashTable {
    private:
        int capacity;
        list<int> *table;
    public:
        HashTable(int V);
        void insertItem(int key, int data);
        void deleteItem(int key);

        int checkPrime(int n) {
            int i;
            if (n == 1 || n == 0)
                return 0;
            for (i = 2; i < n / 2; i++) {
              if (n % i == 0)
                  return 0;
            }
            return 1;
          }

        int getPrime(int n) {
            if (n % 2 == 0)
                n++;
            while (!checkPrime(n))
                n += 2;
            return n;
          }

        int hashFunction(int key) {
            return (key % capacity);
        }

        void displayHash();

};

HashTable::HashTable(int c) {
  int size = getPrime(c);
  this->capacity = size;
  table = new list<int>[capacity];
}

void HashTable::insertItem(int key, int data) {
  int index = hashFunction(key);
  table[index].push_back(data);
}

void HashTable::deleteItem(int key) {
  int index = hashFunction(key);
  list<int>::iterator i;

  for (i = table[index].begin(); i != table[index].end(); i++) {
  if (*i == key)
    break;
  }

  if (i != table[index].end())
    table[index].erase(i);
}

void HashTable::displayHash() {
  for (int i = 0; i < capacity; i++) {
  cout << "table[" << i << "]";
  for (auto x : table[i])
    cout << " --> " << x;
  cout << endl;
  }
}

int main()
{
    int key[] = {231, 321, 212, 321, 433, 262};
    int data[] = {123, 432, 523, 43, 423, 111};
    int size = sizeof(key) / sizeof(key[0]);

    HashTable h(size);

    for (int i = 0; i < size; i++)
        h.insertItem(key[i], data[i]);

    h.deleteItem(12);
    h.displayHash();
    return 0;
}
