/*Write a C++ program to separate even and odd numbers in an array of integers.
 Put all even numbers first, and then odd numbers.*/
 #include<iostream>
 using namespace std;
 int main()
 {
    int n;
    cout<<"Enter the size of an array : "<<endl;
    cin>>n;
    int temp,temp1;
    int arr[n];
    cout<<"Enter the elements : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"The original array is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<"\nOutput array : "<<endl;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<" ";
        }
    }
 }