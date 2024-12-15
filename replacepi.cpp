//replace pi with 3.14

#include<iostream>
#include<string>
using namespace std;
void replacepi(string s)
{
    if(s.length()==0){
        return;
    }
    if(s[0]=='p'&& s[1]=='i')
    {   cout<<"3.14";
        replacepi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacepi(s.substr(1));
    }
}
int main()
{
    string s;
    cout<<"Enter a string : "<<endl;
    getline(cin,s);
    cout<<"The Replace string is  : "<<endl;
    replacepi(s);
    return 0;
}