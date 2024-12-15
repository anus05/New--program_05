//Write a C++ program to implement a recursive function to find the sum of all prime numbers in a given range.
#include<iostream>
using namespace std;



int prime(int n)
{   int count=0;
    for(int i=1;i<n+1;i++)
    {
        if(n%i==0)
            count++;
    }
    if(count==2)
        return 1;
    else 
        return 0;
}

int sumPrimes(int s, int E)
{
    if(s>E)
      return 0;
    else if(prime(s)==1)
    { 
        int sum=s;
        s++;
        return sum+sumPrimes(s,E);
    }
    else
    {
        s++;
        return 0 + sumPrimes(s,E);
    }
}

int main()
{  
    int s,E;
    cout<<"Enter the Sarting index : "<<endl;
    cin>>s;
    cout<<"Enter the ending index : "<<endl;
    cin>>E;
     
    cout << "Sum of prime numbers in the said range "<<s<<" to "1<<E<<" : "<<sumPrimes(s,E) <<endl;
    return 0;
}

    
