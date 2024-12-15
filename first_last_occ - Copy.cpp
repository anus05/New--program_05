//find the first and last occursnce of a number in an array
#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int k)
{
    if(i==n){
        return -1;
    }
    if(arr[i]==k)
    {
        return i;
    }
    return firstocc(arr,n,i+1,k);
}
int lastocc(int arr[],int n,int i,int k)

{     if(i==n){
        return -1;
    }
    int restarr=lastocc(arr,n,i+1,k);
    
    if(restarr!=-1){
        return restarr;
    }
    if(arr[i]==k)
    {
        return i;
    }
    return -1;
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
    cout<<"Enter the number you want to search : "<<endl;
    int k;
    cin>>k;
    cout<<"The First occurance is : "<<firstocc(arr,n,i,k)<<" index number"<<endl;
     cout<<"The First occurance is : "<<lastocc(arr,n,i,k)<<" index number"<<endl;

}