// Ques 1. Turtle and Piggy are playing a game on a sequence. They are given a sequence 𝑎1,𝑎2,…,𝑎𝑛, and Turtle goes first. Turtle and Piggy alternate in turns (so, Turtle does the first turn, Piggy does the second, Turtle does the third, etc.).

// The game goes as follows:

// Let the current length of the sequence be 𝑚. If 𝑚=1, the game ends.
// If the game does not end and it's Turtle's turn, then Turtle must choose an integer 𝑖 such that 1≤𝑖≤𝑚−1, set 𝑎𝑖 to max(𝑎𝑖,𝑎𝑖+1), and remove 𝑎𝑖+1.
// If the game does not end and it's Piggy's turn, then Piggy must choose an integer 𝑖 such that 1≤𝑖≤𝑚−1, set 𝑎𝑖 to min(𝑎𝑖,𝑎𝑖+1), and remove 𝑎𝑖+1.
// Turtle wants to maximize the value of 𝑎1 in the end, while Piggy wants to minimize the value of 𝑎1 in the end. Find the value of 𝑎1 in the end if both players play optimally. Each test contains multiple test cases. The first line contains the number of test cases 𝑡 (1≤𝑡≤104). The description of the test cases follows.

// The first line of each test case contains a single integer 𝑛 (2≤𝑛≤105) — the length of the sequence.

// The second line of each test case contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎𝑖≤105) — the elements of the sequence 𝑎.

// It is guaranteed that the sum of 𝑛 over all test cases does not exceed 105.

// Output
// For each test case, output a single integer — the value of 𝑎1 in the end if both players play optimally.
// Input :- 5
// 2
// 1 2
// 3
// 1 1 2
// 3
// 1 2 3
// 5
// 3 1 2 2 3
// 10
// 10 2 5 2 7 9 2 5 10 7

// Output:- 2
// 1
// 2
// 2
// 7
// Explanation :- In the first test case, initially 𝑎=[1,2]. Turtle can only choose 𝑖=1. Then he will set 𝑎1 to max(𝑎1,𝑎2)=2 and remove 𝑎2. The sequence 𝑎 becomes [2]. Then the length of the sequence becomes 1, and the game will end. The value of 𝑎1 is 2, so you should output 2.



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int playGame(vector<int>& a) {
    bool turtleTurn = true;

    while (a.size() > 1) {
        int i = 0;
        if (turtleTurn) {
            // Turtle's turn: maximize the element and remove a[i+1]
            a[i] = max(a[i], a[i + 1]);
        } else {
            // Piggy's turn: minimize the element and remove a[i+1]
            a[i] = min(a[i], a[i + 1]);
        }
        a.erase(a.begin() + i + 1);
        turtleTurn = !turtleTurn; // Alternate turns
    }

    return a[0];
}

int main() {
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;

    while (t--) {
        int n;
        cout << "Enter the length of the sequence: ";
        cin >> n;

        vector<int> a(n);
        cout << "Enter the elements of the sequence: ";
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int result = playGame(a);
        cout << "Value of a1 in the end: " << result << endl;
    }

    return 0;
}

