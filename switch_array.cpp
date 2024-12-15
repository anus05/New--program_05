#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j;
    cout<<"Enter the size : "<<endl;
    cin>>n;
    int sum=0;
 
    int arr[n][n];
    cout<<"Enter the element of an array : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The Matrix is : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     int choice;
    cout<<"Enter your choice :"<<endl;
    
    cout<<"press 1 for summation of primary Diagonal"<<endl;
    cout<<"press 2 for summation of seconday Diagonal"<<endl;
    cout<<"press 3 for summation of  upper Triangle"<<endl;
    cout<<"press 4 for summation of lower Triangle"<<endl;
    cin>>choice;
   
    switch(choice){
        case 1:
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=arr[i][j];
            }
        }
    }
    
    cout<<"sum of Primary Diagonal : "<<sum<<endl;
    break;
    case 2:
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i+j)==(n-1)){
                sum+=arr[i][j];
            }
        }
    }
    cout<<"Sum of secondary Diagonal : "<<sum<<endl;
    break;
    case 3:

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j)
            sum+=arr[i][j];
        }
    }
    cout<<"The sum of upper Triangle : "<<sum<<endl;
    break;
    case 4:
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j)
            sum+=arr[i][j];
        }
    }
    cout<<"The sum of lower Triangle : "<<sum;
    break;
   }
}