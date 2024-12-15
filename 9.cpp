
/******************************************************************************

       A
       A B 
       A B C 
       A B C D 
       A B C D E 

*******************************************************************************/
#include<iostream>
   using namespace std;
   int main()
   {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    
    for(char i='A';i<='E';i++)
    {
        for(char j='A';j<=i;j++)
        cout<<j<<" ";
       cout<<"\n";
    }
 
   }     
