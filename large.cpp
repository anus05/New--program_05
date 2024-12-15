#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int temp;
    int arr[n];
    cout<<"Enter the elements in the array : :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //sorted array
    for(int i=0;i<n;i++)
    {
        if (temp<=arr[i])
            temp=arr[i];
    }

    cout<<"The largest element is : "<<temp;
}