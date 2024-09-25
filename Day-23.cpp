// Ques 1: You are given an array of integer and target integer now you have to tell it posible to select two elements from an array 
// such that their sum is equal to target. If it is possible then print YES otherwise print NO. 
// Sample testcase arr :[2,7,11,15], target = 9 output : YES . Write code that work in O(n^2) complexity and O(n/logn) complexity. 
// Take all the required input from user.


#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// for O(n^2) time complexity
bool func1(const vector<int> &arr, int target){

    int n = arr.size() ;
    int flag=0;
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < n; j++)
        {
             if(i==j) continue;
             if(arr[i]+ arr[j] == target){
                return true;
             }
        }   
    }
        return false;
}

// for O(n/logn) time complexity
//2 pointer approach
bool func2(vector<int> arr, int target){

    int left=0, right = arr.size() -1;

    sort(arr.begin(),arr.end());

    while(left<right){
        int sum = arr[left]+arr[right];
        
        if(sum==target){
            return true;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    return false;

}




int main(){
    vector<int> arr = {2,7,11,15} ;
    int target = 9;


    if(func1(arr,target)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    if(func2(arr,target)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

    return 0;
}