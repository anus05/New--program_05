//Factors of a number
#include<iostream>
using namespace std;
int main()
{	int n;
	int i=0;
	cout<<"Enter a numbers:";
	cin>>n;
	cout<<"The factors are:\n";
	for(i=1;i<=n;i++){
		if(n%i==0)
		cout<<i<<endl;
	}
	return 0;
}

