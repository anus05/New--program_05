/******************************************************************************

    1 
    1 0 
    1 0 1 
    1 0 1 0
    1 0 1 0 1 
    
*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j,k;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j %2==0)
            {
                cout<<"0 ";

            }
            else{
                cout<<"1 ";
            }
        }
            cout<<"\n";
    }

}