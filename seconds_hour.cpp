/*Convert time from seconds to HH:MM:SS format using class
program in C++*/
#include<iostream>
using namespace std;

class Time{
    private:
       int seconds;
        int hour;
         int minitue;
    public:
    void getData();
    void convert();
    void display();
};
void Time::getData()
{
    cout<<"Enter the time in seconds : "<<endl;
    cin>>seconds;
}
void Time::convert()
{
    minitue=(seconds/60)%60;
    hour=seconds/3600;
    seconds=seconds%60;
}
void Time::display()
{
    cout<<"The Time is in the form of HH:MM:SS = "<<hour<<":"<<minitue<<":"<<seconds;
}
int main()
{
    Time t;
    t.getData();
    t.convert();
    t.display();
    return 0;
}