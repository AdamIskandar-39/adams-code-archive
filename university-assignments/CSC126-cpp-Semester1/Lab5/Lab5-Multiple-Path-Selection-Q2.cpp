#include <iostream>
using namespace std;
int main()
{
	// initialize variables
	char operation;
	float digit1 = 0.0, digit2 = 0.0, result = 0.0;
	
	cout<<"Choose an operator (+,-,*,/): ";
	cin>>operation;
	
	cout<<"Enter two numbers separated by spaces: ";
	cin>>digit1>>digit2;
	
	switch (operation)
	{
		case '+':
			{
				result = digit1 + digit2;
				cout<<digit1<<" + "<<digit2<<" = "<<result;
				break;
			}
		case '-':
			{
				result = digit1 - digit2;
				cout<<digit1<<" - "<<digit2<<" = "<<result;
				break;
			}
		case '*':
			{
				result = digit1 * digit2;
				cout<<digit1<<" * "<<digit2<<" = "<<result;
				break;
			}
		case '/':
			{
				result = digit1 / digit2;
				if (digit2 == 0)
					cout<<"Not divisible by 0";
				else
					cout<<digit1<<" / "<<digit2<<" = "<<result;
				break;
			}
		default:
			cout<<"Please enter valid operator";
	}
	return 0;
}
