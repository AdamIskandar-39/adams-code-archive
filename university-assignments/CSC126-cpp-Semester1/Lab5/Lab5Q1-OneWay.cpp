#include <iostream>
using namespace std;
int main()
{
	// initialize variables
	int number1 = 0;
	
	cout<<"Type a number and press Enter: ";
	cin>>number1;
	
	if (number1 >= 0) // check if number1 is greater or equal to 0
		cout<<number1<<" is a positive number."<<endl;
		
	return 0;
}
