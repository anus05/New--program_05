/******************************************************************************

     * * * * *
     *       * 
     *       *
     *       *
     * * * * *

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==n)
        {
            for(j=1;j<=n;j++)
            {
                cout<<"* ";
                
            }
            cout<<"\n";
        }
        else
        {
            for(j=1;j<=n;j++)
            {
                if(j==1|| j==n)

                {
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
            cout<<"\n";
        }
        
    }
    return 0;
}