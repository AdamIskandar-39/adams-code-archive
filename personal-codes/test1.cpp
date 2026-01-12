#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float mValue = 0, radius = 0, mArea = 0, semicircleArea = 0, shadeRegion = 0;
	const float pi = 3.142;
	
	cout<<"Insert the value of m: ";
	cin>>mValue;
	
	cout<<"Insert the value of radius: ";
	cin>>radius;
	
	mArea = pow(mValue,2);
	semicircleArea = pi * pow(radius,2);
	shadeRegion = mArea - semicircleArea;
	
	cout<<"The area of the shaded region is: "<<shadeRegion<<endl;
	
	return 0;
}
