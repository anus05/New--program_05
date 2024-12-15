//Find thelength of the longest palindrome word in a given sentence
#include<iostream>
using namespace std;
strings reverse(string s)
{
    if(s.length() == 0){
        return "";  
    }
    string r = reverse(s.substr(1));  
    return r + s[0]; 

}
int mian()
{
    string s;
    cout<<"Enter a sentence: "<<endl;
    getline(cin,s);
    string ch=s.substr(i,s.length);
  
    string reverse=reverse(ch);
    if(ch==reverse)
    {
        cout<<"Palindrome ";
    }
    else{
        cout<<"Not Palindrome";
    }


}