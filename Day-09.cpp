// Ques 1: Write a C++ program that declares an integer variable, initializes it, and then declares a pointer that stores the address 
//         of this variable. Print the value of the variable using both the variable itself and the pointer.


#include <iostream>
using namespace std;

int main(){

    int a =10;
    int *p = &a;

    cout<<"value of the variable using variable :- "<<a;
    cout<<endl;
    cout<<"value of the variable using pointer :- "<<*p;
    
    return 0;
}


// Ques 2: Write a program that declares an array of integers and a pointer that points to the first element of the array. 
//         Use pointer arithmetic to print all the elements of the array.


#include <iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5};

    int *p = arr;

    int i=0;
    cout<<"using pointer arithmatic to print all elements :- ";
    while(i< sizeof(arr)/sizeof(int)){
        cout <<"Element "<<i<<" is :- " << *(p+i) << endl;
        i++;
    }
    
    return 0;
}


// Ques 3: Create a program that demonstrates the use of a pointer to a pointer. Declare an integer variable, a pointer to the
//         integer, and a pointer to that pointer. Use all three to print the value of the integer.

#include <iostream>
using namespace std;

int main(){

    int a =69;
    int *p = &a;
    int **q = &p;

    cout<<"value of the integer :- "<<a;
    cout<<endl;
    cout<<"value of the integer using pointer to variable :- "<<*p;
    cout<<endl;
    cout<<"value of the integer using pointer to pointer :- "<<**q;
    
    return 0;
}
