/******************************************************************************

    1 2 3 2 1 
    1       1 
    1       1 
    1       1 
    1 2 3 2 1 

*******************************************************************************/


#include<iostream>
using namespace std;

int main()
{
    int n, i, j;
    int k = 0;
    
    cout << "Enter the value of n : " << endl;
    cin >> n;


    for (i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)  
        {   
            k = 0;
            for (j = 1; j <= n; j++)
            {
                if (j <= (n / 2) + 1) 
                {
                    cout << ++k << " ";
                }
                else
                {
                    cout << --k << " ";
                }
            }
            cout << "\n";
        }
        else  
        {
            for (j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)  
                {
                    cout << "1 ";
                }
                else  
                {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
