// Ques-01 Write a C++ program that takes an array as input and prints the sum of the array.

// Sample Input:
// Enter the size of the array: 5
// Enter the array: 5 10 15 20 25

// Sample Output:
// Sum of the array: 75



#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    cout << "Sum of the array: " << sum << endl;
    return 0;
}



// Ques-02 Write a C++ program that takes an array as input and prints the sum of odd numbers and the sum of even numbers separately.

// Sample Input:
// Enter the size of the array: 5
// Enter the array: 5 10 15 20 25

// Sample Output:
// Sum of odd numbers: 45
// Sum of even numbers: 30


#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int sumOdd = 0, sumEven = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            sumOdd += arr[i];
        }
    }

    cout << "Sum of odd numbers: " << sumOdd << endl;
    cout << "Sum of even numbers: " << sumEven << endl;
    return 0;
}



// Ques-03 Write a C++ program that takes an array as input and prints the number of odd numbers and the number of even numbers in the array.

// Sample Input:
// Enter the size of the array: 5
// Enter the array elements: 5 10 15 20 25

// Sample Output:
// Number of odd numbers: 3
// Number of even numbers: 2


#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the array elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int countOdd = 0, countEven = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            countEven++;
        } else {
            countOdd++;
        }
    }

    cout << "Number of odd numbers: " << countOdd << endl;
    cout << "Number of even numbers: " << countEven << endl;
    return 0;
}
