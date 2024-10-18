// Ques - 01 - Write a C++ program that takes two strings as input from the user and concatenates them. Then, output the concatenated string.

// Sample Input :- Enter the first string: Hello
// Enter the second string: World

// Sample Output:- Concatenated string: HelloWorld

#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string str1; 
    cout<< "Enter the 1st string:- ";
    cin>> str1;
    string str2; 
    cout<<"Enter the 2nd string:- ";
    cin>> str2;

   cout<<"Concatenated string: "<< str1 + str2 ;

}


// Ques-02 -Write a C++ program that takes five grades (integers) as input from the user and calculates the average grade. Output the average grade to the user.

// Sample Input:- Enter grade 1: 85
// Enter grade 2: 90
// Enter grade 3: 78
// Enter grade 4: 92
// Enter grade 5: 88

// Sample Output:- The average grade is: 86.6
#include <iostream>

using namespace std;

int main(){
    int sum=0;
    for(int i=0; i<5; i++){
        cout<<"Enter grade " << i+1 << ": "; 
        int n ; cin>> n ;
        sum +=n;
    }
    cout<<"The average grade is: "<<sum/5.0;
    
    return 0;
}



// Ques-03 - Write a C++ program that takes an integer as input from the user and outputs its square.

// Sample Input:- Enter a number: 7

// Sample Output :- The square of 7 is: 49

#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a number: ";
    int n; cin>>n;

    cout<<"The square of "<<n<<" is: "<<n*n;
    return 0;

}