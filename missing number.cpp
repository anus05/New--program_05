#include<iostream>
using namespace std;
int main(){
	int n,sum,sum1=0;
	
	cout<<"Enter the size of the array:";
	cin>>n;
	int arr[n-1];
	cout<<"Enter the elements in the array:";
	for(int i=0;i<n-1;i++){
		cin>>arr[i];
		sum1+=arr[i];
	}
	
	sum=(n*(n+1))/2;
	
	cout<<"The missing number is"<<(sum-sum1);
	return 0;
	
}
