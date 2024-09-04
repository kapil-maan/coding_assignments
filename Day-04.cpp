// Ques:01: Write a C++ program that takes two integers as input and performs the following arithmetic operations:
// Addition
// Subtraction
// Multiplication
// Division (ensure that you handle division by zero)
// Modulus

// Sample Output :-

// Enter first integer: 10
// Enter second integer: 3
// Addition: 13
// Subtraction: 7
// Multiplication: 30
// Division: 3.33333
// Modulus: 1


#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Taking input from the user
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;

    // Performing arithmetic operations
    int addition = num1 + num2;
    int subtraction = num1 - num2;
    int multiplication = num1 * num2;
    double division;
    int modulus;

    // Handling division by zero
    if (num2 != 0) {
        division = static_cast<double>(num1) / num2;
        modulus = num1 % num2;
    } else {
        cout << "Division by zero is not allowed." << endl;
        return 1; // Exit the program with an error code
    }

    // Displaying the results
    cout << "Addition: " << addition << endl;
    cout << "Subtraction: " << subtraction << endl;
    cout << "Multiplication: " << multiplication << endl;
    cout << "Division: " << division << endl;
    cout << "Modulus: " << modulus << endl;

    return 0;
}




// Ques-02: Create a Complex class to represent complex numbers and overload the +, -, operators to perform arithmetic operations on complex numbers.

// Sample Output:-

// Complex Number 1: 3 + 4i
// Complex Number 2: 1 + 2i
// Sum: 4 + 6i
// Difference: 2 + 2i


#include <iostream>
using namespace std;

class complex{
    private:
    int real;
    int img;

    public:
    complex(int r, int i){
        real = r;
        img = i;
    }

    complex operator + (complex other){
        return complex(real + other.real , img + other.img);
    }

    complex operator - (complex other){
        return complex(real - other.real, img - other.img);
    }

    void print(){
        cout<< real << " + "<< img <<"i";
        cout<< endl;
    }
};

int main(){
    complex c1(3,4);
    complex c2(1,2);

    cout<<"Complex Number 1:- ";
    c1.print();

    cout<<"Complex Number 2:- ";
    c2.print();

    complex sum = c1 + c2;
    complex diff = c1 - c2;

    cout<<"Sum:- ";
    sum.print();

    cout<<"Difference:- ";
    diff.print();


    return 0;
}
