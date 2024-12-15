//remove duplicate character

#include<iostream>
#include<string>
using namespace std;
string dupli_remove(string s) {
    if(s.length() == 0) {
        return "";
    }
    char ch = s[0];
    string p = dupli_remove(s.substr(1));
    if(p.length() > 0 && ch == p[0]) {
        return p;  
    }
    return ch + p;  
}

int main() {
    string s;
    cout << "Enter a string: " << endl;
    getline(cin, s);
    string result = dupli_remove(s);
    cout << "The New string is: " << result << endl;
    return 0;
}
