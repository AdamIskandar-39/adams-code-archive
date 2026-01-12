#include <iostream>
using namespace std;
int main()
{
	float digit = 0, sum = 0, average = 0;
	cout<<"Type in three digits (press Enter after typing each digit): \n";
	for (int i = 1; i <= 3; i = i + 1)
		{
			cin>>digit;
			sum = sum + digit;
		}
	
	average = sum / 3;
	cout<<"Average of these 3 digits is: "<<average;
	return 0;
}
