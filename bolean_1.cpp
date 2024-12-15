/******************************************************************************

Given a boolean 2D array of n x m dimensions where each row is sorted.
Find the 0-based index of the first row that has the maximum number of 1's.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int m,n, i, j;
    int count=0;
    int max_count=-1;
    int max_row;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "\nEnter the number of columns: ";
    cin >> n;

    int arr[m][n];

    cout << "\nEnter the elements of the matrix in Binary digits which are sorted :\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nThe Original matrix is:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for(i=0;i<m;i++)
     {   for(j=m;j>0;j--)
        {
            if(arr[i][j]==1)
            count ++;
        }
        if(count>=max_count)
        {   max_count=count;
            max_row=i;
        }
       
    }cout<<"Row "<<max_row<<" has the maximum number of 1 ";

    
}