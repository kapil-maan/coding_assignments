// Ques 1: Write C++ program that create a stack using Array.

/*
#include <iostream>
using namespace std;

class stack{
    int top;
    int arr[100];

    public:
        stack(){ top=-1;}

    void push(int val){
        if(top>=99){
            cout<<"stack overflow\n";
        }
        else{
            arr[++top]=val;
        }
    }

    void pop(){
        if(top<0){
            cout<<"stack underflow\n";
        }
        else{
            cout<<"popped element is :- "<< arr[top--] <<endl;
        }
    }

    void display(){
        if(top>=0){
            cout<<"stack elements are :- ";
            for(int i=top; i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else cout<<"stack is empty\n";
    }


};

int main(){
    stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.display();

    st.pop();
    st.display();

    st.pop();
    st.display();
    
    return 0;
}*/


// Ques 2 : Write C++ program that take n from the user the number of elements and insert all the value inside stack after inserting all value inside stack pop all the values and print. Input: n=5 values = 1,2,3,4,5 output :- 5,4,3,2,1.


#include <iostream>
using namespace std;

class stack{
    int top;
    int arr[100];

    public:
        stack(){ top=-1;}

    void push(int val){
        if(top>=99){
            cout<<"stack overflow\n";
        }
        else{
            arr[++top]=val;
        }
    }

    void pop(){
        if(top<0){
            cout<<"stack underflow\n";
        }
        else{
            cout<< arr[top--] <<",";
        }
    }

/*
    void display(){
        if(top>=0){
            cout<<"stack elements are :- ";
            for(int i=top; i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        else cout<<"stack is empty\n";
    }*/


};


int main(){
    
    stack st;
    int n; 
    cout<< "How many element you want to insert in the stack :- " ;
    cin>>n;


    // pushing element in the stack 
    for(int i=0;i<n;i++){
        int a;
        cin>>a;

        st.push(a);
    }

    // popping element in the stack
    for(int i=0;i<n;i++){
         
        st.pop();
    }


    return 0;
}