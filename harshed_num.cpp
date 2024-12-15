//A Harshad number
/*eg. 378 is Harshad number
3+7+8=18 . 378 is divisble by 18
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int sum=0;
    int copy=n;
    while(copy!=0)
    {
        sum +=copy%10;
        copy/=10;
    }    
        if (n%sum==0)
        {
            cout<<"The Number is Harshed number";
        }
        else
        {
            cout<<"The Number is not harshed number";
        }
    
}