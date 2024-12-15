/*Write a C++ program to find the element that appears once in an array of integers and every other element appears twice.*/
#include<iostream>
using namespace std;
int main()
{
    int n,temp,temp2;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count=1;
                count++;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
    if(count==1)
    {
        temp=arr[i];
        
    }else if(count==2)
    { 
        temp2=arr[i];
    }
    
        
    
    }
    cout<<temp;

}