#include <iostream>
using namespace std;
int main()
{
	int positiveInt = 0, fact = 1;
	cout<<"Enter a positive integer: ";
	cin>>positiveInt;
	for (int i = 1; i <= positiveInt; i = i + 1)
		fact = fact * i;
	cout<<"Factorial of "<<positiveInt<<" = "<<fact;
	return 0;
}
