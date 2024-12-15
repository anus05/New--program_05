#include<iostream>
using namespace std;

class Student {
    private:
        string name;
        int class_n;
        int roll_no;
        int marks;
        char Grade;

    public:
        void getData();       
        void calculateGrade(); 
        void display();       
};

void Student::getData() {
    cout << "Enter the Student name: ";
    getline(cin, name);
    cout << "Enter the Student class: ";
    cin >> class_n;
    cout << "Enter the student roll number: ";
    cin >> roll_no;
    cout << "Enter marks of the student: ";
    cin >> marks;
}

void Student::calculateGrade() {
    if (marks > 90 && marks <= 100) {
        Grade = 'O';
    } else if (marks > 80 && marks <= 90) {
        Grade = 'A';
    } else if (marks > 60 && marks <= 80) {
        Grade = 'B';
    } else if (marks > 40 && marks <= 60) {
        Grade = 'C';
    } else {
        Grade = 'F';
    }
}

void Student::display() {
    cout << "Name: " << name << endl;
    cout << "Class: " << class_n << endl;
    cout << "Roll number: " << roll_no << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << Grade << endl;
}

int main() {
    Student s;
    s.getData();
    s.calculateGrade();
    s.display();
    return 0;
}
