#include<iostream>
using namespace std;

class circle
{   float radius;
    public:
         
         float getArea(void);
         float getCircumference(void);
};

float circle ::  getArea(void)
{   
    cout<<"Enter radius: ";
    cin>>radius;
    cout<<"Area: "<<3.14*radius*radius<<endl;
}

float circle :: getCircumference(void)
{
    cout<<"circumference: "<<2*3.14*radius<<endl;
    
}

int main()
{
    circle c;
    
    c.getArea();
    c.getCircumference();
    
    return 0;
    
}