#include <iostream>
using namespace std;
void chekDiv(int num);

int main()
{
	int num;
	cout<<"Type a number: ";
	cin>>num;
	chekDiv(num);
	return 0;
}

void chekDiv(int num)
{
	int divFive = 0, sum = 0;
	divFive = num % 5;
	if (divFive == 0)
		sum = num + 10;
	else
		sum = num * 2;
	cout<<sum;
}
