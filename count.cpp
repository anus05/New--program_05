#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int count=0;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[i] =arr[j]){
            count++;
        break;}
        }if(count>0){
            cout<<"1st repeating element : "<<arr[i];
            break;
        }
       
    }
    
}