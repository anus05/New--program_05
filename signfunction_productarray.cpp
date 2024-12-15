/*1 if x is positive.
-1 if x is negative.
0 if x is equal to 0.
Input: nums = [-1,-2,-3,-4,3,2,1]
Output: 1
Explanation: The product of all values in the array is 144, and signFunc(144) = 1  */
#include<iostream>
using namespace std;
int singprod(int nums[],int size)
    {
    int sign=1;
    for(int i=0;i<size;i++)
    {
        if(nums[i]==0)
        {
            return 0;
        }
        if(nums[i]<0)
        {
            sign=-1*sign;
        }
    }return sign;
    }
int main()
{
    int r;
    int i,j;
    cout<<"Enter the size : "<<endl;
    cin>>r;
    int nums[r];
    cout<<"Enter the elements in the array : "<<endl;
    for(i=0;i<r;i++)
    {
            cin>>nums[i];
    }
    cout<<"The array  is = ";
    for(i=0;i<r;i++)
    {
           cout<<nums[i]<<" ";   
    }
    cout<<"\nThe sign of the product of the array : "<<singprod(nums,r);
    
    
}