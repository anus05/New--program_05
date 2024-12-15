//using protected 
#include<iostream>
using namespace std;
class A 
{
    private:
        int x;
    public:
        void input()
        {
            cout<<"Enter a number : "<<endl;
            cin>>x;
        }
    int getx()
    {
        return x;
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
            cout<<"Addition is : "<<getx()+y;
        }
    
};
int main()
{
    B b;
    b.input();
    b.getData();
    b.putdata();
}