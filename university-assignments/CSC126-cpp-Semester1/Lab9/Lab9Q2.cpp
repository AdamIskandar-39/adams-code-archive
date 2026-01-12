#include <iostream>
using namespace std;
void chekDiv();

int main()
{
	chekDiv();
	return 0;
}

void chekDiv()
{
	int num = 0, divFive = 0, sum = 0;
	cout<<"Type a number: ";
	cin>>num;
	divFive = num % 5;
	if (divFive == 0)
		sum = num + 10;
	else
		sum = num * 2;
	cout<<sum;
}
