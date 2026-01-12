#include <iostream>
using namespace std;
float rectArea(float, float);
float triArea (float, float);

int main()
{
	float totalArea, rArea, tArea, height, length, base;
	cout<<"Enter the height and length of the rectangle: ";
	cin>>height>>length;
	cout<<"Enter the base of the triangle: ";
	cin>>base;
	rArea = rectArea(height, length);
	tArea = triArea(height, base);
	totalArea = rArea + tArea;
	cout<<"The area of the rectangle is: "<<rArea<<endl;
	cout<<"The area of the triangle is: "<<tArea<<endl;
	cout<<"The total area of the diagram is: "<<totalArea;
	return 0;
}

float rectArea(float height, float length)
{
	float rArea = height * length;
	return rArea;
}

float triArea(float height, float base)
{
	float tArea = 0.5 * base * height;
	return tArea;
}
