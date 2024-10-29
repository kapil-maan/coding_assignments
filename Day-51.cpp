// Ques 1.Write a function to find the maximum depth of a node that matches a given value in a binary tree. If the value is not found, return -1.Input:
// 1
// / \
// 2 3
// / \
// 4 5
// Search for: 5
// Output: 3

// Search for: 6
// Output: -1


#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int maxDepth(TreeNode* root, int target, int depth) {
    if (root == NULL) {
        return -1;
    }
    if (root->val == target) {
        return depth;
    }
    int left = maxDepth(root->left, target, depth + 1);
    int right = maxDepth(root->right, target, depth + 1);
    
    if (left == -1) {
        return right;
    }
    if (right == -1) {
        return left;
    }
    return max(left, right);
}

int findMaxDepth(TreeNode* root, int target) {
    return maxDepth(root, target, 1);
}

int main() {
    // Construct the binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    int target1 = 5;
    cout << "Search for " << target1 << ": " << findMaxDepth(root, target1) << endl;

    int target2 = 6;
    cout << "Search for " << target2 << ": " << findMaxDepth(root, target2) << endl;

    // Clean up memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}


// Ques2. Write a function to find the value in a Binary Search Tree (BST) that is closest to a given target. Input:
// 10
// / \
// 5 15
// / \
// 3 7
// Target: 6
// Output: 5

// Target: 8
// Output: 7


#include <iostream>
#include <cmath>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int closestValue(TreeNode* root, double target) {
    TreeNode* current = root;
    int closest = root->val;

    while (current != NULL) {
        if (abs(target - current->val) < abs(target - closest)) {
            closest = current->val;
        }
        if (target < current->val) {
            current = current->left;
        } else {
            current = current->right;
        }
    }
    return closest;
}

int main() {
    // Construct the binary search tree
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(15);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(7);

    double target1 = 6;
    cout << "Closest value to " << target1 << ": " << closestValue(root, target1) << endl;

    double target2 = 8;
    cout << "Closest value to " << target2 << ": " << closestValue(root, target2) << endl;

    // Clean up memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
