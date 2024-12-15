#include<iostream>
#include <list>
using namespace std;
int main()
{
    list<int>l;
    l.push_back(32);
      l.push_back(23);
        l.push_back(34);
          l.push_back(52);
          l.push_front(12);
          l.pop_front();
         // cout<<l.front()<<" "<<l.back()<<endl;
        // cout<<l.size()<<endl;
        //print all elments
        cout<<"The elements are : "<<endl;
        for(auto it=l.begin();it!=l.end();it++)
        {
            cout<<*it<<" "<<endl;
        }
        cout<<"In reverse : "<<endl;
        //reverse
         for(auto it=l.rbegin();it!=l.rend();it++)
        {
            cout<<*it<<" "<<endl;
        }
        
}