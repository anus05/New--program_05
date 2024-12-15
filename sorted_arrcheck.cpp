//check is it sorted array or not

#include<iostream>
using namespace std;
bool sorted( int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool restarr=sorted(arr+1,n-1);
    if(arr[0]<arr[1] && restarr)
    {
        return true;
    }
    else 
    return false;
}
int main()
{
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    cout << "Enter the elements in this array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"Did the array sorted  "<<sorted(arr,n);
    return 0;
}