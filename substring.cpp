//printing substring


#include<iostream>
#include<string>
using namespace std;
string create(string s,string p) {
    if(s.length() == 0) {
        cout<<p<<endl;
        return "";
    }
    char ch = s[0];
    string rset_arr = create(s.substr(1));
    create(rset_arr,p);
    create(rset_arr,p+ch);
}

int main() {
    string s;
    cout << "Enter a string: " << endl;
    getline(cin, s);
    string p="";
    string result = create(s,p);
    cout << "The New string is: " << result << endl;
    return 0;
}
