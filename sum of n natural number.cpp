//sum of n natural number
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter numbers :";
	cin>>n;
	int sum=0;
	for( i=1;i<=n;i++){
		sum+=i;}
	//while(i<=n){
	//	sum+=i;
	//	i++;	}
	cout<<"Sum of n natural number is:="<<sum<<endl;
	return 0;
}
