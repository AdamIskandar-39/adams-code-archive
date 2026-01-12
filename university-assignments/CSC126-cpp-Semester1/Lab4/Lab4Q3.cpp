#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()

{
	// initialize variables for hypotenuse calculation
	double a = 0.00, b = 0.00, square_a = 0.00, square_b = 0.00, hypotenuse = 0.00;
	
	
	// accept user input
	cout<<"Insert length of a: ";
	cin>>a;
	
	cout<<"\nInsert width of b: ";
	cin>>b;
	
	// calculate hypotenuse
	square_a = pow(a,2);
	square_b = pow(b,2);
	hypotenuse = sqrt(square_a + square_b);
	
	
	//display result
	cout<<"\nThe length of the hypotenuse is: "<<setprecision(2)<<hypotenuse;
	
	return 0;
}
