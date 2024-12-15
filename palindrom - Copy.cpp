#include<iostream>
#include<string>
using namespace std;

string reverse(string s)
{
    if(s.length() == 0){
        return "";  
    }
    string r = reverse(s.substr(1));  
    return r + s[0]; 
}

int main()
{
    string s;
    int i;
    cout << "Enter a string: " << endl;
    getline(cin, s);
    cout<<"The reverse string : "<<reverse(s);
   
   

    return 0;
}
