// Ques-01: Write a C++ program that takes three integers as input from the user and determines the largest of the three using if-else statements.

// Sample Input:- Enter the first number: 10
// Enter the second number: 20
// Enter the third number: 15

// Sample Output :- The largest number is: 20


#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Taking input from the user
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;

    int largest;

    // Using if-else statements to find the largest number
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Displaying the largest number
    cout << "The largest number is: " << largest << endl;

    return 0;
}

// Ques-02: Write a C++ program that takes an integer score (0-100) as input from the user and prints the corresponding grade using if-else-if statements.
// Grade Criteria:
// A: 90-100
// B: 80-89
// C: 70-79
// D: 60-69
// F: 0-59

// Sample Input:- Enter the score: 85
// Sample Output:- Grade: B"


#include <iostream>
using namespace std;

int main() {
    int score;

    // Taking input from the user
    cout << "Enter the score: ";
    cin >> score;

    // Using if-else-if statements to determine the grade
    if (score >= 90 && score <= 100) {
        cout << "Grade: A" << endl;
    } else if (score >= 80 && score < 90) {
        cout << "Grade: B" << endl;
    } else if (score >= 70 && score < 80) {
        cout << "Grade: C" << endl;
    } else if (score >= 60 && score < 70) {
        cout << "Grade: D" << endl;
    } else if (score >= 0 && score < 60) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid score" << endl;
    }

    return 0;
}


// Ques-03: Write a C++ program that takes an integer as input from the user and prints the corresponding month of the year using a switch case statement. Assume 1 = January, 2 = February, ..., 12 = December.If integer is not from 1 to 12 then print invalid.

// Sample Input:-Enter a number : 5
// Sample Output :- The month is: May"

#include <iostream>
using namespace std;

int main() {
    int month;

    // Taking input from the user
    cout << "Enter a number: ";
    cin >> month;

    // Using switch case to determine the month
    switch (month) {
        case 1:
            cout << "The month is: January" << endl;
            break;
        case 2:
            cout << "The month is: February" << endl;
            break;
        case 3:
            cout << "The month is: March" << endl;
            break;
        case 4:
            cout << "The month is: April" << endl;
            break;
        case 5:
            cout << "The month is: May" << endl;
            break;
        case 6:
            cout << "The month is: June" << endl;
            break;
        case 7:
            cout << "The month is: July" << endl;
            break;
        case 8:
            cout << "The month is: August" << endl;
            break;
        case 9:
            cout << "The month is: September" << endl;
            break;
        case 10:
            cout << "The month is: October" << endl;
            break;
        case 11:
            cout << "The month is: November" << endl;
            break;
        case 12:
            cout << "The month is: December" << endl;
            break;
        default:
            cout << "Invalid number" << endl;
            break;
    }

    return 0;
}
