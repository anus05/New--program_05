//write c++ program to reverse each element of the array and also reverse the whole array
#include<iostream>
using namespace std;

int reverseNumber(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int main() {
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    int arr[n];
    int temp;
   int output[n];
    cout << "Enter the elements in this array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Reverse each element of the array
    for(int i = 0; i < n; i++) {
        output[i] = reverseNumber(arr[n-i-1]);
    }

    

    // Display the final reversed array
    cout << "Reversed array with each element reversed:\n";
    for(int i=0;i<n;i++)
    {
        cout<<output[i]<<" ";
    }

    return 0;
}
