//factorial of a number

#include<iostream>
using namespace std;
int main(){
	int i,n,fact,factt;
	cout<<"Enter a number:";
	cin>>n;
	
	if(n<0)
	   cout<<"factorial of a negative number is not possible";
	   else{
	   
	for(i=1;i<=n;i++){
		fact*=i;
	}
	for (i=1;i<=n+1;i++)
	{
		factt*=i;
	}
	cout<<"Factorial of "<<n<<""<<fact<<"and "<<n+1<<factt;
	//float num=2fact/(fact())
}
	return 0;
}
