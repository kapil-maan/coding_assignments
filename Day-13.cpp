// Ques1 :- Write C++ program to demonstrate how to create dynamic variable using new keyword.

#include <iostream>
using namespace std ;

int main() {
    // Declare a pointer to an integer
    int* ptr = nullptr;

    // Allocate memory dynamically for an integer
    ptr = new int;

    // Assign a value to the allocated memory
    *ptr = 42;

    // Print the value and the address of the allocated memory
    std::cout << "Value: " << *ptr << std::endl;
    std::cout << "Address: " << ptr << std::endl;

    // Deallocate the memory
    delete ptr;


    // Set the pointer to nullptr to avoid dangling pointer
    ptr = nullptr;

    return 0;
}


// A dangling pointer occurs when a pointer still holds the address of a memory location after the memory 
// has been deallocated. This can lead to undefined behavior if the program tries to access or modify 
// the memory through the dangling pointer.