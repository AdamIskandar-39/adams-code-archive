#include <iostream>
#include <cmath>
using namespace std;
void calBMI();

int main()
{
	calBMI();
	return 0;
}

void calBMI()
{
	float weight, height, BMI;
	cout<<"Type in your weight (kg) and height (meter): ";
	cin>>weight>>height;
	BMI = weight / pow(height,2);
	cout<<BMI;
}
