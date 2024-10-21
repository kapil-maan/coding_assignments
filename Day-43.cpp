// Ques 1. Write a C++ program that reads integers from a file and calculates their sum. If the file contains any non-integer data, throw a custom exception NonIntegerDataException and handle it by displaying an error message. If the file cannot be opened, throw a standard ios_base::failure exception.

// Your program should:

// Define the custom exception NonIntegerDataException.
// Open a file and attempt to read all integers from it.
// If the file contains non-integer data or fails to open, catch the exceptions and display appropriate error messages.
// If all data is valid, calculate and print the sum of the integers.
// Constraints:

// The file path should be provided by the user.
// Assume that all integers are non-negative.Sample Input : 10 20 30 forty 50
// Sample Output:Error: Non-integer data found in the file.
// Handle multiple errors (like file open failure and non-integer data) using nested try-catch blocks.


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <exception>

class NonIntegerDataException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Non-integer data found in the file.";
    }
};

int main() {
    std::string filePath;
    std::cout << "Enter the file path: ";
    std::cin >> filePath;

    std::ifstream file;

    try {
        file.open(filePath);
        if (!file) {
            throw std::ios_base::failure("Error: Unable to open the file.");
        }

        int sum = 0;
        std::string word;

        while (file >> word) {
            std::stringstream ss(word);
            int num;
            if (!(ss >> num)) {
                throw NonIntegerDataException();
            }
            sum += num;
        }

        std::cout << "Sum of integers: " << sum << std::endl;
        file.close();
    } catch (const std::ios_base::failure& e) {
        std::cerr << e.what() << std::endl;
    } catch (const NonIntegerDataException& e) {
        std::cerr << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "An unexpected error occurred: " << e.what() << std::endl;
    }

    return 0;
}
