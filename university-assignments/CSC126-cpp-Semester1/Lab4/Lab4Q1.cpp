#include <iostream>
using namespace std;
int main()

{
	// initialize variables for arithmetic operations
	double digit1 = 0.00, digit2 = 0.00, sum = 0.00, minus = 0.00, multiple = 0.00, divide = 0.00;
	
	// and accept user input
	cout<<"Please enter first number: ";
	cin>>digit1;
	
	cout<<"\nPlease enter second number: ";
	cin>>digit2;
	
	// perform calculation
	sum = digit1 + digit2;
	minus = digit1 - digit2;
	multiple = digit1 * digit2;
	divide = digit1 / digit2;
	
	
	// output calculation results
	cout<<"\nResults for the following proces as shown below: \n ----------------------------------------- \n";
	cout<<"\t 1) Addition: "<<digit1<<" + "<<digit2<<" = "<<sum<<endl;
	cout<<"\t 2) Subtraction: "<<digit1<<" - "<<digit2<<" = "<<minus<<endl;
	cout<<"\t 3) Multiplication: "<<digit1<<" * "<<digit2<<" = "<<multiple<<endl;
	cout<<"\t 4) Division: "<<digit1<<" / "<<digit2<<" = "<<divide;
	
	return 0;
}
