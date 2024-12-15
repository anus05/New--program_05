#include <iostream>
#include <algorithm> // For reverse
using namespace std;

int main() {
    string s, t;
    cout << "Enter two binary numbers: " << endl;
    cin >> s >> t;
    // Reverse the strings
    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());

    string result = ""; // To store the result
    int carry = 0;      // Initialize carry

    // Perform binary addition
    int maxLength = max(s.size(), t.size());
    for (int i = 0; i < maxLength; i++) {
        
        int bit1, bit2;
if (i < s.size()) {
    bit1 = s[i] - '0'; 
} else {
    bit1 = 0; 
}

if (i < t.size()) {
    bit2 = t[i] - '0'; 
} else {
    bit2 = 0; 
}
    //sum
        int sum = bit1 + bit2 + carry;
        result += (sum % 2) + '0'; 
        carry = sum / 2;           // Update the carry
    }

    // If there's a carry left, append it to the result
    if (carry) {
        result += '1';
    }

    // Reverse the result to get the correct order
    reverse(result.begin(), result.end());

    // Print the result
    cout << "The binary sum is: " << result << endl;

    return 0;
}
