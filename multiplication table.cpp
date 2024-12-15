//Multiplication table
#include<iostream>
using namespace std;
int main(){
	int n,multiply;
	int i;
	cout<<"Enter a number :\n";
	cin>>n;
	cout<<"Multiplication Table is:\n";
	for(i=1;i<=10;i++){
			cout<<n<<"*"<<i<<"="<<n*i<<endl;;
	}

	return 0;
}
