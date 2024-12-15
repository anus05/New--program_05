#include<iostream>
using namespace std;
int main(){
	int n,i=0;
	int count=0;
	cout<<"Enter the size of the array:";
	cin>>n;
	int arr[n-1];

	cout<<"Enter the elements in the array:";
	for(i=0;i<n-1;i++){
		cin>>arr[i];
	}
	for(i=0;i<n-1;i++){
	
	for(int j=0;j<n-1;j++){
		if(arr[i]==arr[j])
			count++;
	cin>>count;		
	}
}
	cout<<"Frequency is:"<<count;
	
}
