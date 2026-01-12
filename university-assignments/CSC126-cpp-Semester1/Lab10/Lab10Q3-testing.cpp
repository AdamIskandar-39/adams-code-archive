#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int negativeOrPositive(int);
int oddOrEven(int);
int divisibleByFive(int);

int main()
{
	char selection;
	int num, status;
	cout<<"CHOICE"<<setw(25)<<"OPERATION"<<endl;
	cout<<setw(3)<<left<<"A"<<setw(30)<<right<<"Negative or positive number"<<endl;
	cout<<setw(3)<<left<<"B"<<setw(30)<<right<<"Odd or even number"<<endl;
	cout<<setw(3)<<left<<"C"<<setw(30)<<right<<"Divisible by five"<<endl<<endl;
	cout<<"Enter your choice: ";
	cin>>selection;
	if (selection == 'A' || selection == 'a')
	{
		cout<<"Type a number: ";
		cin>>num;
		status = negativeOrPositive(num);
		cout<<"Is the number positive? (1 = Yes, 0 = No): "<<status;
	}
	else if (selection == 'B' || selection == 'b')
	{
		cout<<"Type a number: ";
		cin>>num;
		status = oddOrEven(num);
		cout<<"Is the number odd, or even? (1 = Even, 0 = Odd): "<<status;
	}
	else if (selection == 'C' || selection == 'c')
	{	
		cout<<"Type a number: ";
		cin>>num;
		status = divisibleByFive(num);
		cout<<"Is the number divisible by 5? (1 = Yes, 0 = No): "<<status;
	}
	else
		cout<<"Invalid choice. Re-run the program and type in valid choice.";
	return 0;
}

int negativeOrPositive(int num)
{
	int status;
	if (num > 0)
		status = 1;
	else
		status = 0;
	return status;
}

int oddOrEven(int num)
{
	int status;
	if (num % 2 == 0)
		status = 1;
	else
		status = 0;
	return status;
}

int divisibleByFive(int num)
{
	int status;
	if (num % 5 == 0)
		status = 1;
	else
		status = 0;
	return status;
}
