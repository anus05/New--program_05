/*You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.
Return the sum of all the unique elements of nums.
Input: nums = [1,2,3,2]
Output: 4
Explanation: The unique elements are [1,3], and the sum is 4.*/
#include<iostream>
using namespace std;
void is_unique(int nums[],int size,num)
{   int output=0;
    for(int i=0;i<nums.size;i++)
    {
        if(num==nums[i])
        output=1;
    }
    return output;
}
int main()
{
    int n,i,j;
    int nums[n];
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    cout<<"Enter the elements in the array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i]; 
    }
}