#include <iostream>
using namespace std;
int main()
{
	int minDigit = 0, maxDigit = 0 , sum = 0;
	cout<<"Enter minimum value: ";
	cin>>minDigit;
	cout<<"Enter maximum value: ";
	cin>>maxDigit;
	for (int i = minDigit; i <= maxDigit; i = i + 1)
		sum = sum + i;
	cout<<"The summation of the specified range: "<<sum;
	return 0;
}
