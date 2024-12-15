
#include<iostream>
using namespace std;
class A 
{
    protected :
        int x;
    public:
        void input()
        {
            cout<<"Enter a number : "<<endl;
            cin>>x;
        }
};
class B 
{  
     protected:
        int y;
    public:
        void getData()
        {
            cout<<"\nEnter a number : "<<endl;
            cin>>y;

        }
       
    
};
class c: public A,public B
{
    public:
        void add()
        {
            cout<<"Addition:  "<<x+y;
        }
};
int main()
{
    c b;
    b.input();
    b.getData();
    b.add();
}