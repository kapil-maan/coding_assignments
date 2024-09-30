// Ques 1. You are tasked with creating a simple vehicle system in C++ using object-oriented programming principles. Implement a base class Vehicle and two derived classes Car and Bike. Each vehicle can perform certain common actions, but they also have specific attributes and methods.

// Requirements:

// Base Class: Vehicle
// Attributes:
// string make: The manufacturer of the vehicle.
// int year: The year the vehicle was manufactured.
// float fuel: The amount of fuel left in the vehicle.
// Methods:
// void refuel(float amount): Increases the fuel by amount.
// void display(): A virtual method that displays the vehicle's details.
// Derived Class: Car (inherits from Vehicle)
// Attributes:
// int doors: Number of doors in the car.
// Methods:
// void display(): Override the display() method to show car-specific details, including the number of doors.
// void openDoors(): A method that prints "Doors are opened."
// Derived Class: Bike (inherits from Vehicle)
// Attributes:
// bool hasCarrier: Indicates whether the bike has a carrier.
// Methods:
// void display(): Override the display() method to show bike-specific details, including whether it has a carrier.
// void kickStart(): A method that prints "Bike kick-started."
// Main Functionality:
// Create objects of Car and Bike with relevant attributes.
// Refuel both vehicles and display their details.
// Call their specific methods (openDoors() for Car and kickStart() for Bike).



#include <iostream>
#include <string>
using namespace std;

class Vehicle {
    protected:
        string make;
        int year;
        float fuel;

    public:
        Vehicle(string m, int y,float f): make(m), year(y), fuel(f) {}

        void refuel(float amount){
            fuel+=amount;
        }

        virtual void display(){
            cout<<"Make:- "<<make<<", Year:- "<<year<<", Fuel:- "<<fuel<<" litre"<<endl;
        }
};

class Car : public Vehicle{
    private:
        int doors;

    public:
        Car(string m, int y, float f, int d) : Vehicle(m,y,f), doors(d) {}

        void display() override {  
            Vehicle::display();
            cout<<"Number of door in the car:- "<<doors<<endl;
        }

        void openDoors(){
            cout<<"Doors are opened."<<endl;
        }

};

class Bike: public Vehicle{
    
    bool hasCarrier;
    
    public:
        Bike(string m, int y, float f, int hc) : Vehicle(m,y,f), hasCarrier(hc) {}
        
        void display() override{
            Vehicle::display();
            cout<<"Has Carrier "<<(hasCarrier ? "Yes": "No") <<endl;
        }

        void kickStart(){
            cout<<"Bike kick-started."<<endl;
        }


};

int main(){

    Car car("Toyota", 2020, 10.0, 4);
    Bike bike("Yamaha", 2019, 5.0, true);

    // Refuel both vehicles
    car.refuel(5.0);
    bike.refuel(2.0);

    // Display details of both vehicles
    cout << "Car Details:" << endl;
    car.display();
    car.openDoors();
    
    cout << endl;

    cout << "Bike Details:" << endl;
    bike.display();
    bike.kickStart();
    
    return 0;
}

