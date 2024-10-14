// Ques 1. You are working as a software developer for a company that creates data validation systems. One of the key components of your system is ensuring that data entries with brackets or parentheses are correctly formatted. This involves making sure that every opening parenthesis has a corresponding closing parenthesis and that they are properly nested.

// Your task is to write a function that generates all possible valid combinations of parentheses for a given number of pairs.

// For example, given n pairs of parentheses, you need to generate all valid sequences of well-formed parentheses. This function will be used to automatically generate test cases for your system to validate different bracketed structures.

// Implement a function to generate all combinations of well-formed parentheses.
// Example:
// Input:

// n = 3 (3 pairs of parentheses)
// Output:

// ["((()))", "(()())", "(())()", "()(())", "()()()"]
// Explanation:
// For n = 3, there are 3 pairs of parentheses, and you need to generate all possible valid sequences where the parentheses are correctly matched. The output will be a list of all such valid combinations.




#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generateParenthesesHelper(string current, int openCount, int closeCount, int n, vector<string>& results) {
    if (current.length() == 2 * n) {
        results.push_back(current);
        return;
    }
    if (openCount < n) generateParenthesesHelper(current + '(', openCount + 1, closeCount, n, results);
    if (closeCount < openCount) generateParenthesesHelper(current + ')', openCount, closeCount + 1, n, results);
}

vector<string> generateParentheses(int n) {
    vector<string> results;
    generateParenthesesHelper("", 0, 0, n, results);
    return results;
}

int main() {
    int n;
    cout<<"Enter the value of n :- " ;
    cin >> n;
    for (const string& combo : generateParentheses(n)) {
        cout << combo << "\n";
    }
    return 0;
}

