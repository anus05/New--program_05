//reverse string
#include<iostream>
#include<string>
using namespace std;
void reverse(string s)
{
    if(s.length()==0){
        return;
    }
    string r=s.substr(1);
    reverse(r);
    cout<<s[0];
}
int main()
{
    string s;
    cout<<"Enter a string : "<<endl;
    getline(cin,s);
    cout<<"The Reverse string is  : "<<endl;
    reverse(s);
    return 0;
}