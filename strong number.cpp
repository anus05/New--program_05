//strong of a number
#include<iostream>
using namespace std;
int main(){
	int n,fact,rem,temp;
	int sum=0;
	cout<<"Enter a number:";
	cin>>n;
	temp=n;
	while(n){
	int i=1;
	fact=1;
	rem=n%10;
	while(i<=rem){
		fact=fact*i;
		i++;
	}	
	sum+=fact;
	n=n/10;
	}
	if (sum==temp){
		cout<<temp<<"is a strong number";
	

}
     else{
     	cout<<temp<<"is not a strong number";
	 }
}
