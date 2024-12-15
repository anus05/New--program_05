//Adding all elements in an array
#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in this array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        
    }
    cout<<"The sum of all elements in the array:"<<sum;
    return 0;
}