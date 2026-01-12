#include <iostream>
using namespace std;
int main()
{
	int digit = 0, evenDigit = 0 , sum = 0;
	cout<<"Type in five digits (press Enter after typing each digit): \n";
	for (int i = 1; i <= 5; i = i + 1)
	{
		cin>>digit;
		if (digit % 2 == 0)
			evenDigit = digit;
		else
			evenDigit = 0;
		sum = sum + evenDigit;
	}
	
	cout<<"The sum of even digits entered is: "<<sum;
	return 0;
}
