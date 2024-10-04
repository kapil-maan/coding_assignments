// Ques 1. Implement Queues using linkedlist


#include <iostream>
using namespace std;

struct Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data=val;
            next=nullptr;
        }
};

class queue{
    public:
    Node* front;
    Node* back;

    queue(){
        front =nullptr;
        back=nullptr;
    }

    int empty(){
        if(front==NULL){
            return 1;
        }
        else return 0;
    }   

    void enqueue(int val){
        Node* newNode = new Node(val);

        if(front==NULL){
            front=newNode;
            back = newNode;
        }else{
            back->next= newNode;
            back=newNode;
        }
    }

    void dequeue(){
        if(empty()){
            return;
        }

        Node* temp = front;
        
        front=front->next;
        delete temp;
    }

    void display(){
        Node* temp = front;

        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }


};

int main(){

    queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Elements of queue are :- ";
    q.display();

    cout << "Front element: " << q.front->data << endl;
    cout << "Back element: " << q.back->data << endl;

    q.dequeue();

    cout << "Elements of queue are :- ";
    q.display();

    cout << "Front element: " << q.front->data << endl;
    cout << "Back element: " << q.back->data << endl;

    cout << "Is queue empty? " << q.empty() << endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    cout << "Elements of queue are :- ";
    q.display();

    cout << "Is queue empty? " << q.empty() <<endl;
}