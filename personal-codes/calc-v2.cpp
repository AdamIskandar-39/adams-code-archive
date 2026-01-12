#include <iostream>
using namespace std;
int main()
{
	float digit1 = 0, digit2 = 0, result = 0;
	int operation = 0;
	
	cout<<"Insert first digit: ";
	cin>>digit1;
	
	cout<<"Insert second digit: ";
	cin>>digit2;
	
	cout<<"Insert which operation to be done (1 for add, 2 for minus, 3 for multiply, 4 for divide) : ";
	cin>>operation;
	
	switch (operation) {
	case 1:
		result = digit1 + digit2;
		cout<<"The sum of these two digits is: "<<result<<endl;
		break;
	case 2:
		result = digit1 - digit2;
		cout<<"The result of the subtraction of these two digits is: "<<result<<endl;
		break;
	case 3:
		result = digit1 * digit2;
		cout<<"The result of the multiplication of these two digits is: "<<result<<endl;
		break;
	case 4:
		if (digit2 != 0)
		{
			result = digit1 / digit2;
			cout<<"The result of the division of these two digits is: "<<result<<endl;
		}
		else
			cout<<"Error: Cannot divide by zero";
		break;
	default:
		cout<<"Please run this program again and enter valid mathematical operator."<<endl;
		}
	return 0;
}
