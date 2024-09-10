// Ques 1 : Write a function void printLinkedList(Node* head) that traverses a singly linked list and prints each element's value. Input: A linked list with elements 10 -> 20 -> 30 -> 40
// Output: 10 20 30 40


#include <iostream>
using namespace std ;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head, int val){
    
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node* temp = head ;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n ;
}

void printLinkedList(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<< temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL" << endl ;
}


int main(){
    // constructing linked list :-
    node* head= NULL;

    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);

    // printing linked list :-
    printLinkedList(head);
}


// Ques 2: Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with the given data at the end of a singly linked list. nput: A linked list with elements 10 -> 20 -> 30, and a new data 40
// Output: The linked list becomes 10 -> 20 -> 30 -> 40


#include <iostream>
using namespace std ;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head, int val){
    
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node* temp = head ;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n ;
}

void printLinkedList(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<< temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL" << endl ;
}


int main(){
    node*  head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    

    insertAtTail(head,40);
    
    printLinkedList(head);
}