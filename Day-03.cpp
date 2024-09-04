// Ques - 01: Write a C++ program that takes an integer N as input from the user and calculates the sum of the first N natural numbers using a for loop.

// Sample Input:- Enter a number: 5
// Sample Output:- The sum of the first 5 natural numbers is: 15"


#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    cout << "The sum of the first " << N << " natural numbers is: " << sum << endl;
    return 0;
}



// Ques-02: Write a C++ program that takes an integer N as input from the user and calculates the factorial of N using a loop.

// Sample Input:- Enter a number: 4
// Sample Output:- The factorial of 4 is: 24"


#include <iostream>
using namespace std;

int main() {
    int N;
    long long factorial = 1;
    cout << "Enter a number: ";
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        factorial *= i;
    }

    cout << "The factorial of " << N << " is: " << factorial << endl;
    return 0;
} 



// Ques - 03: Write a C++ program that takes an integer N as input from the user and prints the multiplication table of N up to 10 using a loop.

// Sample Input:- Enter a number: 3

// Sample Output:-
// Multiplication table of 3:
// 3 x 1 = 3
// 3 x 2 = 6
// 3 x 3 = 9
// 3 x 4 = 12
// 3 x 5 = 15
// 3 x 6 = 18
// 3 x 7 = 21
// 3 x 8 = 24
// 3 x 9 = 27
// 3 x 10 = 30


#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;

    cout << "Multiplication table of " << N << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << N << " x " << i << " = " << N * i << endl;
    }

    return 0;
}

