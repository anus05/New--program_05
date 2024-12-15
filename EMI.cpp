/* Write a C++ program to calculate the EMI.
Formula:
E = (P.r.(1+r)^n) / ((1+r)^n– 1)
Here,
P = loan amount i.e principal amount
R = Interest rate per month
n = Loan time period in year*/
#include<iostream>
#include<cmath>
using namespace std;

class EMI{
    private:
      int p;//principal amount
      float R;//interest rate in minthly
      int n;//loan period in years
      float E;//EMI value
    public:
       void getdata();
       void display();

};
void EMI::getdata()
{
    cout<<"Enter loan amount or principal amount : "<<endl;
    cin>>p;
    cout<<"Enter interest rate per moneth : "<<endl;
    cin>>R;
    cout<<"Enter the time period in year : "<<endl;
    cin>>n;
    R=(R/100)/12;//conver interest rate to monthly
    n=n*12; //convert loan period frome years to month

}
void EMI::display()
{
    E=(p*R*pow(1+R,n) )/ (pow(1+R,n)- 1);
    cout<<"The EMI is : "<<E;
}
int main()
{
    EMI e;
    e.getdata();
    e.display();
    return 0;
}
