#include<iostream>
using namespace std;

void dec(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    dec(n - 1);
}
void inc(int n)
{
    if(n==0)
    return;
inc(n-1);
cout<<n<<" ";
}

int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    cout << "Sorted array in decreasing order : "<<endl;
    dec(n);
     cout << "\nSorted array in increasing order : "<<endl;
    inc(n);

    cout << endl;
    return 0;
}
