#include <iostream>
using namespace std;
int main()
{
	float digit = 0, sum = 0, average = 0;
	int i = 1;
	cout<<"Type in three digits (press Enter after typing each digit): \n";
	while (i <= 3)
		{
			cin>>digit;
			sum = sum + digit;
			i++;
		}
	
	average = sum / 3;
	cout<<"Average of these 3 digits is: "<<average;
	return 0;
}
