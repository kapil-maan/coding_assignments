// Ques 1. Implement a function in C++ to perform an inorder traversal of a binary tree. Inorder traversal visits nodes in the following order: left, root, right.

// Perform inorder traversal on the following tree:
// 1
// / \
// 2 3
// / \
// 4 5
// Expected Output :- 4 2 5 1 3


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

void inorder(Node* root){
    if(root==NULL) return ;
    inorder(root->left);
    cout<<root->data<<" "; 
    inorder(root->right);
}

int main(){
    Node* root= createBinaryTree();

    cout<<"Inorder Traversal :- ";
    inorder(root);
}



// Ques 2. mplement a function in C++ to perform a postorder traversal of a binary tree. Postorder traversal visits nodes in the following order: left, right, root.

// Perform postorder traversal on the following tree:
// 1
// / \
// 2 3
// / \
// 4 5
// Expected Output :- 4 5 2 3 1


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

void postorder(Node* root){
    if(root==NULL) return ;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" "; 
}

int main(){
    Node* root= createBinaryTree();

    cout<<"Postorder Traversal :- ";
    postorder(root);
}