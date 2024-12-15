/*Given a string s consisting of words and spaces, return the length of the last word in the string.
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.*/
#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : "<<endl;
    getline(cin,s);
    reverse(s.begin(),s.end());
    // Find the length of the first word of the reversed string
    int firstWordLength = 0;
    int i = 0;

    // Loop through until a space or end of string is found
    while (i < s.length() && s[i] != ' ') {
        firstWordLength++;  // Increment length count for each character
        i++;
    }
    cout<<"length of the last word : "<<firstWordLength;
}