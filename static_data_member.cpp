//static data memeber
#include<iostream>
using namespace std;

class member
{   private:
        int a,b;
        static int c;
    public:
        void getdata(int x,int y)
        {
            a=x;
            b=y;
            c=c+1;
        }
        void putdata()
        {
            cout<<"\na "<<a<<"\nb "<<b<<"\nc "<<c;

        }

};
int member ::c;
int main()
{
    member aa;
    member bb;
    aa.getdata(5,6);
    bb.getdata(9,8);
    aa.putdata();
}