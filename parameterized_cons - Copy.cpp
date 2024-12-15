
#include<iostream>
using namespace std;

class member
{   private:
        int a,b;
        
    public:
       member(int m,int n)//constructor
       {
        a=m;
        b=n;
       }
       void putdata()
       {
        cout<<"a is : "<<a<<"\nb is : "<<b;
       }

};

int main()
{   int x,y;
    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;
    member aa(x,y);
    aa.putdata();
   
}