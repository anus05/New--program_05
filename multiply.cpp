/*C++ program to multiply two matrix
*/

#include<iostream>
using namespace std;

int main()
{
	int row1,col1,row2,col2;
	cout<<"Enter the number of rows for first matrix : ";
	cin>>row1;
	cout<<"Enetr the number of column for first matrix : ";
	cin>>col1;
	cout<<"Enter the number of rows for second matrix : ";
	cin>>row2;
	cout<<"Enter the number of column for second matrix : ";
	cin>>col2;
	if(col1!=row2)
	{
		cout<<"Matrix multiplication is not possible";
	}
	else
	{
		int A[row1][col1];
		int B[row2][col2];
		int C[row1][col2];
		
		cout<<"Enter the elements of the first matrix : "<<endl;
		for(int i=0;i<row1;i++)
		{
			for(int j=0;j<col1;j++)
			{
				cin>>A[i][j];
			}
		}
		
		cout<<"\nFirst Matrix : "<<endl;
		for(int i=0;i<row1;i++)
		{
			for(int j=0;j<col1;j++)
			{
				cout<<A[i][j]<<" ";
			}
			cout<<endl;
		}
		
		cout<<"Enter the elements of the second matrix : "<<endl;
		for(int i=0;i<row2;i++)
		{
			for(int j=0;j<col2;j++)
			{
				cin>>B[i][j];
			}
		}
	
		cout<<"\nSecond Matrix : "<<endl;
		for(int i=0;i<row2;i++)
		{
			for(int j=0;j<col2;j++)
			{
				cout<<B[i][j]<<" ";
			}
			cout<<endl;
		}
		
		cout<<"\nA x B matrix : "<<endl;
		for(int i=0;i<row1;i++)
		{
			for(int j=0;j<col2;j++)
			{
				C[i][j]=0;
				for(int k=0;k<row2;k++)
				{
					C[i][j]+=A[i][k]*B[k][j];
				}
			}
		}
		
		for(int i=0;i<row1;i++)
		{
			for(int j=0;j<col2;j++)
			{
				cout<<C[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	return 0;
}