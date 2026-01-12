#include <iostream>
using namespace std;
int main()
{
	int n = 0, sum = 0, i = 1;
	cout<<"Type a number: ";
	cin>>n;
	while (i <= n)
		{
			sum = sum + i;
			i++;
		}
		
	cout<<"The sum of the numbers leading up to "<<n<<" is: "<<sum;
	return 0;
}
