// Ques 1 . You are given a binary array. Your task is to find the maximum number of consecutive ones in array.
// Input :- arr :[1,1,0,1,1,1]
// Output: 3.
// Take all the required input from user.



#include <iostream>
#include <vector>
using namespace std;

int maxOnes(vector<int> arr){
    int maxi=0; //here maxi is to store max consec ones 
    int curr=0; //here curr is to store current value of consecutive ones 
    for(int i=0;i<arr.size(); i++){
        
        if(arr[i]==0) {
            maxi =max(maxi,curr) ;
            curr=0;
        }
        if(arr[i]==1) curr++;

    }
    return max(maxi,curr) ;
}

int main(){
    
    vector<int> arr={1,1,0,1,1,1,};

    cout<<"maximum number of consecutive ones :- "<<maxOnes(arr) ;

    return 0;
}