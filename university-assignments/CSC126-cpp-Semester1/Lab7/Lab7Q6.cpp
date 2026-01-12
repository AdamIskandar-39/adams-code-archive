#include <iostream>
using namespace std;
int main()
{
	int digit = 0, resultThree = 0, resultFive = 0, i = 1, divisibleNum = 0;
	cout<<"Type in ten digits (press Enter after typing each digit): \n";
	while (i <=10)
		{
			cin>>digit;
			resultThree = digit % 3;
			resultFive = digit % 5;
			if (resultThree == 0 && resultFive == 0)
				divisibleNum = divisibleNum + 1;
			else
				divisibleNum = divisibleNum + 0;
			i++;
		}
	cout<<"There are "<<divisibleNum<<" numbers that is divisble by 3 and 5";
	return 0;
}
