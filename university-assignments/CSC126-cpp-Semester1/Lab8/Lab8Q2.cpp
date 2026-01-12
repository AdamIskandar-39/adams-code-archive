#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	cout<<"Enter an integer number: ";
	cin>>num;
	while (num % 2 !=0)
	{
		cout<<"Enter the next integer number: ";
		cin>>num;
	}
	cout<<"You have entered an even number to terminate the program.";
	return 0;
}
