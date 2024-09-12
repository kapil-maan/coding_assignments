// Ques 1: Define a car class with properties brand name , model, engine, number of seats and method displayInfo that display the all information of class.


#include <iostream>
#include <string>

class Car {
private:
    std::string brandName;
    std::string model;
    std::string engine;
    int numberOfSeats;

public:
    // Constructor
    Car(std::string bName, std::string mdl, std::string eng, int seats) 
        : brandName(bName), model(mdl), engine(eng), numberOfSeats(seats) {}

    // Method to display car information
    void displayInfo() {
        std::cout << "Brand Name: " << brandName << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Engine: " << engine << std::endl;
        std::cout << "Number of Seats: " << numberOfSeats << std::endl;
    }
};

int main() {
    // Creating an object of Car class
    Car myCar("jinx", "xcv123", "2L", 5);
    
    // Displaying the car information
    myCar.displayInfo();

    return 0;
}


// Ques 2: Write a program that defines a Rectangle class with a copy constructor


#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l, double w) : length(l), width(w) {}

    // Copy constructor
    Rectangle(const Rectangle &rect) {
        length = rect.length;
        width = rect.width;
    }

    // Method to display rectangle information
    void displayInfo() const {
        std::cout << "Length: " << length << ", Width: " << width << std::endl;
    }
};

int main() {
    // Creating an object of Rectangle class
    Rectangle rect1(15, 10);
    
    // Using the copy constructor to create a new object
    Rectangle rect2 = rect1;
    
    // Displaying the information of both rectangles
    std::cout << "Rectangle 1: ";
    rect1.displayInfo();
    
    std::cout << "Rectangle 2: ";
    rect2.displayInfo();

    return 0;
}
