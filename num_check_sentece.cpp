/*Check if Numbers Are Ascending in a Sentence
Input: s = "1 box has 3 blue 4 red 6 green and 12 yellow marbles"
Output: true
Explanation: The numbers in s are: 1, 3, 4, 6, 12.
They are strictly increasing from left to right: 1 < 3 < 4 < 6 < 12.*/
#include<iostream>
#include<cstdlib>
#define MAXSIZE 30
using namespace std;
int main()
{
    string s;
    cout<<"Enter a string : "<<endl;
    getline(cin,s);
    int arr[MAXSIZE];
    int i;
    for(int i=0;i<s.length();i++)
    {
        char ch=s.at(i);
        if(ch >= 48 && ch <= 57)
        {
            arr[i]=ch;
        }
    }
    cout<<arr[i];
   
  
}