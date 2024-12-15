
/******************************************************************************

Write a C program to display the summation of all row elements and all 
column elements of a given matrix separately.

*******************************************************************************/
#include <iostream>

using namespace std;

int main() {
    int rows, cols, i, j;
    int sum_row, sum_cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "\nEnter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "\nEnter the elements of the matrix:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nThe Original matrix is:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Sum of rows
    for (i = 0; i < rows; i++) {
        sum_row = 0;
        for (j = 0; j < cols; j++) {
            sum_row += arr[i][j];
        }
        cout << "Summation of row " << i + 1 << ": " << sum_row << endl;
    }

    // Sum of columns
    for (j = 0; j < cols; j++) {
        sum_cols = 0;
        for (i = 0; i < rows; i++) {
            sum_cols += arr[i][j];
        }
        cout << "Summation of column " << j + 1 << ": " << sum_cols << endl;
    }

    return 0;
}