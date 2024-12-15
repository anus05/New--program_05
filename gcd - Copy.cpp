// Write a C++ program to implement a recursive function to find the greatest common divisor (GCD) of two numbers
#include<iostream>
using namespace std;
int gcd(int n,int m)
{
    if(m!=0)
    {
      return gcd(m,n%m);
    }
    else
        return n;


}
int main(){
   int n,m;
   cout<<"Enter two positive integer : "<<endl;
   cin>>n>>m;
   cout<<"The GCD of this number is :"<<gcd(n,m)<<endl;
    return 0;
}
