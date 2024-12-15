//Fibonacci
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n==0 ||n==1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    cout<<"The fibonacci of "<<n<<" is : "<<fib(n);
    return 0;
}