#include <iostream>
using namespace std;
int main()
{
	// initialize variable
	char character1;
	int digit1 = 0, digit2 = 0, sum = 0;
	
	cout<<"Type a character and press Enter: ";
	cin>>character1;
	//gets(character1);

	if (character1 == 'Y' || character1 == 'y')
		{
			cout<<"Type in two numbers and press Enter: ";
			cin>>digit1>>digit2;
			sum = digit2 + digit2;
			cout<<endl<<"The sum of these two digits is: "<<sum;
		}
		
	return 0;
}
