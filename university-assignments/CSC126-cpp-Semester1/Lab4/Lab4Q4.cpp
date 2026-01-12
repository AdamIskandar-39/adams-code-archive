#include <iostream>
#include <cmath>
using namespace std;
int main()

{
	/*
	initialize variables for side b, rad,
	circle area, square area and shaded region area
	*/
	float sideB = 0.0, rad = 0.0, circleArea = 0.0, squareArea = 0.0, shadeRegion = 0.0;
	
	// accept user input
	cout<<"Enter the length of side B: ";
	cin>>sideB;
	
	cout<<"\nEnter the radius of the circle: ";
	cin>>rad;
	
	// perform calculation
	circleArea = 22.0 / 7.0 * pow(rad,2);
	squareArea = pow(sideB,2);
	shadeRegion = squareArea - (circleArea * 4);
	
	// display result
	cout<<"Area of the square is: "<<squareArea;
	cout<<"\nArea of the circle is: "<<circleArea;
	cout<<"\nArea of the shaded region is: "<<shadeRegion;
	
	return 0;	
}
