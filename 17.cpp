/******************************************************************************

                1 
            1       2 
        1       2       3
    1       2       3      4 
1       2       3       4      5 
    1       2       3      4 
        1       2       3 
            1       2 
                1 
    
*******************************************************************************/
#include<iostream>
using namespace std;
int main(){
    int n=0;
    
    //for upperbound triangle
    for(int i=1;i<=5;i++){
        for(n=(5-i);n>=0;n--)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
    }cout<<endl;
    //for lower bound
    for(int i=5;i<=1;i--){
        for(n=6;n>=i;n--){
            cout<<" ";
        }
        for(int j=1;j<i;j++){
            cout<<j<<" ";
        }
    }cout<<endl;
}
