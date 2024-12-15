
#include<iostream>
using namespace std;
int count=0;
class member
{      
    public:
       member()//constructor
       {
       count++;
       cout<<"\nNo of object created : "<<count;
       }
       ~member()//deconstructor
       {
        count--;
        cout<<"\nNo of object destroyed : "<<count;
       }

};

int main()
{
    member aa,bb,cc;
    {
        member dd;
    }
    
   
}