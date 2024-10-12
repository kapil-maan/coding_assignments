// Ques 1. You are tasked with designing a Shape system that can handle different types of shapes (e.g., Circle, Rectangle) in C++. The system should use abstraction to define a common interface for all shapes and allow for flexibility in handling various shape types.

// Your task is to:

// Create an abstract class named Shape with the following:

// A pure virtual method area() that returns the area of the shape.
// A pure virtual method perimeter() that returns the perimeter of the shape.
// Implement two derived classes:

// Circle: This class should have a private attribute radius and implement the area() and perimeter() methods.
// Rectangle: This class should have private attributes width and height and implement the area() and perimeter() methods.
// In the main function, create objects of Circle and Rectangle, and print their areas and perimeters using the abstract class interface.



#include <iostream>
#include <cmath>
using namespace std; 

// Abstract Class: Shape
class Shape {
public:
    // Pure Virtual Methods
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual ~Shape() {} // Virtual destructor for proper cleanup
};

// Derived Class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

// Derived Class: Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const override {
        return width * height;
    }

    double perimeter() const override {
        return 2 * (width + height);
    }
};

int main() {
    // Create objects of Circle and Rectangle
    Shape* circle = new Circle(5.0);
    Shape* rectangle = new Rectangle(4.0, 6.0);

    // Print details using the abstract class interface
    cout << "Circle Area: " << circle->area() << ", Perimeter: " << circle->perimeter() << endl;
    cout << "Rectangle Area: " << rectangle->area() << ", Perimeter: " << rectangle->perimeter() << endl;

    // Clean up
    delete circle;
    delete rectangle;

    return 0;
}
