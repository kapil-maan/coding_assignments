// Ques 1. Write a C++ function to calculate the height (or depth) of a binary tree. The height of a binary tree is the number of edges in the longest path from the root to a leaf node.

// For the binary tree below, calculate the height:
// 1
// / \
// 2 3
// / \
// 4 5

// Output :- Height of the tree: 2


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int calculateHeight(Node* node) {
    if (node == nullptr) {
        return -1; // height of empty tree is -1, height of leaf node is 0
    }
    int leftHeight = calculateHeight(node->left);
    int rightHeight = calculateHeight(node->right);
    return max(leftHeight, rightHeight) + 1;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    cout << "Height of the tree: " << calculateHeight(root) << endl;

    return 0;
}


// Ques 2. Write a C++ function to count the total number of nodes in a binary tree. Implement a recursive approach.
// For the tree below, calculate the total number of nodes:

// 1
// / \
// 2 3
// / \
// 4 5

// Output :Total number of nodes: 5


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

int countNodes(Node* node) {
    if (node == nullptr) {
        return 0;
    }
    return 1 + countNodes(node->left) + countNodes(node->right);
}


int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    
    cout << "Total number of nodes: " << countNodes(root) << endl;

    return 0;
}



// Ques 3. Write a C++ function to find the maximum value stored in a binary tree. Implement a recursive solution to traverse the tree and find the largest element.
// For the tree below, find the maximum value:
// 10
// / \
// 20 30
// / \
// 40 50

// Output:- Maximum value: 50


#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};


int findMaxValue(Node* node) {
    if (node == nullptr) {
        return INT_MIN; // return the minimum possible value if the node is null
    }
    int leftMax = findMaxValue(node->left);
    int rightMax = findMaxValue(node->right);
    return max(node->data, max(leftMax, rightMax));
}


int main() {

    Node* root2 = new Node(10);
    root2->left = new Node(20);
    root2->right = new Node(30);
    root2->left->left = new Node(40);
    root2->left->right = new Node(50);

    cout << "Maximum value: " << findMaxValue(root2) << endl;

    return 0;
}
