// Ques 1. Implement the priority queue using array.


#include <iostream>
using namespace std;

struct item{
    int value;
    int priority;
};

item pq[100];

int n = -1 ;// size



void enqueue(int val,int pri){
    n++;
    pq[n].value = val;
    pq[n].priority = pri;
}

int top(){
    int ind= -1;
    int maxPri = -1;
    for(int i=0;i<=n;i++){
        if(maxPri == pq[i].priority && ind >-1 && pq[ind].value < pq[i].value){
            maxPri = pq[i].priority;
            ind = i;
        }
        else if(maxPri < pq[i].priority){
            maxPri = pq[i].priority;
            ind = i;
        }
    }
    return ind;
}

void dequeue(){
    int ind = top();

    for(int i=ind;i<n;i++){
        pq[i]=pq[i+1];
    }
    n--;
}



int main(){

    enqueue(10,2);
    enqueue(20,1);
    enqueue(30,3);
    enqueue(40,4);
    enqueue(50,2);

    int i = top();
    cout<<"Element with the highest priority :- " <<pq[i].value <<endl;
    
    dequeue();

    i = top();
    cout<<"Element with the highest priority :- " <<pq[i].value <<endl;

    dequeue();

    i = top();
    cout<<"Element with the highest priority :- " <<pq[i].value <<endl;

    return 0;
}