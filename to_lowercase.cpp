/*Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.
Example 1:
Input: s = "Hello"
Output: "hello"*/
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string : "<<endl;
    getline(cin,s);
    string output="";
    for(int i=0;i<s.size();i++)
    {
        char c=s.at(i);
        if(c>='a'&&c<='z')
        {
            output+=c;
        }
        else if(c>='A'&&c<='Z')
        {
            output+=(char)((int)c+32);
        }
        else
        output+=c;
    }
    cout<<"The result is : "<<output;
    return 0;

}