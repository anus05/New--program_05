#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //pair<string,int>p;
    //Two method
   // p=make_pair("Anu",32);
   // p.first="Anu";
   // p.second=30;
    //cout<<p.first<<" "<<p.second<<endl;
    //3 pair
    pair <string,pair<int,int>>p;
    //p.first="Anu";
    //p.second.first=32;
    //p.second.second=34;
    p=make_pair("Anu",make_pair(32,54));
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}