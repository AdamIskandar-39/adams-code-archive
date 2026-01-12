#include <iostream>
using namespace std;
int main()
{
	// initialize variables
	int number1 = 0, number2 = 0, result = 0;
	
	cout<<"Type in two numbers separated by spaces, then press Enter: ";
	cin>>number1>>number2;
	
	if (number1 > number2)
		{
			result = number1 - number2;
			cout<<number1<<" - "<<number2<<" = "<<result<<endl;
		}
	else
		{
			result = number2 - number1;
			cout<<number2<<" - "<<number1<<" = "<<result<<endl;
		}
		
	return 0;
}
