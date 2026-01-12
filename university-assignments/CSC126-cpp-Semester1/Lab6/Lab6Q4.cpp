#include <iostream>
#include <string>
using namespace std;
int main()
{
	int positiveInteger = 0, multiplyResult = 0;
	cout<<"Enter a positive integer: ";
	cin>>positiveInteger;
	
	for (int i = 1; i <= 10; i = i + 1)
		{
			multiplyResult = positiveInteger * i;
			cout<<positiveInteger<<" * "<<i<<" = "<<multiplyResult<<endl;
		}
	return 0;
}
