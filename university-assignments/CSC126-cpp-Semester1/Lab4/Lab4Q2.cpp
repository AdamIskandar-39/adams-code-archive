#include <iostream>
using namespace std;
int main()

{
	// initialize variables
	char name[64];
	int day = 0, month = 0, birthYear = 0, currYear = 0, age = 0, agePlusOne = 0;
	
	// accept user input
	cout<<"Enter your name: ";
	gets(name);
	cout<<"Enter your birthday (dd mm yyyy): ";
	cin>>day>>month>>birthYear;
	cout<<"Enter current year: ";
	cin>>currYear;
	
	// calculate age and age+1
	age = currYear - birthYear;
	agePlusOne = age + 1;
	
	/*
	display name of the user and their age 
	for this year and next year
	*/
	cout<<"Hi "<<name<<", Now you are "<<age<<" years old. Next year you will be "<<agePlusOne<<" years old.";
	
	return 0;
}
