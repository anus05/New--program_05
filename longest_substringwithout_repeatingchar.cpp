#include "bits/stdc++.h"
using namespace std;

int32_t main()
{
    string s;
    cout << "Enter a string: " << endl;
    cin >> s;
    
    vector<int> dict(256, -1);
    int maxlen = 0, start = -1;
    int startOfMax = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (dict[s[i]] > start)
            start = dict[s[i]];
        dict[s[i]] = i;
        if (i - start > maxlen) {
            maxlen = i - start;
            startOfMax = start + 1;
        }
    }
    
    string longestSubstring = s.substr(startOfMax, maxlen);
    
    cout << "Length of the longest substring without repeating characters: " << maxlen << endl;
    cout << "Longest substring without repeating characters: " << longestSubstring << endl;

    return 0;
}
