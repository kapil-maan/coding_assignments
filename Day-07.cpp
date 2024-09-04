// Ques-01 Write C++ program that take array from the user and sort the array using bubble sort algorithm.

// Input:
// N = 5
// arr[] = {4, 1, 3, 9, 7}

// Output:
// 1 3 4 7 9

#include <iostream>
using namespace std;

void bubblesort(int arr[], int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n- i -1;j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp ;
            }
        }
    }
}

int main(){
    int n; 
    cout<<"Enter the size of array:- ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    bubblesort(arr,n);

    for(int i=0;i<n;i++){
        cout<< arr[i]<< " " ;
    }

    return 0;
}


// Ques-02 Write C++ program that take array from the user and sort the array using insertion sort algorithm.

// Input:
// N = 5
// arr[] = {4, 1, 3, 9, 7}

// Output:
// 1 3 4 7 9


#include <iostream>
using namespace std;

void insertionsort(int arr[], int n){

    for(int i=1;i<n;i++){
        int k = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>k){
            arr[j+1]=arr[j];
            j=j-1;
        }

        arr[j+1] = k;

    }
}

int main(){
    int n; 
    cout<<"Enter the size of array:- ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    insertionsort(arr,n);

    for(int i=0;i<n;i++){
        cout<< arr[i]<< " " ;
    }

    return 0;
}