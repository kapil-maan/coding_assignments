// Ques 1. Write a function to search for a specific value in a binary tree. If the value is found, return true; otherwise, return false. Use a recursive approach.
// Input:
// 10
// / \
// 5 15
// / \ \
// 3 7 18
// Search for: 7
// Output: true

// Search for: 20
// Output: false

/*
#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool searchValue(TreeNode* root, int target) {
    if (root == NULL) {
        return false;
    }
    if (root->val == target) {
        return true;
    }
    return searchValue(root->left, target) || searchValue(root->right, target);
}

int main() {
    // Construct the binary tree
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);
    root->right->right = new TreeNode(18);

    int target1 = 7;
    cout << "Search for " << target1 << ": " << (searchValue(root, target1) ? "true" : "false") << endl;

    int target2 = 20;
    cout << "Search for " << target2 << ": " << (searchValue(root, target2) ? "true" : "false") << endl;

    // Clean up memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right->right;
    delete root->right;
    delete root;

    return 0;
}
*/


// Ques 2. Write a function to find the minimum value in a Binary Search Tree (BST).
// Input:
// 20
// / \
// 10 30
// / \
// 5 15
// Output: 5

// Input:
// 50
// /
// 40
// /
// 30
// Output: 30


#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int findMinValue(TreeNode* root) {
    if (root == NULL) {
        cout << "The tree is empty." << endl;
        return -1;
    }
    TreeNode* current = root;
    while (current->left != NULL) {
        current = current->left;
    }
    return current->val;
}

int main() {
    // Construct the binary search tree
    TreeNode* root1 = new TreeNode(20);
    root1->left = new TreeNode(10);
    root1->right = new TreeNode(30);
    root1->left->left = new TreeNode(5);
    root1->left->right = new TreeNode(15);

    cout << "The minimum value in the BST is: " << findMinValue(root1) << endl;

    // Construct another binary search tree
    TreeNode* root2 = new TreeNode(50);
    root2->left = new TreeNode(40);
    root2->left->left = new TreeNode(30);

    cout << "The minimum value in the BST is: " << findMinValue(root2) << endl;

    // Clean up memory
    delete root1->left->left;
    delete root1->left->right;
    delete root1->left;
    delete root1->right;
    delete root1;
    delete root2->left->left;
    delete root2->left;
    delete root2;

    return 0;
}
