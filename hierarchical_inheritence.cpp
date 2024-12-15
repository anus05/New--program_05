//HIERARCHICAL INHERITENCE
#include<iostream>
using namespace std;
class A 
{
    public:
        void msg()
        {
            cout<<"\nWelcome to Inheritence ";
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
class c:public A
{   
    public:
        void putdata()
        {
            cout<<"\nInside the class c";
        }

};
int main()
{
    B aa;
    c bb;
    aa.Display();
    aa.msg();
    bb.putdata();
    bb.msg();
}