// Ques 1. Given an infix expression in the form of string str. Convert this infix expression to postfix expression.

// Infix expression: The expression of the form a op b. When an operator is in-between every pair of operands.
// Postfix expression: The expression of the form a b op. When an operator is followed for every pair of operands.
// Note: The order of precedence is: ^ greater than * equals to / greater than + equals to -. Ignore the right associativity of ^. Input: str = "a+b*(c^d-e)^(f+g*h)-i"
// Output: abcd^e-fgh*+^*+i-
// Explanation:
// After converting the infix expression
// into postfix expression, the resultant
// expression will be abcd^e-fgh*+^*+i- . Note :- Take all the required value from user.



#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to return precedence of operators
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return -1;
}

// Function to convert infix expression to postfix expression
string infixToPostfix(string infix) {
    stack<char> stack;
    string postfix;

    for (char &c : infix) {
        if (isalnum(c)) {
            // If the character is an operand, add it to the output
            postfix += c;
        } else if (c == '(') {
            // If the character is '(', push it to the stack
            stack.push(c);
        } else if (c == ')') {
            // If the character is ')', pop and output from the stack until '(' is found
            while (!stack.empty() && stack.top() != '(') {
                postfix += stack.top();
                stack.pop();
            }
            stack.pop(); // Pop '(' from the stack
        } else {
            // If the character is an operator
            while (!stack.empty() && precedence(c) <= precedence(stack.top())) {
                postfix += stack.top();
                stack.pop();
            }
            stack.push(c);
        }
    }

    // Pop all the operators from the stack
    while (!stack.empty()) {
        postfix += stack.top();
        stack.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter the infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

    return 0;
}



// To convert an infix expression to a prefix expression in C++. The algorithm involves the following steps:

// Reverse the infix expression.

// Replace '(' with ')' and vice versa.

// Convert the modified infix expression to postfix.

// Reverse the postfix expression to get the prefix expression.


#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

// Function to return precedence of operators
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return -1;
}

// Function to convert infix to postfix
string infixToPostfix(string infix) {
    stack<char> stack;
    string postfix;
    for (char &c : infix) {
        if (isalnum(c)) {
            postfix += c;
        } else if (c == '(') {
            stack.push(c);
        } else if (c == ')') {
            while (!stack.empty() && stack.top() != '(') {
                postfix += stack.top();
                stack.pop();
            }
            stack.pop();
        } else {
            while (!stack.empty() && precedence(c) <= precedence(stack.top())) {
                postfix += stack.top();
                stack.pop();
            }
            stack.push(c);
        }
    }
    while (!stack.empty()) {
        postfix += stack.top();
        stack.pop();
    }
    return postfix;
}

// Function to reverse a string
string reverseString(string str) {
    reverse(str.begin(), str.end());
    return str;
}

// Function to replace parentheses in a string
string replaceParentheses(string str) {
    for (char &c : str) {
        if (c == '(') {
            c = ')';
        } else if (c == ')') {
            c = '(';
        }
    }
    return str;
}

// Function to convert infix to prefix
string infixToPrefix(string infix) {
    string reversedInfix = reverseString(infix);
    string modifiedInfix = replaceParentheses(reversedInfix);
    string postfix = infixToPostfix(modifiedInfix);
    string prefix = reverseString(postfix);
    return prefix;
}

int main() {
    string infix;
    cout << "Enter the infix expression: ";
    cin >> infix;

    string prefix = infixToPrefix(infix);
    cout << "Prefix expression: " << prefix << endl;

    return 0;
}
