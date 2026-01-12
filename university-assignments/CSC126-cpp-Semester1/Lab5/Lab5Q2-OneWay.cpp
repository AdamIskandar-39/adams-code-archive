#include <iostream>
using namespace std;
int main()
{
	// initialize variables
	int number1 = 0, sum = 0;
	
	cout<<"Type a number and press Enter: ";
	cin>>number1;
	
	if (number1 % 3 == 0)	//check for remainder. If remainder is 0 then it's divisible by 3
		{
			sum = number1 + 20;
			cout<<sum<<endl;
		}
	
	return 0;
}
