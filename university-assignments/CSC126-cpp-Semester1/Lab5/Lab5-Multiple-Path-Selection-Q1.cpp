#include <iostream>
using namespace std;
int main()
{
	// initialize variable
	float richterScale = 0.0;
	
	cout<<"Enter Richter scale value here: ";
	cin>>richterScale;
	
	if (richterScale < 5.0)
		cout<<"Little or no damage";
	else if (richterScale >= 5.0 && richterScale < 5.5)
		cout<<"Some damage";
	else if (richterScale >= 5.5 && richterScale < 6.5)
		cout<<"Serious damage";
	else if (richterScale >= 6.5 && richterScale < 7.5)
		cout<<"Disaster";
	else
		cout<<"Catastrophe";
		
	return 0;
}
