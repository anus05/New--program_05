//Write a C++ program to implement a class called Circle that has public member variables for radius.
// Include member functions to calculate the circle's area and circumference.

#include<iostream>
using namespace std;

class Circle
{
    public :
        float radius;

        float Area(float radius);
        float Circumference(float radius);
};

float Circle :: Area(float radius)
{
    return 3.14*radius*radius;
}

float Circle :: Circumference(float radius)
{
    return 2*3.14*radius;
}

int main()
{
    Circle obj;
    int rr;
    cout<<"Enter the radius : ";
    cin>>rr;
    cout<<"Area : "<<obj.Area(rr);
    cout<<"\nCircumference : "<<obj.Circumference(rr);
    return 0;
}