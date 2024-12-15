//C++ program to reverse a given array
#include<iostream>
using namespace std;

int main()
{
	int n;
	int A[n];
	cout<<"Enter the size of the array : ";
	cin>>n;
	cout<<"Enter the elements of the array : \n";
	for(int i=0;i<n;i++)
		cin>>A[i];
	
	cout<<"Original Array : "<<endl;
	for(int i=0;i<n;i++)
		cout<<A[i]<<"  ";
	
	int low=0;
	int high=n-1;
	while(low<high)
	{
		A[low]=A[low]+A[high];
		A[high]=A[low]-A[high];
		A[low]=A[low]-A[high];
		low+=1;
		high-=1;
	}
	
	cout<<"\nReversed Array : "<<endl;
	for(int i=0;i<n;i++)
		cout<<A[i]<<"  ";
}