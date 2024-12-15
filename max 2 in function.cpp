//finding maximum of 3 numbers


#include<iostream>
using namespace std;
int main()
{	int n1,n2,n3;
	cout<<"Enter 3 numbers:\n";
	cin>>n1>>n2>>n3;
	if (n1>n2 &&n1>n3)
	{
		cout<<n1<<"is maximum number";
	}
	else if(n2>n1 &&n2>n3)
	cout<<n2<<"is maximum number";
	else
		cout<<n3<<" is maximum number";
	
	return 0;
}

