//using protected 
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
class B:public A  
{   
    int y;
    public:
        void getData()
        {
            cout<<"\nEnter a number : "<<endl;
            cin>>y;

        }
        void putdata()
        {
            cout<<"Addition is : "<<x+y;
        }
    
};
int main()
{
    B b;
    b.input();
    b.getData();
    b.putdata();
}