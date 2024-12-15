// Write a C++ program to display the day and month of an input date

#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}; 
string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "Dec"};

int main()
{
	string date;
	string day = "";
	string month = "";
	
	cout << "Enter date in (dd/mm/yyyy) format: ";
	cin >> date;
	
	day += date[0]; day += date[1];
	month += date[3]; month += date[4];
	int m = month -'0';
	cout << m << endl;
	return 0;
	
}