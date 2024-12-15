/******************************************************************************

       A 
       B A 
       C B A 
       D C B A 
       E D C B A 
       
*******************************************************************************/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;
    for(char i='A';i<=char(n+48+17);i++){
        for(char j=i;j>='A';j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    
}