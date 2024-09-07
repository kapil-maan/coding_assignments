// Ques 1: Write a function int stringLength(const std::string &str) that returns the length of a given string. Test your function with various strings in the main() function.

// Sample Input:- str1 = "Hello, World!"
// Output:- 13



#include <iostream>
using namespace std;

int stringLength(const string str) {
    return str.length();
}

int main(){
    string str1;
    getline(cin , str1);

    cout<<"Length of string is :- "<< stringLength(str1);

    return 0;
}


// Ques 2: Implement a function int countCharacter(const std::string &str, char ch) that counts the number of occurrences of a specific character in a given string. Test the function with different strings and characters.

// Sample Input:- String ="Hello, World!"
// character=’l’
// Output:- 3


#include <iostream>
using namespace std;

int countCharacter(const string str, char c) {
    
    int count =0;
    for(char i:str){
        if(i==c) count ++;
    }
    return count;
}

int main(){
    string str1;
    char c;
    getline(cin , str1);
    cin>> c;

    cout<<"Number of occurrences of character "<<c<<" is :- "<<countCharacter(str1, c);
}


// Ques 3: Write a function std::string concatenateStrings(const std::string &str1, const std::string &str2) that concatenates two strings and returns the result. Test the function with various input strings.

// Sample Input : - str1 = "Hello, "
// str2 = "World!"

// Sample Output :- "Hello, World!"


#include <iostream>
using namespace std;

string concatenateStrings(const string str1, const string str2) {

    return str1 + str2;
}

int main(){
    string str1, str2 ;
    getline(cin , str1);
    getline(cin, str2);

    cout<<"Concatenated String :- "<<concatenateStrings(str1, str2);

}