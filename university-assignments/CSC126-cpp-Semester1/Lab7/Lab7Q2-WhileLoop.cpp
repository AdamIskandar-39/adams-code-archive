#include <iostream>
using namespace std;
int main()
{
	int digit = 0, evenDigit = 0 , sum = 0, i = 1;
	cout<<"Type in five digits (press Enter after typing each digit): \n";
	while (i <= 5)
	{
		cin>>digit;
		if (digit % 2 == 0)
			evenDigit = digit;
		else
			evenDigit = 0;
		sum = sum + evenDigit;
		i++;
	}
	
	cout<<"The sum of even digits entered is: "<<sum;
	return 0;
}
