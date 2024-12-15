#include<iostream>
using namespace std;


int findsubarray(int arr[],int n,int s){
    int left=0;
    int curr_sum=0;
    for(int right=0;right<n;right++){
        curr_sum+=arr[right];
    
    while(curr_sum>s &&left<right){
        curr_sum-=arr[left];
        left++;
    }
    
    if(curr_sum==s){
        return (left+1,right+1);//converting to 1 based index
    }
    }
    return (-1,-1);
}
int main(){
    int n;
    int s;
    cout<<"Enter the number of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    
    }
    
    cout<<" \nEnter the value of s(less equal to the sum of original array)";
    cin>>s;
    int result=findsubarray(arr, n,s);
   if(result.size()==-1 && result[0]==-1){
    cout<<"No subarray found with the given sum"<<-1<<endl;
   }
   else{
    cout<<"The subarray with the given sum is from index"<<result[0]<<"to"<<result[1]<<" ."<<endl;
   }
    return 0;
}