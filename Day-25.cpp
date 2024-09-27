// Ques 1. Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// Sample :- Input: nums = [2,2,1]
// Output: 1
// Note: Take all the required input from user.



#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no of element in the array :- ";
    cin>>n;

    vector<int> arr;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    for(int i=0;i<n;i++){
        int flag=1;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(arr[i]==arr[j]){
                flag=0;
            }
        }
        if(flag==1){ 
            cout<<arr[i];
            break;
        }
    }
    return 0;
}


// Ques 2. Implement the stack using linkedlist.


#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data=val;
            next=nullptr;
        }
};


class stack{
    
    node* top;
    public:
        stack(){
            top = nullptr;
        }

        int Top(){
            if(empty()){
                cout<<"stack is empty"<<endl;
                return -1;
            }
            else{
                return top->data ;
            }
        }

        void push(int val){
            node * newnode= new node(val);

            newnode->next = top;
            top= newnode;
        }

        void pop(){
            if(top==nullptr){
                cout<<"satck underflow"<<endl;
            }
            node* temp = top;
            top= top->next;
            delete temp;
        }

        void display(){
            node* temp = top;

            while(temp!=NULL ){
                cout<<temp->data<<" " ;
                temp=temp->next;
            }
            cout<<endl;
        }

        bool empty(){
            return top==nullptr ;
        }

};

int main(){

    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout<<st.Top()<<endl;

    cout<<"stack elements are :- ";
    st.display();

    st.pop();

    cout<<st.Top()<<endl;

    cout<<"stack elements are :- ";
    st.display();

    cout<<st.empty()<<endl;

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    
    cout<<st.Top()<<endl;

    cout<<st.empty()<<endl;
    

    return 0;
}