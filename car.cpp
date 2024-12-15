/*Write a C++ program to create a class called Car that has private member variables for company, model, and year. 
Implement member functions to get and set these variables.*/
#include<iostream>
using namespace std;
class Car{
    private:
        string company;
        string model;
        int year;
    public:
        void getdata(void);
        void setdata(void);    
};
void Car::getdata()
{
    cout<<"Enter the name of the company : "<<endl;
    getline(cin,company);
    cout<<"Enter the name of the model : "<<endl;
    getline(cin,model);
    cout<<"Enter the Year : "<<endl;
    cin>>year;
}
void Car::setdata()
{
    cout<<"Company Name : "<<company<<endl;
    cout<<"Model Name : "<<model<<endl;
    cout<<"Year : "<<year<<endl;
}
int main(){
    Car c;
    c.getdata();
    c.setdata();

    return 0;
}