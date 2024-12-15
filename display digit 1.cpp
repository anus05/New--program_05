//Display digit in word
#include<iostream>
using namespace std;
int main(){
	int n,num;
	cout<<"Enter a digit:";
	cin>>n;
	while(n!=0){
		num=(num*10)+(n%10);
		n/=10;
	}
	for(int i=num;i<0;i++){
		switch(i%10){
			case 0:
				cout<<"zero";
				break;
			case 1:
				cout<<"one";
				break;
			case 2:
				cout<<"Two";
				break;
			case 3:
				cout<<"Three";
				break;
			case 4:
				cout<<"Four";
				break;
			case 5:
				cout<<"Five";
				break;
			case 6:
				cout<<"six";
				break;
			case 7:
				cout<<"seven";
				break;
			case 8:
				cout<<"Eight";
				break;
			case 9:
				cout<<"Nine";
				break;											}
	}
	cout<<i;
	return 0;
}
