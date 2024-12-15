/*Write a C program to replace the array contents with the summation of the 
digits of its actual elements.

I/P: 97, 14, 28, 13, 56, 65, 90, 71, 19, 20
O/P: 16, 5, 10, 4, 11, 11, 9, 8, 10, 2
 */
#include<iostream>
using namespace std;
int summation(int number)
{    int sum=0;
    int copy=number;
    while(copy !=0)
    {
        sum=sum+(copy%10);
        copy/=10;
    }
    
    return sum;

}
int main()
{
    int n,i;
   
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"The  Original Array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    cout<<"\nThe output array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<summation(arr[i])<<" ";
    }
    return 0;
    
}