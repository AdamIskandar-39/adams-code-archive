#include <iostream>
using namespace std;
int main()
{
	int num = 0, divisibleThree = 0, divisibleFive = 0;
	cout<<"Enter number ";
	cin>>num;
	while (num != -1)
	{
		if (num % 3 == 0)
			divisibleThree = divisibleThree + 1;
		if (num % 5 == 0)
			divisibleFive = divisibleFive + 1;
		cout<<"Enter number ";
		cin>>num;
	}
	cout<<"There are "<<divisibleThree<<" numbers that can be divisible by 3"<<endl;
	cout<<"There are "<<divisibleFive<<" numbers that can be divisible by 5";
	return 0;
}
