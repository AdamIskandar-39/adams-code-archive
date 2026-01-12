#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i = 1, n = 0, sum = 0;
	cout<<"Type a number: ";
	cin>>n;
	while (i <= n)
		{
			sum = sum + pow(i,2);
			i++;
		}
		
	cout<<"The sum of the numbers leading up to "<<n<<" with power of 2 is: "<<sum;
	return 0;
}
