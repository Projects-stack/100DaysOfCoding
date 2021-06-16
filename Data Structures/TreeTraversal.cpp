#include<iostream>
using namespace std;

/*      1. Traversing a tree means visiting every node in the tree. You might, for instance, want to add all the values
    in the tree or find the largest one. For all these operations, you will need to visit each node of the tree.

        2. Linear data structures like arrays, stacks, queues and linked list have only one way to read the data. But a
    hierarchical data structure like a tree can be traversed in different ways.

                    struct node {
                        int data;
                        struct node *left;
                        struct node *right;
                    };

        3. The structure node pointed to by left and right might have other left and right children so we should think
    of them as sub-trees instead of sub-nodes.

        According to this structure, every tree is a combination of
            1. A node carrying data
            2. Two subtrees

        4. Types of tree traversal depending on the order in which we visit the nodes :

            a) In-order Traversal :

                -> First visit all the nodes in the left subtree
                -> Then the root node
                -> Visit all the nodes in the right subtree
                ................................
                    inOrder(root->left)
                    display(root->data)
                    inOrder(root->right)
                ................................

            b) Pre-Order traversal :

                -> Visit root node
                -> Visit all the nodes in the left subtree
                -> Visit all the nodes in the right subtree
                ................................
                    display(root->data)
                    preOrder(root->left)
                    preOrder(root->right)
                ................................

            c) Post-Order traversal :

                -> Visit all the nodes in the left subtree
                -> Visit all the nodes in the right subtree
                -> Visit the root node
                ................................
                    postOrder(root->left)
                    postOrder(root->right)
                    display(root->data)
                ................................
*/

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

// PreOrder Traversal
void preorderTraversal(struct Node *node) {
    if(node == NULL)
        return;

    cout << node->data << "->";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

// PostOrder Traversal
void postorderTraversal(struct Node *node) {
    if(node == NULL)
        return;

    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout << node->data << "->";
}

//InOrder Traversal
void inorderTraversal(struct Node *node) {
    if(node == NULL)
        return;

    inorderTraversal(node->left);
    cout << node->data << "->";
    inorderTraversal(node->right);
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);

    cout << "Inorder Traversal : ";
    inorderTraversal(root);

    cout << "\nPreorder Traversal : ";
    preorderTraversal(root);

    cout << "\nPostorder Traversal : ";
    postorderTraversal(root);

    return 0;
}
