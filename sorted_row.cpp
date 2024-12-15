/*Write a C program to generate an output matrix such that each row of the 
given matrix is sorted in ascending order.*/
#include <iostream>

using namespace std;

int main() {
    int rows, cols, i, j;

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

    // Sort each row in ascending order
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols - 1; j++) {
            for (int k = j + 1; k < cols; k++) {
                if (arr[i][j] > arr[i][k]) {
                    swap(arr[i][j], arr[i][k]);
                }
            }
        }
    }

    cout << "\nThe matrix with each row sorted in ascending order:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}