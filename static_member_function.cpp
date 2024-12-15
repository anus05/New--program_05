//static  memeber function
#include<iostream>
using namespace std;

class member
{   private:
        int a;
        static int c;
    public:
        void getdata(int x)
        {
            a=x;
         
            c=c+1;
        }
        void putdata()
        {
            cout<<"\na: "<<a<<"\nc: "<<c;

        }
        static  void function()
        {
            cout<<"\nc:"<<c;
        }

};
int member ::c;
int main()
{
    member aa;
    aa.getdata(5);
    aa.putdata();
    member::function();
}