/*String to Integer (atoi)
Input: s = "1337c0d3"
Output: 1337
Explanation:
Step 1: "1337c0d3" (no characters read because there is no leading whitespace)
         ^
Step 2: "1337c0d3" (no characters read because there is neither a '-' nor '+')
         ^
Step 3: "1337c0d3" ("1337" is read in; reading stops because the next character is a non-digit)*/
#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : "<<endl;
    getline(cin,s);
    int num=atoi(s.c_str());
    cout<<"integer value is : "<<num;

}