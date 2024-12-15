/* Summation of square of n natural numbers
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the nth term : ";
	cin>>n;
	int result = (n*(n+1)*(2*n+1))/6;
	cout<<"The Summation of Squares of first "<<n<<" natural numbers will be : "<<result;
}