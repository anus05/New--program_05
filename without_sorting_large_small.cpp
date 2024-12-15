#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int temp;
    int m=0;
    int max3=0;
    int temp1=32978,p1=32478,m1=32564;
    int arr[n];
    cout<<"Enter the elements in the array : :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //largest element
     for(int i=0;i<n;i++)
    {
        if (temp<=arr[i])
            temp=arr[i];
    }
    
    cout<<"The 1st largest  element is : "<<temp<<endl;
    
    for(int i=0;i<n;i++){
        if(temp !=arr[i]){
            
            if( m<=arr[i]){
                m=arr[i];
            }
        }
    }
    cout<<" The 2nd largest element is : "<<m<<endl;
    for(int i=0;i<n;i++){
        if(temp !=arr[i]){
            if(m!=arr[i] && temp!=arr[i])
            {
                if(max3<=arr[i])
                max3=arr[i];
            }
        }
    }
    cout<<"The 3rd largest element is : "<<max3<<endl;
   
    //smallest element
     for(int i=0;i<n;i++)
    {
        if (temp1>=arr[i])
            temp1=arr[i];
    }
    cout<<"The 1st smallest element is : "<<temp1<<endl;
     for(int i=0;i<n;i++){
        if(temp1 !=arr[i]){
            
            if( m1>=arr[i]){
                m1=arr[i];
            }
        }
    }
    cout<<" The 2nd smallest element is : "<<m1<<endl;
    for(int i=0;i<n;i++){
        if(temp1 !=arr[i]){
            if(m1!=arr[i] && temp1!=m1)
            {
                if(p1>=arr[i])
                p1=arr[i];
            }
        }
    }
    cout<<" The 3rd smallest element is : "<<p1<<endl;
}