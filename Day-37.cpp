// Ques 1. You are building a Car class in C++ that simulates a simple car system. The class should encapsulate the following attributes:

// brand (string): The car's brand name.
// model (string): The car's model name.
// year (int): The manufacturing year of the car.
// speed (int): The current speed of the car.
// The class should provide:

// A constructor to initialize the brand, model, and year.
// Getters for all attributes.
// Setters for speed only (you should not allow external modification of the brand, model, or year).
// A method to increaseSpeed(int amount) that increases the current speed by a given amount.
// A method to decreaseSpeed(int amount) that decreases the current speed, but the speed should never go below 0.
// Task:

// Implement the Car class with proper encapsulation.
// Create a main function where you create an object of the Car class, modify its speed using the provided methods, and print the car's details after each speed change.





#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    int speed;

public:
    // Constructor
    Car(string b, string m, int y) : brand(b), model(m), year(y), speed(0) {}

    // Getters
    string getBrand() const {
        return brand;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    int getSpeed() const {
        return speed;
    }

    // Setter for speed
    void setSpeed(int s) {
        speed = s;
    }

    // Method to increase speed
    void increaseSpeed(int amount) {
        speed += amount;
    }

    // Method to decrease speed
    void decreaseSpeed(int amount) {
        speed = (speed - amount < 0) ? 0 : speed - amount;
    }

    // Method to print car details
    void printDetails() const {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    // Create a Car object
    Car myCar("Toyota", "Corolla", 2021);
    
    // Print initial details
    myCar.printDetails();

    // Increase speed
    myCar.increaseSpeed(30);
    myCar.printDetails();

    // Decrease speed
    myCar.decreaseSpeed(10);
    myCar.printDetails();

    // Attempt to decrease speed below 0
    myCar.decreaseSpeed(25);
    myCar.printDetails();

    return 0;
}
