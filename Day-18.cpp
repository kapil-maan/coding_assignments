// Ques 1: You are tasked with creating a Person class in C++ that stores details of a person, such as firstName, lastName, and age. The class should:

// Have a constructor that takes firstName, lastName, and age as arguments and initializes the member variables.
// Include a method getFullName() that returns the full name of the person (a concatenation of firstName and lastName).
// Add a method getDetails() that returns the firstName, lastName, and age in a tuple.
// Demonstrate the usage of structured bindings to unpack the tuple returned by getDetails().


/*
// By the structure binding :-
#include <iostream>
#include <tuple>
#include <string>

class Person {
private:
    std::string firstName;
    std::string lastName;
    int age;

public:
    // Constructor
    Person(const std::string& firstName, const std::string& lastName, int age)
        : firstName(firstName), lastName(lastName), age(age) {}

    // Method to get the full name
    std::string getFullName() const {
        return firstName + " " + lastName;
    }

    // Method to get the details as a tuple
    std::tuple<std::string, std::string, int> getDetails() const {
        return std::make_tuple(firstName, lastName, age);
    }
};

int main() {
    // Create a Person object
    Person person("John", "Doe", 30);

    // Get and print the full name
    std::cout << "Full Name: " << person.getFullName() << std::endl;

    // Get the details and unpack the tuple
    auto [firstName, lastName, age] = person.getDetails();

    // Print the details
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Age: " << age << std::endl;

    return 0;
}
*/



// without structure binding :-
#include <iostream>
#include <tuple>
#include <string>

class Person {
private:
    std::string firstName;
    std::string lastName;
    int age;

public:
    // Constructor
    Person(const std::string& firstName, const std::string& lastName, int age)
        : firstName(firstName), lastName(lastName), age(age) {}

    // Method to get the full name
    std::string getFullName() const {
        return firstName + " " + lastName;
    }

    // Method to get the details as a tuple
    std::tuple<std::string, std::string, int> getDetails() const {
        return std::make_tuple(firstName, lastName, age);
    }
};

int main() {
    // Create a Person object
    Person person("John", "Doe", 30);

    // Get and print the full name
    std::cout << "Full Name: " << person.getFullName() << std::endl;

    // Get the details as a tuple
    std::tuple<std::string, std::string, int> details = person.getDetails();

    // Access the elements of the tuple using std::get
    std::string firstName = std::get<0>(details);
    std::string lastName = std::get<1>(details);
    int age = std::get<2>(details);

    // Print the details
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Age: " << age << std::endl;

    return 0;
}
<<<<<<< HEAD
=======
 
>>>>>>> 69108d6bc05e30cf5d217c0e9296c5191f197231
