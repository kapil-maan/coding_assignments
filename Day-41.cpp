// Ques 1. Write a recursive function to calculate the factorial of a given number n.

// Example:
// Input: n = 5
// Output: 120
// Explanation: 5! = 5 * 4 * 3 * 2 * 1 = 120.


#include <iostream>
using namespace std;

int factorial(int n) {
    return n == 0 ? 1 : n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}


// Ques 2. Write a recursive function to return the nth Fibonacci number. The Fibonacci sequence is defined as:

// F(0) = 0, F(1) = 1
// F(n) = F(n-1) + F(n-2) for n > 1
// Example:
// Input: n = 6
// Output: 8
// Explanation: Fibonacci series = 0, 1, 1, 2, 3, 5, 8,...


#include <iostream>
using namespace std;

int fibonacci(int n) {
    return n <= 1 ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}


// Ques 3. Write a recursive function that takes a positive integer and returns the sum of its digits.

// Example:
// Input: n = 1234
// Output: 10
// Explanation: 1 + 2 + 3 + 4 = 10


#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    return n == 0 ? 0 : n % 10 + sumOfDigits(n / 10);
}

int main() {
    int n;  
    cin >> n;
    cout << sumOfDigits(n) << endl;
    return 0;
}