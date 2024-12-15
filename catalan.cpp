//Display catalan numbers within a given range[cn=2n!/n!(n+1)!]
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter  the value of n : ";
    cin>>n;
    int fact,factt;

    //for n!
    
    for(int i=1;i<=n;i++){
		fact*=i;
	}
    cout<<fact;
    //for (n+1)!
    for(int i=1;i<=n+1;i++)
    {
        factt*=i;
    }
    float num=2*fact/(fact*factt);
    cout<<num;
}