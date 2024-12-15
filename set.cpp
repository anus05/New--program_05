#include<iostream>
#include <set>
using namespace std;
int main()
{
       set<int>s;
        s.insert(21);
        s.insert(32);
        s.insert(11);
        s.insert(110);
        s.insert(21);
        //delete
        s.erase(11);
        //print all elments
        cout<<"The elements are : "<<endl;
        for(auto it=s.begin();it!=s.end();it++)
        {
            cout<<*it<<" "<<endl;
        }
       /* //in decending order
         set<int,greater<int> >ss;
        ss.insert(21);
        ss.insert(32);
        ss.insert(11);
        ss.insert(110);
        ss.insert(21);
        //print all elments
        cout<<"The elements are : "<<endl;
        for(auto it=ss.begin();it!=ss.end();it++)
        {
            cout<<*it<<" "<<endl;
        }*/
        //search
        cout<<"The element is ";
        if(s.find(110)!=s.end())
          cout<<"Present"<<endl;
        else
          cout<<"Absent"<<endl;
        
        if(s.count(10))
        cout<<1;
        else
        cout<<0;
}