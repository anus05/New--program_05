/*Write a program to input basic pay of an employee. Calculate da, hra,pf, gp and np. 
Display gp and np. Where da= 24% of bp, hra = 15% of bp, pf = 8.33 of bp. 
gp = bp+da+hra, np = gp-pf*/
#include<iostream>
using namespace std;

class employee
{
    private:
       float bp;
       float gp;
       float np;
       float hra;
       float da;
       float pf;
    public:
        void getdata();
        void display();   
    
};
void employee::getdata()
{
    cout<<"Enter the the bp : "<<endl;
    cin>>bp;
    da=(24*bp)/100;
    hra=(15*bp)/100;
    pf=(8.33*bp)/100;
    
}
void employee::display()
{
    gp = bp+da+hra;
    np = gp-pf;
    cout<<"The gp is : "<<gp<<endl;
    cout<<"The np is : "<<np;
}
int main()
{
    employee e;
    e.getdata();
    e.display();
    return 0;
}