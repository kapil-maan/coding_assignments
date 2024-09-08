// Ques 1: Write a function int findMax(const int arr[], int size) that finds and returns the maximum value in an integer array. Test your function with various arrays in the main() function.

// Example:

// Input: {1, 5, 3, 9, 2}
// Output: 9


#include <iostream>
using namespace std;

int findMax(const int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int main() {
    int arr1[] = {1, 5, 3, 9, 2};
    int size1 = sizeof(arr1) / sizeof(int);
    cout << "Maximum value in arr1: " << findMax(arr1, size1) << endl;

    int arr2[] = {-1, -5, -3, -9, -2};
    int size2 = sizeof(arr2) / sizeof(int);
    cout << "Maximum value in arr2: " << findMax(arr2, size2) << endl;

    int arr3[] = {10, 20, 30, 40, 50};
    int size3 = sizeof(arr3) / sizeof(int);
    cout << "Maximum value in arr3: " << findMax(arr3, size3) << endl;

    return 0;
}
 



// Ques 2: Write a function bool isPalindrome(const std::string &str) that checks whether a given string is a palindrome (a word, phrase, or sequence that reads the same backward as forward). The function should ignore spaces, punctuation, and case sensitivity. Test your function with various strings in the main() function.

// Example:

// Input: "A man, a plan, a canal, Panama"
// Output: true


#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

bool isPalindrome(const string &str) {
    string filteredStr;
    for (char ch : str) {
        if (isalnum(ch)) {
            filteredStr += tolower(ch);
        }
    }

    string reversedStr = filteredStr;
    reverse(reversedStr.begin(), reversedStr.end());

    return filteredStr == reversedStr;
}

int main() {
    string str1 = "A man, a plan, a canal, Panama";
    cout << "Is \"" << str1 << "\" a palindrome? " << (isPalindrome(str1) ? "true" : "false") << endl;

    string str2 = "Hello, World!";
    cout << "Is \"" << str2 << "\" a palindrome? " << (isPalindrome(str2) ? "true" : "false") << endl;

    string str3 = "Madam In Eden, I'm Adam";
    cout << "Is \"" << str3 << "\" a palindrome? " << (isPalindrome(str3) ? "true" : "false") << endl;

    return 0;
}
