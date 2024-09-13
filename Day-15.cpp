// Ques 1: Write a program that defines a Student class and uses the this pointer in a member function to display the student's details.


#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Constructor to initialize student details
    Student(string name, int rollNumber, float marks) {
        this->name = name;
        this->rollNumber = rollNumber;
        this->marks = marks;
    }

    // Member function to display student details using 'this' pointer
    void displayDetails() {
        cout << "Name: " << this->name << endl;
        cout << "Roll Number: " << this->rollNumber << endl;
        cout << "Marks: " << this->marks << endl;
    }
};

int main() {
    // Creating a Student object
    Student student1("John Doe", 101, 95.5);

    // Displaying student details
    student1.displayDetails();

    return 0;
}



// Ques 2: Write a C++ code that take linked list from user input and a value integer . Delete the value from the linkedlist. Sample Input :- 10->20->30->40 value = 20 Sample Output :- 10->30->40

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the end of the list
void insert(Node*& head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to delete a node with a given value
void deleteValue(Node*& head, int value) {
    if (head == nullptr) return;

    // If the head node itself holds the value to be deleted
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    // Search for the value to be deleted
    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != value) {
        temp = temp->next;
    }

    // If value was not found
    if (temp->next == nullptr) return;

    // Unlink the node from the linked list
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr) cout << "->";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Sample input
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    insert(head, 40);

    cout << "Original List: ";
    printList(head);

    int value = 20;
    deleteValue(head, value);

    cout << "List after deleting " << value << ": ";
    printList(head);

    return 0;
}
