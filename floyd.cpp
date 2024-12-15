/*Floyd's Pattern triangle
1
2 3
4 5 6
*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the no of line : ";
	cin>>n;
	int count=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<++count<<"\t";
		}
		cout<<endl;
	}
}