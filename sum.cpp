// Write a C++ program to find the sum of all elements in an array using recursion.
#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
    if(n==0)
    return false;
    int prevsum=sum(arr,n-1);
    return n+prevsum;
}
int main()
{   int n,i;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in this array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The sum is : "<<sum(arr,n)<<endl;

}