//Armstrong number
#include<iostream>
#include<cmath>
using namespace std;
int countdigit(int n)
{
	int count=0;
	while(n>0)
	{
		n/=10;
		count++;
	}
	return count;
}
bool armstrong(int n)
{
	int temp=n;
	int sum=0;
	int num=countdigit(n);
	while(temp>0)
	{
		int digit=temp%10;
		sum+=pow(digit,num);
		temp/=10;
	}
	return sum==n;
}
int main(){
	int n;
	cout<<"Enter a number:\n";
	cin>>n;
	if(armstrong(n))
	{
		cout<<"The Number is an armstrong number ";
	}
	else
	{
		cout<<"The Number is not armstrong number ";
	}
	
}
