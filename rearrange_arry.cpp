/*Problem Statement: Rearrange the array such that the first half is arranged in increasing order, and the 
second half is arranged in decreasing order */
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{   
    int n;
    cout<<"Enter the number of elements : "<<endl;
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    // Display the elements of v1
    cout << "The array  is: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i]<< " ";
    }
    //mid value
    int h=(n/2);
    sort(v.begin(),v.end());
    sort(v.begin()+h,v.end(),greater<int>());
    for(auto i:v)
    {   
        cout<<i<<" ";
      
    }


}
