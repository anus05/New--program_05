//1)catalen number
#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int prevfact=factorial (n-1);
    return n*prevfact;
}
int main()
{
    int n,s,e,c;
    
    cout<<"Enter starting and ending index : "<<endl;
    cin>>s>>e;
   /* int fact=factorial(n);
    int fac=factorial(2*n);
    int factt=factorial(n+1);*/
    for(int n=s;n<=e;n++)
    {
     c=factorial(2*n)/(factorial(n)*factorial(n+1));
     
       cout<<c<<endl;
       c++;
    }
  
    
    return 0;
}