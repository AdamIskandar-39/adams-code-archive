#include <iostream>
using namespace std;
float circleArea(float);

int main()
{
	float radius, shadeRegArea, areaBig, areaSmall;
	cout<<"Enter the radius of the bigger circle: ";
	cin>>radius;
	areaBig = circleArea(radius);
	cout<<"Enter the radius of the smaller circle: ";
	cin>>radius;
	areaSmall = circleArea(radius);
	shadeRegArea = areaBig - areaSmall;
	cout<<"The area of the shaded region is: "<<shadeRegArea;
	return 0;
}

float circleArea(float radius)
{
	float area = 3.142 * radius * radius;
	return area;
}
