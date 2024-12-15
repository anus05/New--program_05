//finding maximum of 2 numbers using ternary operator

#include<iostream>
using namespace std;
int main()
{	int n1,n2;
	cout<<"Enter 2 numbers:";
	cin>>n1>>n2;
	int max=(n1>n2)?n1:n2;
	cout<<"The maximum number is:"<<max<<endl;
	return 0;
}

