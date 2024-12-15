/*Write a C++ program to implement a recursive function to find the maximum and minimum elements in an array.*/
#include<iostream>
using namespace std;
int fmax(int arr[],int i,int n)
{   //base case
    if(i==n-1)
    {
        return arr[i];
    }
    return max(arr[i],fmax(arr,i+1,n));
    
}
int  fmin(int arr[],int  i,int n)
{
     if(i==n-1)
    {
        return arr[i];
    }
    return min(arr[i],fmin(arr,i+1,n));
}
int main()
{
    int n,i;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter the elements in this array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    } 
    cout<<"The max in the array is : "<<fmax(arr,i,n)<<endl;
    cout<<"The min in the array is : "<<fmin(arr,i,n)<<endl;
}