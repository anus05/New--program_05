
#include<iostream>
using namespace std;

class member
{   private:
        int a,b;
        
    public:
       member()//constructor
       {
        a=8;
    
       }
      member(member &z)//constructor
       {
        a=z.a;
    
       }
       void putdata()
       {
        cout<<"\na is : "<<a;
       }

};

int main()
{   member aa;
    member bb(aa); 
    aa.putdata();
    bb.putdata();
}