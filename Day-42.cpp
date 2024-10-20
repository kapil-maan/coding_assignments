// Ques 1. You are tasked with creating a simple banking application that allows users to withdraw money from their accounts. If a user attempts to withdraw an amount greater than their balance, throw an InsufficientFundsException. Similarly, if a negative amount is entered for withdrawal, throw an InvalidAmountException.

// Write a program that:

// Defines two custom exceptions: InsufficientFundsException and InvalidAmountException.
// Implements a BankAccount class with:
// A constructor to initialize the balance.
// A method withdraw(double amount) that throws the appropriate exceptions when invalid withdrawals are attempted.
// In the main function, create an instance of BankAccount and handle the exceptions with try-catch blocks.
// Constraints:

// The balance cannot be negative.
// If a valid withdrawal occurs, deduct the amount from the balance.Sample Input:Balance: 1000
// Withdrawal: 1200 Sample Output:Error: Insufficient funds for this withdrawal.



#include <iostream>
#include <stdexcept>
using namespace std;

// Custom exceptions
class InsufficientFundsException : public runtime_error {
public:
    InsufficientFundsException() : runtime_error("Error: Insufficient funds for this withdrawal.") {}
};

class InvalidAmountException : public runtime_error {
public:
    InvalidAmountException() : runtime_error("Error: Invalid amount for withdrawal.") {}
};

// BankAccount class
class BankAccount {
private:
    double balance;

public:
    BankAccount(double initial_balance) : balance(initial_balance) {
        if (initial_balance < 0) {
            throw invalid_argument("Error: Initial balance cannot be negative.");
        }
    }

    void withdraw(double amount) {
        if (amount < 0) {
            throw InvalidAmountException();
        }
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    try {
        BankAccount account(1000); // Sample input balance

        // Sample withdrawal
        double withdrawalAmount;
        cout << "Enter amount to withdraw: ";
        cin >> withdrawalAmount;
        account.withdraw(withdrawalAmount);

        cout << "Withdrawal successful. New balance: " << account.getBalance() << endl;

    } catch (const InvalidAmountException& e) {
        cout << e.what() << endl;
    } catch (const InsufficientFundsException& e) {
        cout << e.what() << endl;
    } catch (const exception& e) {
        cout << "An error occurred: " << e.what() << endl;
    }

    return 0;
}
