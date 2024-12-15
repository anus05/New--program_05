/*Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary
. Include member functions to calculate and set salary based on employee performance.*/
#include<iostream>
using namespace std;
class Employee{
    private:
        string name;
        int employee_id;
        int salary;
    public:
        void getdata(void);
        void getperformance(void);
        void setsalary(void);  
        void display(void);  
};
void employee::getdata()
{
    cout<<"Enter the name of the employee : "<<endl;
    getline(cin,name);
    cout<<"Enter employee Id : "<<endl;
    cin>>employee_id;
    cout<<"Performance Rate : "<<endl;
    cin>>performanceRating;
}
void getperformance(float performanceRating) {
      if (performanceRating >= 0.0 && performanceRating <= 1.4) { 
        salary *= performanceRating; 
      } else {
        cout << "Invalid performance rating. Salary remains unchanged." << endl; 
      }
    }
