// Ques 1. Given an array, find the nearest smaller element G[i] for every element A[i] in the array such that the element has an index smaller than i.

// More formally,

// G[i] for an element A[i] = an element A[j] such that
// j is maximum possible AND
// j < i AND
// A[j] < A[i]
// Elements for which no smaller element exist, consider next smaller element as -1. Note :- Take all the required input from user. Sample :-
// Input 1:
// A = [4, 5, 2, 10, 8]
// Output 1:
// G = [-1, 4, -1, 2, 2]
// Explaination 1:
// index 1: No element less than 4 in left of 4, G[1] = -1
// index 2: A[1] is only element less than A[2], G[2] = A[1]
// index 3: No element less than 2 in left of 2, G[3] = -1
// index 4: A[3] is nearest element which is less than A[4], G[4] = A[3]
// index 4: A[3] is nearest element which is less than A[5], G[5] = A[3]



#include <iostream>
#include<vector>
using namespace std;

vector<int> nearSmallestElement(vector<int> arr){
    vector<int> ans;
    int found=0;
    for(int i=0;i<arr.size();i++){
        found=0;
        for(int j=i-1;j>=0;j--){
            if(arr[j]<arr[i]){
                ans.push_back(arr[j]) ;
                found=1;
                break;
            }
        }
        if(found==0) ans.push_back(-1);
    }
    return ans;
}


int main(){
    cout<<"Nubmer of elements in the array:- ";
    int n;cin>>n;

    vector<int> arr(n);

    cout<<"Enter elements :- A = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ans=nearSmallestElement(arr);
    
    cout << "Next smaller elements:- G = ";
     
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