#include<iostream>
using namespace std;

// Complete Binary Tree :
/*      -> A complete binary tree is a binary tree in which all the levels are completely filled except possibly
    the lowest one, which is filled from the left.
        -> A complete binary tree is just like a full binary tree but with two major differences :
                1.  All the leaf elements must lean towards the leaf.
                2.  The last leaf element might not have a right sibling i.e. a complete binary tree doesn't have to
                    be a full binary tree.

        -> Relationship between array indexes and Complete Binary tree element :
            1) The element in the index 2i+1 is left child
            2) Element in 2i+2 index will become the right child
            3) The parent of any element at index i is given by the lower bound of (i-1)/2.
*/

struct Node {
    int data;
    struct Node *left, *right;
};

// Create Node
struct Node * newNode(int data) {
    struct Node *node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
};

// Count the number of nodes
int countNumNodes(struct Node *root) {
    if(root == NULL)
        return 0;
    return (1 + countNumNodes(root->left) + countNumNodes(root->right));
}

// Check if the tree is a complete binary tree
bool checkComplete(struct Node *root, int index, int numberNodes) {
    // Check if the tree is empty
    if(root == NULL)
        return true;
    if(index >= numberNodes)
        return false;

    return (checkComplete(root->left, 2 * index + 1, numberNodes) && checkComplete(root->right, 2 * index + 2, numberNodes));
}

int main()
{
    struct Node *root = NULL;
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);

    int node_count = countNumNodes(root);

    int index = 0;

    if(checkComplete(root, index, node_count))
        cout << "The tree is a complete binary tree\n";
    else
        cout << "The tree is not a complete binary tree\n";

    return 0;
}
