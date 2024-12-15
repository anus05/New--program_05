
#include<iostream>
using namespace std;

class member
{   private:
        int a,b;
        
    public:
       member()
       {
        a=6;
        b=8;
       }
       void putdata()
       {
        cout<<"a is : "<<a<<"\nb is : "<<b;
       }

};

int main()
{
    member aa;
    
    aa.putdata();
   
}