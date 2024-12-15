//Write a C program to display the Transpose of a given matrix.
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows : ";
    cin>>m;
    cout<<"\nEnter the number of columns : ";
    cin>>n;
    int ar[m][n];
    int arr[m][n];
    cout<<"\nEnter the elements of the matrix : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The Original matrix is : "<<endl;
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ar[i][j]=arr[j][i];
        }
      
    }
      cout<<"The Transpose matrix is : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
      
    }
    return 0;
}