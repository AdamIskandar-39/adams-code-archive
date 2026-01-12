#include <iostream>
using namespace std;
int main()
{	
	int num = 0, x = 0;
	float avg = 0.00, sum = 0.00, total = 0, remaindCheck = 0.00, remaind = 0.00;
	cout<<"Enter a series of integer: ";
	cin>>num;
	while (num != -1)
		{
			if (num > 0)
				{
					total = total + num;
					x++;
				}
			remaindCheck = num % 2;
			if (remaindCheck !=0)
				{
					remaind = remaindCheck;
					sum = sum + remaind;
				}
			cin>>num;
		}
	avg = total / x;
	cout<<"Total: "<<total<<endl;
	cout<<"Average: "<<avg<<endl;
	cout<<"Remainder sum: "<<sum;
	return 0;
}
