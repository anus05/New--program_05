/*Write a C++ program to arrange the numbers in a given array in a way that the sum of some numbers equals 
the largest number in the array.*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int temp;
    int sum=0;
    int arr[n];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(temp<=arr[i])
            temp=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(temp !=arr[i])
        sum+=arr[i];
    }
    
    if(temp==sum)
    {
            cout<<"True";
    }
     else
            cout<<"False";
    return 0;    
    
    
}

