/*The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"*/
#include <iostream>
using namespace std;

string convert(string str, int numrows) {
    if (numrows == 1 || numrows >= str.length()) {
        return str;
    }

    int idx = 0;
    int d = 1; // direction: 1 for down, -1 for up
    string rows[numrows];

    for (char c : str) {
        rows[idx] += c;

        // Change direction at the top or bottom row
        if (idx == 0) {
            d = 1; // Go down
        } else if (idx == numrows - 1) {
            d = -1; // Go up
        }

        idx += d;
    }

    // Concatenate all rows to form the result
    string result = "";
    for (int i = 0; i < numrows; i++) {
        result += rows[i];
    }

    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int numrows;
    cout << "Enter number of rows: ";
    cin >> numrows;

    string result = convert(str, numrows);
    cout << "Zigzag conversion result: " << result << endl;

    return 0;
}
