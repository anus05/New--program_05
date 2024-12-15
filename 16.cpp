/******************************************************************************

      A B C D E 
      A B C D 
      A B C 
      A B 
      A 

*******************************************************************************/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(char i= char(n+48+17);i>='A';i--){
        for(char j='A';j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    
}