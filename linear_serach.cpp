//Linear search
#include<iostream>
using namespace std;
int main(){
    int n,k;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in this array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number you want to search:"<<endl;
    cin>>k;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"The element is found at: "<<i<<" index ";
            
              }
              
              
    }
    if(k==-1){
        
              cout<<"the element is not found";
    }
  
    return 0;
}