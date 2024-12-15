//sum of digit
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n>=0 && n<=9)
    {
        return n;
    }
    return (n%10)+sum(n/10);
}
int main()
{   int n;
    cout<<"Enter the number :"<<endl;
    cin>>n;
    cout<<"The sum is : "<<sum(n)<<endl;

}