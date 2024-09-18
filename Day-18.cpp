// Ques 1: You are tasked with creating a Person class in C++ that stores details of a person, such as firstName, lastName, and age. The class should:

// Have a constructor that takes firstName, lastName, and age as arguments and initializes the member variables.
// Include a method getFullName() that returns the full name of the person (a concatenation of firstName and lastName).
// Add a method getDetails() that returns the firstName, lastName, and age in a tuple.
// Demonstrate the usage of structured bindings to unpack the tuple returned by getDetails().



#include <iostream>
#include <string>
#include <tuple>
using namespace std;

class Person{
    public:
    string firstName;
    string lastName;
    int age;

    Person(const string &fn, const string &ln,int a)
        :firstName(fn), lastName(ln), age(a)
    {}

    string getFullName() {
        return firstName +" " + lastName;
    }

    // method return tuple
    tuple<string,string,int>  getDetails() const{
        return make_tuple(firstName,lastName,age) ;
    }

};

int main(){
    //object
    Person p1("Akanksh","Rakesh",10);

    // get full name
    cout<<"full name :- "<<p1.getFullName();

    // structured binding :-
    auto [fn,ln,age] = p1.getDetails();
    cout<<"First Name :- "<<fn<<endl;
    cout<<"last Name :- "<<ln<<endl;
    cout<<"age :- "<<age<<endl;

    return 0;
}
 
