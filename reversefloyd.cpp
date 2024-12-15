/*
Reverse Floyd Triangle 
15 14 13 12 11 
10 9 8 7 
6 5 4 
3 2 
1
*/

#include<iostream>
using namespace std;

int main()
{
    int n,max;
    cout<<"Enter the number of lines : ";
    cin>>n;
    max = n * (n+1) /2;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<max<<"\t";
            max--;
        }
        cout<<endl;
    }
}