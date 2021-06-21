#include<iostream>
using namespace std;

// Perfect Binary Tree :-
/*          1. A perfect binary tree is a type of binary tree in which every internal node has exactly
    two child nodes and all the leaf nodes are at the same level.

            2. All the internal nodes have a degree of 2.

            3. Recursively, a perfect binary tree can be defined as:
                ->If a single node has no children, it is a perfect binary tree of height h = 0,
                ->If a node has h > 0, it is a perfect binary tree if both of its subtrees are
                 of height h - 1 and are non-overlapping.

            4. Perfect Binary Tree Theorem :
                    1) A perfect binary tree of height h has 2h + 1 – 1 node.
                    2) A perfect binary tree with n nodes has height log(n + 1) – 1 = Θ(ln(n)).
                    3) A perfect binary tree of height h has 2h leaf nodes.
                    4) The average depth of a node in a perfect binary tree is Θ(ln(n)).

*/

struct Node {
    int data;
    struct Node *left, *right;
};

int depth(Node *node) {
    int d = 0;
    while(node != NULL) {
        d++;
        node = node->left;
    }
    return d;
}

bool isPerfectR(struct Node *root, int d, int level = 0) {
    if(root == NULL)
        return true;
    if(root->left == NULL && root->right == NULL)
        return (d == level+1);
    if(root->left == NULL || root->right == NULL)
        return false;
    return isPerfectR(root->left, d, level+1) && isPerfectR(root->right, d, level+1);
}

bool isPerfect(Node *root) {
    int d = depth(root);
    return isPerfectR(root, d);
}

struct Node *newNode(int k) {
    struct Node *node = new Node;
    node->data = k;
    node->right = node->left = NULL;
    return node;
};

int main()
{
    struct Node *root = NULL;
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);

    if(isPerfect(root))
        cout << "The tree is a perfect binary tree.\n";
    else
        cout << "The tree is not a perfect binary tree.\n";

    return 0;
}
