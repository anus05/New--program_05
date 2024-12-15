/*Write a C++ program to rearrange the elements of a given array of integers in a zig-zag pattern.
Note: The format zig-zag array in form a < b > c < d > e < f*/  
#include<iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements in the array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Forming the zigzag pattern
    for(int i = 0; i < n-1; i++) {
        if (i % 2 == 0) {
            // For even index
            if (arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
            }
        } else {
            // For odd index
            if (arr[i] < arr[i+1]) {
                swap(arr[i], arr[i+1]);
            }
        }
    }

    // Display the zigzag array
    cout << "Zigzag array is:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
