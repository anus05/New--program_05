/*A
  b C
  d E f
  G h I j */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of line : "<<endl;
    cin>>n;
    int count=65;
    for(int i=1;i<=n;i++)
    {   for(int j=1;j<=i;j++)
        {
            char ch;
            if(count%2!=0)
                ch=char(count);
            else
                ch=char(count+32);

            count++;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}  