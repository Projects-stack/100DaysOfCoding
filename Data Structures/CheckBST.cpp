#include<iostream>
using namespace std;


/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node {
    int data;
    Node* left, * right;
};

    Should return true if tree represented by root is BST.
For example, return  value should be 1 for following tree.
         20
        /  \
      10    30
  and return value should be 0 for following tree.
         10
        /  \
       20   30
*/


struct Node {
  int key;
  struct Node *left, *right;
};

// Create a node
struct Node *newNode(int item) {
  struct Node *temp = new Node;
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

bool checkBST(Node* root,int mn,int mx){
    if(root == NULL) return true;
    if(root->key <= mn || root->key >= mx)return false;
    return checkBST(root->left, mn, root->key) && checkBST(root->right, root->key, mx);
}
bool isBST(Node* root) {
    return checkBST(root,INT_MIN,INT_MAX);
}

int main()
{
    struct Node *root = NULL;
    root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(11);

    cout << isBST(root);
}
