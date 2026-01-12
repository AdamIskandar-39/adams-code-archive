#include <iostream>
#include <cmath>
using namespace std;
void calBMI(float weight, float height);

int main()
{
	float weight, height;
	cout<<"Type in your weight (kg) and height (meter): ";
	cin>>height>>weight;
	calBMI(height,weight);
	return 0;
}

void calBMI(float weight, float height)
{
	float BMI;
	BMI = weight / pow(height,2);
	cout<<BMI;
}
