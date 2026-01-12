#include <iostream>
using namespace std;
int main()
{
	// initialize variables
	int number1 = 0, sum = 0, result = 0;
	
	cout<<"Type a number and press enter: ";
	cin>>number1;
	
	if (number1 % 5 == 0)
		{
			sum = number1 + 10;
			cout<<sum<<endl;
		}
	else
		{
			result = number1 * 2;
			cout<<result<<endl;
		}
		
	return 0;
}
