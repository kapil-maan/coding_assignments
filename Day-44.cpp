// Ques 1. Write a C++ program to represent a simple binary tree. Define a Node structure with integer data and pointers to the left and right children. Create a binary tree with the following structure:
// 1
// / \
// 2 3
// / \
// 4 5


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* createBinaryTree() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    return root;
}

int main() {
    Node* root = createBinaryTree();
    // Output for testing
    cout << "Tree created\nRoot value:- " << root->data << endl;
    return 0;
}



// Ques 2. Implement a function in C++ to perform a preorder traversal of a binary tree. Preorder traversal visits nodes in the following order: root, left, right.
// Write a program to print the preorder traversal of the tree structure below:
// Input :
// 1
// / \
// 2 3
// / \
// 4 5
// Expected Output :- 1 2 4 5 3


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* createBinaryTree() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    return root;
}

void preorderTraversal(Node* node) {
    if (node == nullptr) {
        return;
    }
    cout << node->data << " ";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

int main() {
    Node* root = createBinaryTree();
    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;
    return 0;
}
