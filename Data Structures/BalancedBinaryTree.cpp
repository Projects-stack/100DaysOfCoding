#include<iostream>
using namespace std;

// Balanced Binary Tree :
/*      A balanced binary tree, also referred to as a height-balanced binary tree, is defined as a binary tree
    in which the height of the left and right subtree of any node differ by not more than one.

        Following are the conditions for a height-balanced binary tree:

            1. Difference between the left and the right subtree for any node is not more than one
            2. The left subtree is balanced
            3. The right subtree is balanced
*/

class Node {
    public:
        int data;
        Node *left, *right;
};

// Create New Node
Node *newNode(int data) {
    Node *node = new Node();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Check height balance
bool checkHeightBalance(Node *root, int *height) {
    // Check for emptiness
    int leftHeight = 0, rightHeight = 0;
    int l = 0, r = 0;

    if(root == NULL) {
        *height = 0;
        return 1;
    }

    l = checkHeightBalance(root->left, height);
    r = checkHeightBalance(root->right, height);

    *height = (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;

    if(abs(leftHeight - rightHeight) >= 2)
        return 0;
    else
        return l && r;
}

int main()
{
    int height = 0;

    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    if (checkHeightBalance(root, &height))
    cout << "The tree is balanced";
    else
    cout << "The tree is not balanced";

    return 0;
}
