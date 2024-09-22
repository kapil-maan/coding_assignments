// Ques 1: You are given a image in n*m matrix now you have to rotate the image by 90 degree. 
//Input : n=3, m=3 , 
//image[3][3] = {[1, 2, 3],[4,5,6],[7,8,9]}. 

//Output =7 4 1
// 8 5 2
// 9 6 3

// Take all input from user.


#include <iostream>
using namespace std;

void rotate90Clockwise(int arr[3][3], int n) {
    // Transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    // Reverse individual rows
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(arr[i][j], arr[i][n - j - 1]);
        }
    }
}

int main() {
    int n = 3, m = 3;
    int image[3][3];
    
    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> image[i][j];
        }
    }

    rotate90Clockwise(image, n);

    cout << "Rotated Image by 90 degrees:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}




// Ques 2: Write a C++ program that take 2D array from user and then sort this array. 
//Input n=3, m=3 array=7 4 1
// 8 5 2
// 9 6 3

// output :- 1 2 3
// 4 5 6
// 7 8 9


#include <iostream>
#include <algorithm>
using namespace std;

void sort2DArray(int arr[3][3], int n, int m) {
    int temp[n * m];
    int k = 0;

    // Flatten the 2D array into a 1D array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            temp[k++] = arr[i][j];
        }
    }

    // Sort the 1D array
    sort(temp, temp + n * m);

    // Fill the 2D array back with sorted values
    k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = temp[k++];
        }
    }
}

int main() {
    int n = 3, m = 3;
    int array[3][3];
    
    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }

    sort2DArray(array, n, m);

    cout << "Sorted 2D Array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

