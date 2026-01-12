#include <iostream>
using namespace std;
int main()
{
	int minDigit = 0, maxDigit = 0 , sum = 0, i = 0;
	cout<<"Enter minimum value: ";
	cin>>minDigit;
	i = minDigit;
	cout<<"Enter maximum value: ";
	cin>>maxDigit;
	while (i <= maxDigit)
	{
		sum = sum + i;
		i++;
	}
	cout<<"The summation of the specified range: "<<sum;
	return 0;
}
