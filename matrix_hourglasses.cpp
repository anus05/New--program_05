//matrix  & hourglass sum

#include<iostream>
using namespace std;
int main()
{   
    int n,m;
    cout<<"Enter row and col no :"<<endl;
    cin>>m>>n;
    int arr[m][n];
    if (m < 3 || n < 3) {
        cout << "Matrix is too small for hourglass calculation!" << endl;
        return 0;
    }
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<m;i++)
    {   for(int j=0;j<n;j++)
    {
         cin>>arr[i][j];
    }
       
    }
     for(int i=0;i<m;i++)
    {   for(int j=0;j<n;j++)
    {
         cout<<arr[i][j]<<" ";
    }
        cout<<endl;
    }
   
    int max_sum = INT_MIN;
    for(int i=0;i<m-2;i++)
    {
        for(int j=0;j<n-2;j++)
        {
            int hour_glass_sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            max_sum = max(max_sum, hour_glass_sum);
        }
    }
     cout << "Maximum Hourglass Sum: " << max_sum << endl;

    return 0;

}