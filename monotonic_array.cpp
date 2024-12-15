/*An array is monotonic if it is either monotone increasing or monotone decreasing.*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    int j,i=0;
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array : "<<endl;
    for(i=0;i<n;i++)
    {  
         cin>>arr[i]; 
    }
   for(i=0;i<n;i++)
   {
    if(arr[i]<=arr[i+1]|| arr[i]>=arr[i+1])
    {
        cout<<"True";
        break;
    }
    else
    cout<<"False";
   }
 
}