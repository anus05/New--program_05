//move all x in the end of the string


#include<iostream>
#include<string>
using namespace std;
string movex(string s) {
    if(s.length() == 0) {
        return "";
    }
    char ch = s[0];
    string p = movex(s.substr(1));
    if(p.length() > 0 && ch == 'x') {
        return p+ch;  
    }
    return ch + p;  
}

int main() {
    string s;
    cout << "Enter a string: " << endl;
    getline(cin, s);
    string result = movex(s);
    cout << "The New string is: " << result << endl;
    return 0;
}
