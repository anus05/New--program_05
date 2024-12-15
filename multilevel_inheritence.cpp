//MULTILEVEL INHERITENCE
#include<iostream>
using namespace std;
class A 
{
    protected :
        int roll;
    public:
        void getroll()
        {
            cout<<"Enter roll number : "<<endl;
            cin>>roll;
        }
        void putroll()
        {
            cout<<"Roll Number : "<<roll;
        }
};
class B :public A
{  
     protected:
        int sub1,sub2;
    public:
        void getmarks()
        {
            cout<<"\nEnter two marks  : "<<endl;
            cin>>sub1>>sub2;

        }
        void putmarks()
        {
            cout<<"\nThe marks are : "<<"\n"<<sub1<<"\n"<<sub2;
        }
       
    
};
class c:public B
{   protected:
        int sub3;
    public:
        void getsub()
        {
            cout<<"Enter 3rd marks : ";
            cin>>sub3;
        }
        void putsub()
        {
            cout<<"\n"<<sub3;
        }
        void total()
        {
            putroll();
            putmarks();
            putsub();
            cout<<"\nThe Total marks is : "<<sub1+sub2+sub3;
        }
};
int main()
{
    c b;
    b.getroll();
    b.getmarks();
    b.getsub();
    b.total();
}