//calculating distance between 2 points
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a1,a2,b1,b2,d=0;
	cout<<"Enter the coordinates of the the point 1:\n";
	cin>>a1>>b1;
	cout<<"Enter the coordinates of the the point 2 :\n";
	cin>>a2>>b2;
	d=sqrt(pow(a2-a1,2)+pow(b2-b1,2));
	cout<<"The distance between 2 points is:\n"<<d;
	
	
	return 0;
}
