#include<iostream>
#include <map>
using namespace std;
int main()
{
       map<int,int>m;
        m.insert(make_pair(11,21));
        m.insert(make_pair(33,32));
        m.insert(make_pair(10,33));
        m.insert(make_pair(22,110));
       //another method
       m[10]=18;
       //update value
       m[33]=54;
        
        //print all elments
        cout<<"The elements are : "<<endl;
        for(auto it=m.begin();it!=m.end();it++)
        {
            cout<<it->first<<" "<<it->second<<" "<<endl;
        }
        cout<<m[10]<<endl;
        if(m.count(11))
        cout<<m[11]<<endl;
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
        }
        //search
        cout<<"The element is ";
        if(s.find(110)!=s.end())
          cout<<"Present"<<endl;
        else
          cout<<"Absent"<<endl;
        
        if(s.count(10))
        cout<<1;
        else
        cout<<0;*/
}