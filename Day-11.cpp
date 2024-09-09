// Ques 1: You are given an array and target value. Your task is to find the target value that exists in the array. If it exists inside an array then print YES otherwise NO.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: YES


#include <iostream>
#include <vector>
using namespace std;

string findTarget(const vector<int> arr, int target) {
    for (int num : arr) {
        if (num == target) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    vector<int> arr = {2, 4, 6, 7, 8};
    int target = 6;
    cout << findTarget(arr, target) << endl;
    return 0;
}



// Ques 2: You are given an array and target value. You have to find the index of target value. If target doest exist inside the array then print -1.Assume indexing is 1 based.

// Sample Input :- Array -[2,4,6,7,8]
// Target: 6
// Output: 3


#include <iostream>
#include <vector>
using namespace std;

int findTargetIndex(const vector<int> arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i + 1; // 1-based indexing
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 4, 6, 7, 8};
    int target = 6;
    cout << findTargetIndex(arr, target) << endl;
    return 0;
}
