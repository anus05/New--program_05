/*Write a C++ program to sort a given unsorted array of integers, in wave form.
Note: An array is in wave form when array[0] >= array[1] <= array[2] >= array[3] <= array[4] >= . . . */
#include<iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    int arr[n];
    
    cout << "Enter the elements in this array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Forming the wave
    for(int i = 0; i < n-1; i += 2) {
        // Swap adjacent elements to form the wave
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    // Display the wave-like sorted array
    cout << "Wave-like array is:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
