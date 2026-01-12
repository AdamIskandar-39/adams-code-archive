#include <iostream>
using namespace std;
int main()
{
	float n, sum = 0;
	cout<<"Enter a number: ";
	cin>>n;
	
	for (int i = 1; i < n; i = i + 1)
	{
		if (i % 2 == 0)
			sum = sum + i;
		else
			sum = sum + (i * 2);
	}
	
	cout<<"The sum of the numbers is: "<<sum;
	return 0;
	
}
