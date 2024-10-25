// Ques 1. Write a function that takes a vector and returns the index of the first occurrence of a target value. If the target does not exist, return -1.
// Input: vec = {1, 3, 5, 7, 9}, target = 7
// Output: 3

// Input: vec = {2, 4, 6, 8}, target = 10
// Output: -1


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findIndex(const vector<int>& vec, int target) {
    auto it = find(vec.begin(), vec.end(), target);
    if (it != vec.end()) {
        return distance(vec.begin(), it);
    } else {
        return -1;
    }
}

int main() {
    vector<int> vec1 = {1, 3, 5, 7, 9};
    int target1 = 7;
    cout << "Output: " << findIndex(vec1, target1) << endl; // Output: 3

    vector<int> vec2 = {2, 4, 6, 8};
    int target2 = 10;
    cout << "Output: " << findIndex(vec2, target2) << endl; // Output: -1

    return 0;
}

 

// Ques 2. Implement a program to rotate the elements of a vector by k positions to the right. Use STL algorithms.
// Input: vec = {1, 2, 3, 4, 5}, k = 2
// Output: {4, 5, 1, 2, 3}

// Input: vec = {10, 20, 30, 40}, k = 1
// Output: {40, 10, 20, 30}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateRight(vector<int>& vec, int k) {
    int n = vec.size();
    k = k % n; // To handle cases where k >= n
    reverse(vec.begin(), vec.end());    //  smart way to reverse
    reverse(vec.begin(), vec.begin() + k); 
    reverse(vec.begin() + k, vec.end());
}

int main() {
    vector<int> vec1 = {1, 2, 3, 4, 5};
    int k1 = 2;
    rotateRight(vec1, k1);
    cout << "Output: ";
    for (int num : vec1) {
        cout << num << " ";
    }
    cout << endl; // Output: 4 5 1 2 3

    vector<int> vec2 = {10, 20, 30, 40};
    int k2 = 1;
    rotateRight(vec2, k2);
    cout << "Output: ";
    for (int num : vec2) {
        cout << num << " ";
    }
    cout << endl; // Output: 40 10 20 30

    return 0;
}
