// Ques 1: Write a C++ code that take linked list from user input that is in sorted order and a value integer. Now insert the value inside linkedlist such that new likedlist is also in sorted order. Sample Input:- 10->20->30->40 value =25 Sample Output:- 10->20->25->30->40

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

// function to add element in the end of linked list :-
void insertAtEnd(Node *&head, int val){
    Node* newnode = new Node();
    newnode->data= val;
    newnode->next = nullptr;

    if(head==nullptr) {
        head=newnode;
    }
    else{
    Node * temp = head; 

    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
    }
}

// function to add element in the linked list in sorted order :-
void insertSortedly(Node* &head, int val){
    Node* newnode = new Node();
    newnode->data= val;
    newnode->next = nullptr;

    Node * temp = head;
    if(newnode->data < head->data){
        newnode->next=head;
        head=newnode;
        return;
    } 
    while(temp->next!=nullptr){
        if(temp->data<=newnode->data && temp->next->data>newnode->data){
            
            newnode->next = temp->next;
            temp->next =newnode;
            return;
        }
        temp= temp->next;
    }
    temp->next=newnode;
}

// function print the linked list :-
void print(Node* head){
    while(head!=nullptr){
        cout<<head->data;
        if(head->next!=NULL) cout<<"->" ;
        head=head->next;    
    }
    cout<<endl;
}

int main(){

    Node* root = nullptr;

    // sample input
    insertAtEnd(root,10);
    insertAtEnd(root,20);
    insertAtEnd(root,30);
    insertAtEnd(root,40);

    cout<<"sorted linked list :- ";
    print(root);

    cout<< "new sorted linked list :- ";
    insertSortedly(root,102);
    print(root);
    
    return 0;
}