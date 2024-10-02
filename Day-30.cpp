// Ques 1. Write C++ program that take an array of size n from the user and the array contains both positive and negative number. Your task is to calculate the maximum sum of subarray. Print the maximum sum value.
// Input : - n=9 array =-2,1,-3,4,-1,2,1,-5,4
// Output:- 6
// Explanation The subarray [4,-1,2,1] has the largest sum 6.


#include <iostream>
#include<vector>
using namespace std;

//we are using Kadane's algrithm :-
int maxSumSubarray(vector<int> arr){
    int maxSum = arr[0];
    int currentSum = arr[0];

    for(int i=0;i<arr.size();i++){
        currentSum = max(arr[i],currentSum + arr[i]);
        maxSum = max(maxSum, currentSum ) ;
    }

    return maxSum ;
}

int main(){
    int n;
    cout<<"Number of elements in the subarray:- ";
    cin>>n;

    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }

    cout<<"maximum subarray sum is :- "<<maxSumSubarray(arr);
    return 0;
}



// Ques 2. In an array, the next greater element for a given element x is defined as the first element to the right of x that is larger than x.

// You are provided with two distinct 0-indexed integer arrays, nums1 and nums2, where nums1 is a subset of nums2.

// For each element in nums1, find its corresponding position in nums2, and then identify the next greater element that appears to the right of it in nums2. If no such element exists, return -1 for that element.

// Your task is to return an array ans, where each element ans[i] represents the next greater element for nums1[i] as found in nums2. If no next greater element is found, the corresponding entry in ans should be -1. Note all the required input from the user.
// Sample :- n1=3 , n2 =4 nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output :- [-1,3,-1].
// Explanation :- The next greater element for each value of nums1 is as follows:
// - 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
// - 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
// - 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.


#include <iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;

vector<int> nextGreater(vector<int> num1,vector<int> num2){
    stack<int> st;
    unordered_map<int,int > nextgreater;

    for(int num:num2){
        while(!st.empty() && st.top()<num){
            nextgreater[st.top()] = num;
            st.pop();
        }
        st.push(num);
    }
    while(!st.empty()){
        nextgreater[st.top()]= -1;
        st.pop();
    }

    vector<int> ans;
    for(int i: num1){
        ans.push_back(nextgreater[i]);
    }

    return ans;

}

int main(){
    cout<<"number of element in the num1 :- ";
    int n; cin>>n;
    vector<int> num1;

    for(int i=0;i<n;i++){
        int a;cin>>a;
        num1.push_back(a);
    }

    cout<<"number of element in the num2 :- ";
    int m; cin>>m;
    vector<int> num2;

    for(int i=0;i<m;i++){
        int a;cin>>a;
        num2.push_back(a);
    }

    vector<int> ans = nextGreater(num1 , num2);
    
    cout << "Next greater elements:- ";
     
    for(int i=0;i<ans.size();i++){
        if(i==0){
            cout<<"["<<ans[i]<<"," ;
            continue;
        }
        if(i==ans.size()-1){
            cout<<ans[i]<<"]";
            return 0;
        }
        cout<<ans[i]<<",";
    }
    
    return 0;
}