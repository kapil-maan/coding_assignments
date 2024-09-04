// Ques-01 Write a C++ function that checks whether an integer is odd or even. If the integer is odd, print "Odd"; otherwise, print "Even."

// Sample Input:
// Enter a number: 5

// Sample Output:
// Odd


#include <iostream>
using namespace std;

void checkOddEven(int num) {
    if (num % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    checkOddEven(num);
    return 0;
}



// Ques-02 Write a C++ function that takes a string as input and reverses it.

// Sample Input:
// Enter a string: CipherSchools

// Sample Output:
// Reversed string: sloohcSrehpiC


#include <iostream>
#include <algorithm>
using namespace std;

string reverseString(string str) {
    reverse(str.begin(), str.end());
    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string: " << reverseString(str) << endl;
    return 0;
}



// Ques-03 Write a C++ function that takes a string as a parameter and checks how many vowels and consonants are in that string.
// Assuming that string contains only lowercase.

// Sample Input:
// Enter a string: cipherschools

// Sample Output:
// Number of vowels: 4
// Number of consonants: 9

#include <iostream>
using namespace std;

void countVowelsConsonants(string str) {
    int vowels = 0, consonants = 0;
    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        } else if (c >= 'a' && c <= 'z') {
            consonants++;
        }
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin,str);
    countVowelsConsonants(str);
    return 0;
}


