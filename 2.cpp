/******************************************************************************

       A B C D E
       A B C D E
       A B C D E
       A B C D E
       A B C D E

*******************************************************************************/
#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter number of lines : ";
   cin>>n;
    
   for(int i=1;i<=n;i++)
   {
      for(char j='A';j<='E';j++)
         cout<<j<<" ";
      cout<<"\n";
   }
 
}     
