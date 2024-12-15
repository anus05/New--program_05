/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.*/
#include <iostream>
using namespace std;

int main() {
    int n1,n2,i,j,temp;
    cout << "Enter the size of the array1: ";
    cin >> n1;
     cout << "Enter the size of the array2: ";
    cin >> n2;

    int nums1[n1];
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }
    int nums2[n2];
    cout << "Enter the elements in the array2 : ";
    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }
    int n=n1+n2;
    int arr[n];
    //merge array
    for (int i = 0; i < n1; i++) {
        arr[i] = nums1[i];
    }

    // Copy elements from the second array
    for (int i = 0; i < n2; i++) {
      arr[n1 + i] = nums2[i];
    }
    
    // Print merged array
    cout << "Merged Array: ";
    for (int i = 0; i <n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    //sored array
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<(n-1-i);j++)
        {
            if(arr[j]>arr[j+1])

            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //display resulting array
    cout<<"The resulting array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    //median
    double median;
    if (n % 2 == 0) { // Even number of elements
        median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else { // Odd number of elements
        median = arr[n / 2];
    }

    // Output the median
    cout << "\nThe median of the merged sorted arrays is: " << median << endl;



}    