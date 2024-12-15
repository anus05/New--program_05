//HYBRID INHERITENCE
#include<iostream>
using namespace std;
class A 
{
    public:
        void msg()
        {
            cout<<"\nInside class A ";
        }
};
class B :public A
{  
    public:
       void Display()
       {
        cout<<"\nInside in class B";
       }
       
    
};
class c
{   
    public:
        void putdata()
        {
            cout<<"\nInside the class c";
        }
        
};
class D:public B,public c
{   
    public:
        void print()
        {
            cout<<"\nInside the class d";
        }
        
};
int main()
{
    D dd;
    dd.print();
    dd.Display();
    dd.putdata();
    dd.msg();
 
    }